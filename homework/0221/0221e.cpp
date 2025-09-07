#include <iostream>
#include <string>
//将time转换成规范格式
std::string timeChange(int time)
{
    if(0<=time and time<10)
    {
        return "00"+std::to_string(time);
    }
    else if(9<time and time<100)
    {
        return "0"+std::to_string(time);
    }
    else return std::to_string(time);
}
class CWarrior
{
    public:
        int num;//在司令部的编号
        int strength;
        int attack;
        explicit CWarrior(int n=0,int st=0,int at=0)
        {
            num=n;
            strength=st;
            attack=at;
        }
};
class CHeadquarter
{
    //顺序都是按照存储顺序的
    CWarrior w[6];//记录每个成员最新的情况
    int warriorSum[6];//记录每类现在有几个成员
    public:
        int sum;
        char warriorName[5][10]={"iceman","lion","wolf","ninja","dragon"};
        //存储顺序和名字
        int sumStrength;//司令部的生命元
        CHeadquarter()
        {
            for(int i=0;i<5;i++) warriorSum[i]=0;
            sum=0;
        }
        //修改第i个武士的属性
        void modifyNum(int i,int n)
        {
            w[i].num=n;
        }
        void modifyAttack(int i,int a)
        {
            w[i].attack=a;
        }
        void modifyStrength(int i,int s)
        {
            w[i].strength=s;
        }
        //修改第i类武士的个数
        void modifySum(int i)
        {
            warriorSum[i]++;
        }
        void printWarrior(int side,int time,int i)
        {
            std::cout<<timeChange(time);
            if(side==0) std::cout<<" red ";
            else std::cout<<" blue ";
            std::cout<<warriorName[i]<<" "<<w[i].num<<" ";
            std::cout<<"born with strength "<<w[i].strength<<",";
            std::cout<<warriorSum[i]<<" "<<warriorName[i]<<" in ";
            if(side==0) std::cout<<"red";
            else std::cout<<"blue";
            std::cout<<" headquarter"<<std::endl;

        }
};

//输出停止制造武士
void printStop(int time,int side)//0red 1blue
{
    if(side==0)
    {
        std::cout<<timeChange(time)<<" "<<"red headquarter stops making warriors"<<std::endl;
    }
    else std::cout<<timeChange(time)<<" "<<"blue headquarter stops making warriors"<<std::endl;   
}
CHeadquarter head[2];//head[0]表示红，head[1]表示蓝
int List[2][5]={{0,1,2,3,4},{1,4,3,0,2}};
int main()
{
    int N;//数据组数
    int m;//初始生命元
    int warriorStrength[5];//存储生命值
    int redList[5]={0,1,2,3,4};//红方制造的顺序
    int blueList[5]={1,4,3,0,2};//蓝方制造的顺序
    int inList[5]={4,3,0,1,2};//输入的顺序
    int minStrength=-1;//最小的生命值
    std::cin>>N;
    for(int ii=1;ii<=N;ii++)
    {
        std::cout<<"Case:"<<ii<<std::endl;
        std::cin>>m;
        
        CHeadquarter red;CHeadquarter blue;

        head[0].sumStrength=m;
        head[1].sumStrength=m;
        for(int i=0;i<5;i++)
        {
            std::cin>>warriorStrength[inList[i]];
            red.modifyStrength(inList[i],warriorStrength[inList[i]]);//修改红方该武士的生命值
            blue.modifyStrength(inList[i],warriorStrength[inList[i]]);//修改蓝方该武士的生命值
            if(i==0 or minStrength>warriorStrength[inList[i]])
                minStrength=warriorStrength[inList[i]];//得到生命值的最小值
        }
        int redi=0,bluei=0;
        int time=0;
        while(head[0].sumStrength>=minStrength and head[1].sumStrength>=minStrength)
        {
            while(red.sumStrength<warriorStrength[redList[redi%5]])
                redi++;
            //找到第一个可以造的
            red.sumStrength-=warriorStrength[redList[redi%5]];//司令部减掉生命元
            red.modifyNum(redList[redi%5],red.sum+1);//修改造出来的武士对应的编号
            red.sum++;//修改总个数
            red.modifySum(redList[redi%5]);
            red.printWarrior(0,time,redList[redi%5]);
            redi++;


            while(blue.sumStrength<warriorStrength[blueList[bluei%5]])
                bluei++;
            //找到第一个可以造的
            blue.sumStrength-=warriorStrength[blueList[bluei%5]];//司令部减掉生命元
            blue.modifyNum(blueList[bluei%5],blue.sum+1);//修改造出来的武士对应的编号
            blue.sum++;//修改总个数
            blue.modifySum(blueList[bluei%5]);
            blue.printWarrior(1,time,blueList[bluei%5]);
            bluei++;
            time++;
        }
        if(red.sumStrength<minStrength)//红方结束了
        {
            printStop(time,0);
            while(blue.sumStrength>=minStrength)
            {
                while(blue.sumStrength<warriorStrength[blueList[bluei%5]])
                    bluei++;
                //找到第一个可以造的
                blue.sumStrength-=warriorStrength[blueList[bluei%5]];//司令部减掉生命元
                blue.modifyNum(blueList[bluei%5],blue.sum+1);//修改造出来的武士对应的编号
                blue.sum++;//修改总个数
                blue.modifySum(blueList[bluei%5]);
                blue.printWarrior(1,time,blueList[bluei%5]);
                bluei++;
                time++;
            }
            printStop(time,1);   
        }
        else//蓝方结束了
        {
            bool flag=true;
            while(red.sumStrength>=minStrength)
            {
                while(red.sumStrength<warriorStrength[redList[redi%5]])
                    redi++;
                //找到第一个可以造的
                red.sumStrength-=warriorStrength[redList[redi%5]];//司令部减掉生命元
                red.modifyNum(redList[redi%5],red.sum+1);//修改造出来的武士对应的编号
                red.sum++;//修改总个数
                red.modifySum(redList[redi%5]);
                red.printWarrior(0,time,redList[redi%5]);
                redi++;time++;
                if(flag) 
                {printStop(time-1,1);flag=false;}
            
            }
            printStop(time,0);   
        }
    }

    
}
