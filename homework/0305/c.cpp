#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <memory.h>

int warriorStrength[5];//存储生命值
int curi[2];//表示造武士的顺序，0Red 1blue
int List[2][5]={{0,1,2,3,4},{1,4,3,0,2}};

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
        int strength;//生命元
        explicit CWarrior(int n=0,int st=0):num(n),strength(st){}
};
class CDragon:public CWarrior
{
    public:
        int weapon;//武器编号
        double morale;//士气 
        explicit CDragon(int n=0,int st=0,int wea=0,double mor=0):
        CWarrior(n,st),weapon(wea),morale(mor){}//构造函数
};
class CLion:public CWarrior
{
    public:
        int loyalty;//忠诚度
        explicit CLion(int n=0,int st=0,int loy=0):
        CWarrior(n,st),loyalty(loy){}//构造函数
};
class CWolf:public CWarrior
{
    public:
        explicit CWolf(int n=0,int st=0):
        CWarrior(n,st){}//构造函数
};
class CNinja:public CWarrior
{
    
    public:
        int weapon1;int weapon2;//两件武器
        explicit CNinja(int n=0,int st=0,int w1=0,int w2=0):
        CWarrior(n,st),weapon1(w1),weapon2(w2){}//构造函数
};
class CIceman:public CWarrior
{
    public:
        int weapon;//一件武器
        explicit CIceman(int n=0,int st=0,int wea=0):
        CWarrior(n,st),weapon(wea){}//构造函数
};

class CHeadquarter
{
    //顺序都是按照存储顺序的
    int warriorSum[6];//记录每类现在有几个成员
    //队列记录每种类型
    std::vector<CIceman> QIceman;std::vector<CLion> QLion;
    std::vector<CWolf> QWolf;std::vector<CNinja> QNinja;std::vector<CDragon> QDragon;
    public:
        int sumWarrior;//总武士个数
        const char warriorName[5][10]={"iceman","lion","wolf","ninja","dragon"};
        //存储武士顺序和名字 分别对应编号0-4
        int sumStrength;//司令部的生命元
        const char warriorWeapon[3][10]={"sword","bomb","arrow"};//存储武器
        //对该类进行重置
        void init()
        {
            sumWarrior=0;sumStrength=0;
            memset(warriorSum,0,sizeof(warriorSum));
            QIceman.clear();QLion.clear();QWolf.clear();QDragon.clear();QNinja.clear();
        }
        CHeadquarter()
        {
            sumWarrior=0;sumStrength=0;
            QIceman.clear();QLion.clear();QWolf.clear();QDragon.clear();QNinja.clear();
        }
        //添加种类为warrior的武士
        void warriorBorn(int warrior)
        {
            warriorSum[warrior]++;
            if(warrior==0)//造iceman
            {
                CIceman iceman=CIceman(sumWarrior,warriorStrength[0],sumWarrior%3);
                QIceman.push_back(iceman);
            }
            else if(warrior==1)//造lion
            {
                CLion lion=CLion(sumWarrior,warriorStrength[1],sumStrength);
                QLion.push_back(lion);
            }
            else if(warrior==2)//造wolf
            {
                CWolf wolf=CWolf(sumWarrior,warriorStrength[2]);
                QWolf.push_back(wolf);
            }
            else if(warrior==3)//造ninja
            {
                CNinja ninja=CNinja(sumWarrior,warriorStrength[3],sumWarrior%3,(sumWarrior+1)%3);
                QNinja.push_back(ninja);
            }
            else//造dragon
            {
                CDragon dragon=CDragon(sumWarrior,warriorStrength[4],sumWarrior%3,1.0*sumStrength/warriorStrength[4]);
                QDragon.push_back(dragon);
            }
        }
        void printWarrior(int side,int time,int i)
        {
            std::cout<<timeChange(time);
            if(side==0) std::cout<<" red ";
            else std::cout<<" blue ";
            std::cout<<warriorName[i]<<" "<<sumWarrior<<" ";
            std::cout<<"born with strength "<<warriorStrength[i]<<",";
            std::cout<<warriorSum[i]<<" "<<warriorName[i]<<" in ";
            if(side==0) std::cout<<"red";
            else std::cout<<"blue";
            std::cout<<" headquarter"<<std::endl;
            switch(i)
            {
                case 0:
                    std::cout<<"It has a "<<warriorWeapon[QIceman.back().weapon]<<std::endl;
                    break;
                case 1:
                    std::cout<<"It's loyalty is "<<QLion.back().loyalty<<std::endl;
                    break;
                case 2:
                    break;
                case 3:
                    std::cout<<"It has a "<<warriorWeapon[QNinja.back().weapon1];
                    std::cout<<" and a "<<warriorWeapon[QNinja.back().weapon2]<<std::endl;
                    break;
                case 4:
                    std::cout<<"It has a "<<warriorWeapon[QDragon.back().weapon];
                    std::cout<<",and it's morale is ";
                    std::cout<<std::fixed<<std::setprecision(2)<<QDragon.back().morale<<std::endl;
                    break;
            }
        }
};
//建设司令部
CHeadquarter head[2];//head[0]表示红，head[1]表示蓝

//输出停止制造武士
void printStop(int time,int side)//0red 1blue
{
    if(side==0)
    {
        std::cout<<timeChange(time)<<" "<<"red headquarter stops making warriors"<<std::endl;
    }
    else std::cout<<timeChange(time)<<" "<<"blue headquarter stops making warriors"<<std::endl;   
}

//某一方在某一刻造武士
void makeWarrior(int side,int time)
{
    while(head[side].sumStrength<warriorStrength[List[side][curi[side]%5]])
        curi[side]++;
    //找到第一个可以造的
    //List[side][curi[side]%5]是当前可以造的武士种类编号
    head[side].sumStrength-=warriorStrength[List[side][curi[side]%5]];//司令部减掉生命元
    head[side].sumWarrior++;//修改总个数
    head[side].warriorBorn(List[side][curi[side]%5]);
    head[side].printWarrior(side,time,List[side][curi[side]%5]);
    curi[side]++;
}
int main()
{
    int N;//数据组数
    int m;//初始生命元
    
    int inList[5]={4,3,0,1,2};//输入的顺序
    int minStrength=-1;//最小的生命值
    std::cin>>N;
    for(int ii=1;ii<=N;ii++)
    {
        std::cout<<"Case:"<<ii<<std::endl;
        std::cin>>m;
        //初始化
        head[0].init();head[1].init();
        head[0].sumStrength=m;
        head[1].sumStrength=m;
        curi[0]=0;curi[1]=0;

        for(int i=0;i<5;i++)
        {
            std::cin>>warriorStrength[inList[i]];
            if(i==0 or minStrength>warriorStrength[inList[i]])
                minStrength=warriorStrength[inList[i]];//得到生命值的最小值
        }
        
        int time=0;
        while(head[0].sumStrength>=minStrength and head[1].sumStrength>=minStrength)
        {
            makeWarrior(0,time);
            makeWarrior(1,time);
            time++;
        }
        if(head[0].sumStrength<minStrength)//红方结束了
        {
            printStop(time,0);
            while(head[1].sumStrength>=minStrength)
            {
                makeWarrior(1,time);
                time++;
            }
            printStop(time,1);   
        }
        else//蓝方结束了
        {
            bool flag=true;
            while(head[0].sumStrength>=minStrength)
            {
                makeWarrior(0,time);
                time++;
                if(flag) //防止先蓝后红
                {printStop(time-1,1);flag=false;}
            }
            printStop(time,0);   
        }
    }   
}
