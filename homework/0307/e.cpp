#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
//#include <memory.h>
using namespace std;
int warriorStrength[5];int warriorAttack[5];//武士的生命力，武士的攻击力
int cityTotal,timeTotal;//城市数,时间数
int loyaltyLoss;
int redorder[5]={2,3,4,1,0};
int blueorder[5]={3,0,1,2,4};
class CWeapon
{
    public:
        int weaponId;//武器编号
        int attack;//武器攻击力
        int available;//可使用次数
        string weaponName;//武器名字
        explicit CWeapon(int id,int at,int av,string name):weaponId(id),attack(at),available(av),weaponName(name){}
};
class CSword:public CWeapon
{
    public:
        explicit CSword(int id,int at):CWeapon(id,at,9999,"sword"){}
};
class CBomb:public CWeapon
{
    public:
        explicit CBomb(int id,int at):CWeapon(id,at,1,"bomb"){}
};
class CArrow:public CWeapon
{
    public:
        explicit CArrow(int id,int at):CWeapon(id,at,2,"arrow"){}
};
class CWarrior
{
    public:
        int warriorId;//编号
        int strength;//生命元
        int attack;//攻击力
        int head;//所属阵营
        int location;//所在位置
        int loyalty;
        CWeapon* weaponOwn[10];//所有武器
        int weaponType[3];//各种武器数量
        int weaponTotal;//总武器数量
        string warriorName;//武士名字
        int warriorType;//武士类型，0dragon,1ninja,2iceman,3lion,4wolf

        explicit CWarrior(int head,int warriorId,int strength,int attack,int weaponTotal,int location,int warriorType,string name,int loyalty=0):
        head(head),warriorId(warriorId),strength(strength),attack(attack),
        weaponTotal(weaponTotal),location(location),warriorType(warriorType),warriorName(name),loyalty(loyalty)
        {
            for(int i=0;i<10;i++)
            {weaponType[i%3]=0;
            weaponOwn[i]=nullptr;}
        }
        ~CWarrior()
        {
            for(int i=0;i<10;i++)
                if(weaponOwn[i]!=nullptr)  delete weaponOwn[i];
        }

        void chooseWeapon(int n)//赋予武器，n是传入的编号
        {
            if(n%3==0)
            {weaponOwn[weaponTotal++]=new CSword(0,attack*2/10);weaponType[0]++;}
            else if(n%3==1)
            {weaponOwn[weaponTotal++]=new CBomb(1,attack*4/10);weaponType[1]++;}
            else if(n%3==2)
            {weaponOwn[weaponTotal++]=new CArrow(2,attack*3/10);weaponType[2]++;}  
        }

};
class CDragon:public CWarrior
{
    public:
        explicit CDragon(int head,int warriorId,int strength,int attack,int location):
        CWarrior(head,warriorId,strength,attack,0,location,0,"dragon")
        {chooseWeapon(warriorId);}
};
class CNinja:public CWarrior
{
    public:
        explicit CNinja(int head,int warriorId,int strength,int attack,int location):
        CWarrior(head,warriorId,strength,attack,0,location,1,"ninja")
        {chooseWeapon(warriorId);chooseWeapon(warriorId+1);}
};
class CIceman:public CWarrior
{
    public:
        explicit CIceman(int head,int warriorId,int strength,int attack,int location):
        CWarrior(head,warriorId,strength,attack,0,location,2,"iceman")
        {chooseWeapon(warriorId);}
};
class CLion:public CWarrior
{
    public:
        explicit CLion(int head,int warriorId,int strength,int attack,int location,int l):
        CWarrior(head,warriorId,strength,attack,0,location,3,"lion",l)
        {chooseWeapon(warriorId);}
};
class CWolf:public CWarrior
{
    public:
        explicit CWolf(int head,int warriorId,int strength,int attack,int location):
        CWarrior(head,warriorId,strength,attack,0,location,4,"wolf")
        {}
};

class CHeadQuarter
{
    public:
    int headQuarterStrength;
    int warriorTotal;//该司令部总共有几个武士
    int headId;//0red1blue
    int warriorPos[25];//表示在每个城市的武士编号
    int* order;//表示制造武士的顺序,是一个数组
    int cur;//表示在order里面的位置
    CWarrior* warriorList[110];
    
    CHeadQuarter(int id,int s,int* o):headQuarterStrength(s),headId(id),order(o)
    {
        memset(warriorPos,0,sizeof(warriorPos));
        warriorTotal=0;cur=0;
        for(int i=0;i<110;i++)
            warriorList[i]=nullptr;
    }
    ~CHeadQuarter()
    {
        for(int i=0;i<110;i++)
            if(warriorList[i]!=nullptr) delete warriorList[i];
    }
    void makeWarrior(int t)
    {
        if(cur==-1) return;
        int nowMake=order[cur];//现在造的是
        if(headQuarterStrength>=warriorStrength[nowMake])
        {
            headQuarterStrength-=warriorStrength[nowMake];warriorTotal++;
            warriorPos[headId*(cityTotal+1)]=warriorTotal;
            if(nowMake==0)
            {   
                warriorList[warriorTotal-1]=
                new CDragon(headId,warriorTotal, warriorStrength[0], warriorAttack[0], headId*(cityTotal+1));
            }
            if(nowMake==1)
            {   
                warriorList[warriorTotal-1]=
                new CNinja(headId,warriorTotal, warriorStrength[1], warriorAttack[1], headId*(cityTotal+1));
            }
            if(nowMake==2)
            {   
                warriorList[warriorTotal-1]=
                new CIceman(headId,warriorTotal, warriorStrength[2], warriorAttack[2], headId*(cityTotal+1));
            }
            if(nowMake==3)
            {   
                warriorList[warriorTotal-1]=
                new CLion(headId,warriorTotal, warriorStrength[3], warriorAttack[3], headId*(cityTotal+1),headQuarterStrength);
            }
            if(nowMake==4)
            {   warriorList[warriorTotal-1]=
                new CWolf(headId,warriorTotal, warriorStrength[4], warriorAttack[4], headId*(cityTotal+1));
            }
            if(headId==0)//红方输出
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" red ";
                cout<<warriorList[warriorTotal-1]->warriorName<<" "<<warriorTotal<<" born"<<endl;
            }
            if(headId==1)//蓝方输出
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" blue ";
                cout<<warriorList[warriorTotal-1]->warriorName<<" "<<warriorTotal<<" born"<<endl;
            }
            if(nowMake==3) cout<<"Its loyalty is "<<headQuarterStrength<<endl;
            cur=(cur+1)%5;
        }
        else cur=-1;//不再接着造了
    }
};
//狮子逃跑
void LionRun(CHeadQuarter& red,CHeadQuarter& blue,int t)
{
    int Id;
    for(int i=0;i<=cityTotal+1;i++)
    {
        if(i!=cityTotal+1 and red.warriorPos[i]!=0)
        {
            Id=red.warriorPos[i]-1;//在warriorList里面的位置
            if(red.warriorList[Id]->warriorType==3 and red.warriorList[Id]->loyalty<=0)
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" red lion ";
                cout<<Id+1<<" ran away"<<endl;
                red.warriorPos[i]=0;//清零
                red.warriorList[Id]=nullptr;//删除指针
            }
        }
        if(i!=0 and blue.warriorPos[i]!=0)
        {
            Id=blue.warriorPos[i]-1;//在warriorList里面的位置
            if(blue.warriorList[Id]->warriorType==3 and blue.warriorList[Id]->loyalty<=0)
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" blue lion ";
                cout<<Id+1<<" ran away"<<endl;
                blue.warriorPos[i]=0;//清零

                blue.warriorList[Id]=nullptr;//占位
            }
        }
    }         
}

//前进
//把WarriorPos改的和实际location一致
void modifyRedPos(CHeadQuarter& head)
{
    for(int i=cityTotal+1;i>=0;i--)
    {
        if(head.warriorPos[i]!=0)
        {
            int Id=head.warriorPos[i]-1;
            head.warriorPos[i]=0;//清零
            head.warriorPos[head.warriorList[Id]->location]=Id+1;
        }
    }
}
void modifyBluePos(CHeadQuarter& head)
{
    for(int i=0;i<=cityTotal+1;i++)
    {
        if(head.warriorPos[i]!=0)
        {
            int Id=head.warriorPos[i]-1;
            head.warriorPos[i]=0;//清零
            head.warriorPos[head.warriorList[Id]->location]=Id+1;
        }
    }
}
void printMove(CHeadQuarter& red,CHeadQuarter& blue,int t,int& isWin)
{
    int Id;
    for(int i=0;i<=cityTotal+1;i++)
    {
        if(red.warriorPos[i]!=0)
        {
            Id=red.warriorPos[i]-1;
            if(i<=cityTotal)
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" red ";
                cout<<red.warriorList[Id]->warriorName<<" "<<Id+1<<" marched to city ";
                cout<<i<<" with "<<red.warriorList[Id]->strength<<" elements and force ";
                cout<<red.warriorList[Id]->attack<<endl;  
            }
            //输出占领司令部
            else if(i==cityTotal+1)
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" red ";
                cout<<red.warriorList[Id]->warriorName<<" "<<Id+1<<" reached blue headquarter with ";
                cout<<red.warriorList[Id]->strength<<" elements and force ";
                cout<<red.warriorList[Id]->attack<<endl;  
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" blue headquarter was taken"<<endl;
                isWin=0;
            }
        }
        if(blue.warriorPos[i]!=0)
        {
            Id=blue.warriorPos[i]-1;
            if(i>=1)
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" blue ";
                cout<<blue.warriorList[Id]->warriorName<<" "<<Id+1<<" marched to city ";
                cout<<i<<" with "<<blue.warriorList[Id]->strength<<" elements and force ";
                cout<<blue.warriorList[Id]->attack<<endl;  
            }
            else if(i==0)
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" blue ";
                cout<<blue.warriorList[Id]->warriorName<<" "<<Id+1<<" reached red headquarter with ";
                cout<<blue.warriorList[Id]->strength<<" elements and force ";
                cout<<blue.warriorList[Id]->attack<<endl;  
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" red headquarter was taken"<<endl;
                isWin=1;
            }

        }
    }
}
//武士前进,返回哪个司令部是否赢了
int moveForward(CHeadQuarter& red,CHeadQuarter& blue,int t)
{
    int isWin=-1;//0red1blue
    for(int i=0;i<=cityTotal+1;i++)
    {
        if(red.warriorPos[i]!=0)//这个位置有武士
        {
            int Id=red.warriorPos[i]-1;
            red.warriorList[Id]->location++;
            if(red.warriorList[Id]->warriorType==2)//Iceman减少生命值
                red.warriorList[Id]->strength-=red.warriorList[Id]->strength*1/10;
            else if(red.warriorList[Id]->warriorType==3)//Lion降低忠诚度
                red.warriorList[Id]->loyalty-=loyaltyLoss;
        }
        if(blue.warriorPos[i]!=0)//这个位置有武士
        {
            int Id=blue.warriorPos[i]-1;
            blue.warriorList[Id]->location--;
            if(blue.warriorList[Id]->warriorType==2)//Iceman减少生命值
                blue.warriorList[Id]->strength-=blue.warriorList[Id]->strength/10;
            else if(blue.warriorList[Id]->warriorType==3)//Lion降低忠诚度
                blue.warriorList[Id]->loyalty-=loyaltyLoss;               
        }
    }
    modifyRedPos(red);modifyBluePos(blue);
    printMove(red,blue,t,isWin);
    return isWin;
}

//wolf抢武器
//重新统计武器数目并且排序武器
//武器比较函数，没了的排在后面，其他按编号
bool weaponCmp(CWeapon*& w1,CWeapon*& w2)
{
    if(w1->available==0) return 0;
    if(w2->available==0) return 1;
    if(w1->weaponId<w2->weaponId) return 1;
    if(w1->weaponId>w2->weaponId) return 0;
    else if(w1->weaponId==w2->weaponId and w1->weaponId==2)//arrorw
        return w1->available<w2->available;
    else return 0;
}
void arrangeWeapon(CWarrior* warrior)
{
    int newWeaponTotal=0;
    int newWeaponType[3]={0,0,0};
    sort(warrior->weaponOwn,warrior->weaponOwn+warrior->weaponTotal,weaponCmp);
    for(int i=0;i<warrior->weaponTotal;i++)
    {
        //cout<<"!!"<<warrior->weaponOwn[i]->weaponName<<endl;
        if(warrior->weaponOwn[i]!=nullptr and warrior->weaponOwn[i]->available!=0)
        {

            newWeaponTotal++;newWeaponType[warrior->weaponOwn[i]->weaponId]++;
        }
    }
    warrior->weaponTotal=newWeaponTotal;
    for(int i=0;i<3;i++)
        warrior->weaponType[i]=newWeaponType[i];
}
void wolfGrab(CHeadQuarter& red,CHeadQuarter& blue,int t)
{
    int redId=0;int blueId=0;
    int grabNum;
    for(int i=1;i<cityTotal+1;i++)//只有中间城市会出现抢夺武器
    {
        if(red.warriorPos[i]!=0 and blue.warriorPos[i]!=0)
        {
            redId=red.warriorPos[i]-1;
            blueId=blue.warriorPos[i]-1;
            if(red.warriorList[redId]->warriorType==blue.warriorList[blueId]->warriorType) continue;
            if(red.warriorList[redId]->warriorType==4)//红方抢蓝方
            {
                grabNum=0;
                arrangeWeapon(blue.warriorList[blueId]); 
                int originalTotal1=blue.warriorList[blueId]->weaponTotal;
                for(int j=0;j<originalTotal1;j++)
                {
                    if(red.warriorList[redId]->weaponTotal>=10) break;
                    if(j>=blue.warriorList[blueId]->weaponTotal) break;
                    CWeapon* wp=blue.warriorList[blueId]->weaponOwn[j];
                    if(wp==nullptr or wp->available==0) continue;
                    if(j!=0 and blue.warriorList[blueId]->weaponOwn[j]->weaponId!=blue.warriorList[blueId]->weaponOwn[j-1]->weaponId) break;
                    else//抢武器
                    {
                        grabNum++;
                        red.warriorList[redId]->chooseWeapon(wp->weaponId);
                        red.warriorList[redId]->weaponOwn[red.warriorList[redId]->weaponTotal-1]->available=wp->available;
                        //blue.warriorList[blueId]->weaponTotal--;
                        blue.warriorList[blueId]->weaponOwn[j]->available=0;
                    }
                }
                if(grabNum!=0)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" red wolf "<<redId+1;
                    cout<<" took "<<grabNum<<" "<<red.warriorList[redId]->weaponOwn[red.warriorList[redId]->weaponTotal-1]->weaponName;
                    cout<<" from blue "<<blue.warriorList[blueId]->warriorName<<" "<<blueId+1<<" in city "<<i<<endl;
                    arrangeWeapon(red.warriorList[redId]);
                }
                
            }
            else if(blue.warriorList[blueId]->warriorType==4)//蓝方抢红方
            {
                grabNum=0;
                arrangeWeapon(red.warriorList[redId]);
                int originalTotal2=red.warriorList[redId]->weaponTotal;

                for(int j=0;j<originalTotal2;j++)
                {
                    if(blue.warriorList[blueId]->weaponTotal>=10) break;
                    if(j>=red.warriorList[redId]->weaponTotal) break; 
                    CWeapon* wp=red.warriorList[redId]->weaponOwn[j];
                    if(wp==nullptr or wp->available==0) continue;
                    if(j!=0 and wp->weaponId!=red.warriorList[redId]->weaponOwn[j-1]->weaponId) break;
                    else 
                    {
//cout<<"!!"<<wp->weaponId<<wp->weaponName<<endl;
//if(j!=0) {cout<<"!!"<<red.warriorList[redId]->weaponOwn[j-1]->weaponId<<endl;
//cout<<"!!j="<<j<<" "<<red.warriorList[redId]->weaponOwn[0]->weaponId<<endl;}
//cout<<"!!"<<red.warriorList[redId]->weaponTotal<<endl;       
                        grabNum++;
                        blue.warriorList[blueId]->chooseWeapon(wp->weaponId);
                        blue.warriorList[blueId]->weaponOwn[blue.warriorList[blueId]->weaponTotal-1]->available=wp->available;
                        //red.warriorList[redId]->weaponTotal--;
                        red.warriorList[redId]->weaponOwn[j]->available=0;
                    }
                }
                if(grabNum!=0)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" blue wolf "<<blueId+1;
                    cout<<" took "<<grabNum<<" "<<blue.warriorList[blueId]->weaponOwn[blue.warriorList[blueId]->weaponTotal-1]->weaponName;
                    cout<<" from red "<<red.warriorList[redId]->warriorName<<" "<<redId+1<<" in city "<<i<<endl;
//cout<<"!!"<<red.warriorList[redId]->weaponTotal<<red.warriorList[redId]->weaponOwn[red.warriorList[redId]->weaponTotal-2]->available<<endl;
                    arrangeWeapon(red.warriorList[redId]);
//cout<<"!!"<<red.warriorList[redId]->weaponTotal<<endl;
                }
                
            }
        }
    }
}

//战斗
//找是否有可用的武器
bool foundAvailableWeapon(CWarrior* w)
{
    for(int i=0;i<w->weaponTotal;i++)
    {
        if(w->weaponOwn[i]->available!=0) return true;
    }
    return false;
}
//看状态是否会改变
bool willChange(CWarrior* w)
{
    if(foundAvailableWeapon(w)==false) return false;
    for(int i=0;i<w->weaponTotal;i++)
    {
        if(w->weaponOwn[i]->weaponId!=0 and w->weaponOwn[i]->available!=0)return true;
        if(w->weaponOwn[i]->weaponId==0 and w->weaponOwn[i]->attack!=0) return true;
    }
    return false;
}

void grabWeapon(CWarrior* win,CWarrior* lose)
{
    //arrangeWeapon(win);arrangeWeapon(lose);
    for(int w=win->weaponTotal,l=0;w<10 and l<lose->weaponTotal;w++,l++)
    {
//cout<<"**"<<lose->weaponTotal<<" "<<lose->weaponOwn[l]->available<<endl;
        if(lose->weaponOwn[l]->available!=0)
        {
            win->chooseWeapon(lose->weaponOwn[l]->weaponId);
            win->weaponOwn[w]->available=lose->weaponOwn[l]->available;
            lose->weaponOwn[l]->available=0;
        }
    }
    arrangeWeapon(win);arrangeWeapon(lose);
}
//1w1 win 2w2 win 3bothdie 4deduce,w1先战斗
int warriorCombat(CWarrior* w1,CWarrior* w2)
{
    arrangeWeapon(w1);arrangeWeapon(w2);int i1=0;int i2=0;
    CWarrior* w1old=w1;CWarrior* w2old=w2;
    while(1)
    { 
        //w1攻击
        if(foundAvailableWeapon(w1))//有可用的武器
        {
            while(i1<w1->weaponTotal and w1->weaponOwn[i1]->available==0)
                i1=(i1+1)%w1->weaponTotal;
            //跳出的i1是第一个可用的
//cout<<"**w1"<<w1->weaponOwn[i1]->weaponName<<"i1="<<i1<<endl;
//if(w1->weaponOwn[i1+1]!=nullptr) cout<<"**"<<w1->weaponOwn[i1+1]->weaponName<<"**"<<endl;
            w2->strength-=w1->weaponOwn[i1]->attack;
            if(w1->weaponOwn[i1]->weaponId==1 and w1->warriorType!=1)
                {//cout<<"**"<<w1->weaponOwn[i1]->weaponName<<endl;
                    w1->strength-=w1->weaponOwn[i1]->attack*1/2;}//bomb}
               // w1->strength-=w1->weaponOwn[i1]->attack*1/2;//bomb
                
            if(w1->weaponOwn[i1]->weaponId!=0) w1->weaponOwn[i1]->available--;
            i1=(i1+1)%w1->weaponTotal;
        }
        if(w1->strength<=0 and w2->strength<=0) return 3;
        if(w1->strength<=0 and w2->strength>0) return 2;
        if(w1->strength>0 and w2->strength<=0) return 1;
        //w2攻击
        if(foundAvailableWeapon(w2))//有可用的武器
        {
            while(i2<w2->weaponTotal and w2->weaponOwn[i2]->available==0)
                i2=(i2+1)%w2->weaponTotal;
            //跳出的i2是第一个可用的
//out<<"**"<<w2->weaponOwn[i1]->weaponName<<w2->weaponOwn[i2]->weaponId<<" "<<w2->warriorId<<endl;
            w1->strength-=w2->weaponOwn[i2]->attack;
            if(w2->weaponOwn[i2]->weaponId==1 and w2->warriorType!=1)
                w2->strength-=w2->weaponOwn[i2]->attack*1/2;//bomb   
            if(w2->weaponOwn[i2]->weaponId!=0) w2->weaponOwn[i2]->available--;
            i2=(i2+1)%w2->weaponTotal;
        }
        if(w1->strength<=0 and w2->strength<=0) return 3;
        if(w1->strength<=0 and w2->strength>0) return 2;
        if(w1->strength>0 and w2->strength<=0) return 1;
        if(foundAvailableWeapon(w1)==false and foundAvailableWeapon(w2)==false) return 4;
        if(willChange(w1)==false and willChange(w2)==false) return 4;
    }
    return -1;
}
//两个司令部战斗
void headCombat(CHeadQuarter& red,CHeadQuarter& blue,int t)
{
    int win;
    for(int i=1;i<=cityTotal;i++)
    {
        win=-1;
        if(red.warriorPos[i]!=0 and blue.warriorPos[i]!=0)//要战斗
        {
            CWarrior* redW=red.warriorList[red.warriorPos[i]-1];
            CWarrior* blueW=blue.warriorList[blue.warriorPos[i]-1];
            if(i%2==1)
            {
                win=warriorCombat(redW,blueW);
                if(win==1)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" red "<<redW->warriorName<<" "<<red.warriorPos[i];
                    cout<<" killed blue "<<blueW->warriorName<<" "<<blue.warriorPos[i]<<" in city ";
                    cout<<i<<" remaining "<<redW->strength<<" elements"<<endl;
                    grabWeapon(redW,blueW);
                    delete blue.warriorList[blue.warriorPos[i]-1];
                    blue.warriorList[blue.warriorPos[i]-1]=nullptr;
                    blue.warriorPos[i]=0;
                }
                if(win==2)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" blue "<<blueW->warriorName<<" "<<blue.warriorPos[i];
                    cout<<" killed red "<<redW->warriorName<<" "<<red.warriorPos[i]<<" in city ";
                    cout<<i<<" remaining "<<blueW->strength<<" elements"<<endl;
                    grabWeapon(blueW,redW);
                    delete red.warriorList[red.warriorPos[i]-1];
                    red.warriorList[red.warriorPos[i]-1]=nullptr;
                    red.warriorPos[i]=0;
                }
                if(win==3)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60;
                    cout<<" both red "<<redW->warriorName<<" "<<red.warriorPos[i];
                    cout<<" and blue "<<blueW->warriorName<<" "<<blue.warriorPos[i];
                    cout<<" died in city "<<i<<endl;
                    delete red.warriorList[red.warriorPos[i]-1];
                    red.warriorList[red.warriorPos[i]-1]=nullptr;
                    red.warriorPos[i]=0;
                    delete blue.warriorList[blue.warriorPos[i]-1];
                    blue.warriorList[blue.warriorPos[i]-1]=nullptr;
                    blue.warriorPos[i]=0;
                }
                if(win==4)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60;
                    cout<<" both red "<<redW->warriorName<<" "<<red.warriorPos[i];
                    cout<<" and blue "<<blueW->warriorName<<" "<<blue.warriorPos[i];
                    cout<<" were alive in city "<<i<<endl;
                    arrangeWeapon(redW);arrangeWeapon(blueW);
                }
            }
            if(i%2==0)
            {
                win=warriorCombat(blueW,redW);
                if(win==2)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" red "<<redW->warriorName<<" "<<red.warriorPos[i];
                    cout<<" killed blue "<<blueW->warriorName<<" "<<blue.warriorPos[i]<<" in city ";
                    cout<<i<<" remaining "<<redW->strength<<" elements"<<endl;
                    grabWeapon(redW,blueW);
                    delete blue.warriorList[blue.warriorPos[i]-1];
                    blue.warriorList[blue.warriorPos[i]-1]=nullptr;
                    blue.warriorPos[i]=0;
                }
                if(win==1)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" blue "<<blueW->warriorName<<" "<<blue.warriorPos[i];
                    cout<<" killed red "<<redW->warriorName<<" "<<red.warriorPos[i]<<" in city ";
                    cout<<i<<" remaining "<<blueW->strength<<" elements"<<endl;
                    grabWeapon(blueW,redW);
                    delete red.warriorList[red.warriorPos[i]-1];
                    red.warriorList[red.warriorPos[i]-1]=nullptr;
                    red.warriorPos[i]=0;
                }
                if(win==3)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60;
                    cout<<" both red "<<redW->warriorName<<" "<<red.warriorPos[i];
                    cout<<" and blue "<<blueW->warriorName<<" "<<blue.warriorPos[i];
                    cout<<" died in city "<<i<<endl;
                    delete red.warriorList[red.warriorPos[i]-1];
                    red.warriorList[red.warriorPos[i]-1]=nullptr;
                    red.warriorPos[i]=0;
                    delete blue.warriorList[blue.warriorPos[i]-1];
                    blue.warriorList[blue.warriorPos[i]-1]=nullptr;
                    blue.warriorPos[i]=0;
                }
                if(win==4)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60;
                    cout<<" both red "<<redW->warriorName<<" "<<red.warriorPos[i];
                    cout<<" and blue "<<blueW->warriorName<<" "<<blue.warriorPos[i];
                    cout<<" were alive in city "<<i<<endl;
                    arrangeWeapon(redW);arrangeWeapon(blueW);
                }
            }
            //cheer
            if(redW->warriorType==0 and red.warriorPos[i]!=0)
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" red "<<redW->warriorName<<" "<<red.warriorPos[i];
                cout<<" yelled in city "<<i<<endl;
            }
            if(blueW->warriorType==0 and blue.warriorPos[i]!=0)
            {
                cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" blue "<<blueW->warriorName<<" "<<blue.warriorPos[i];
                cout<<" yelled in city "<<i<<endl;
            }

        }
    }
}
void report(CHeadQuarter& red,CHeadQuarter& blue,int t)
{
    for(int i=0;i<=cityTotal+1;i++)
    {
        if(red.warriorPos[i]!=0)
        {
            CWarrior* redW=red.warriorList[red.warriorPos[i]-1];
            cout<<setw(3)<<setfill('0')<<t/60<<':';
            cout<<setw(2)<<setfill('0')<<t%60<<" red "<<redW->warriorName<<" "<<red.warriorPos[i];
            cout<<" has "<<redW->weaponType[0]<<" sword "<<redW->weaponType[1]<<" bomb ";
            cout<<redW->weaponType[2]<<" arrow and "<<redW->strength<<" elements"<<endl;
        }
        if(blue.warriorPos[i]!=0)
        {
            CWarrior* blueW=blue.warriorList[blue.warriorPos[i]-1];
            cout<<setw(3)<<setfill('0')<<t/60<<':';
            cout<<setw(2)<<setfill('0')<<t%60<<" blue "<<blueW->warriorName<<" "<<blue.warriorPos[i];
            cout<<" has "<<blueW->weaponType[0]<<" sword "<<blueW->weaponType[1]<<" bomb ";
            cout<<blueW->weaponType[2]<<" arrow and "<<blueW->strength<<" elements"<<endl;
        }
    }
}
int main()
{
    int N,strength,T,t;
    cin>>N;
    for(int ii=1;ii<=N;ii++)
    {
        cout<<"Case "<<ii<<":"<<endl;
        cin>>strength>>cityTotal>>loyaltyLoss>>T;
        for(int i=0;i<5;i++)
        {
            cin>>warriorStrength[i];
        }
        for(int i=0;i<5;i++)
        {
            cin>>warriorAttack[i];
        }
        CHeadQuarter red(0,strength,redorder);
        CHeadQuarter blue(1,strength,blueorder);
        t=0;//现在的时间
        while(t<=T)
        {
            //造武士
            red.makeWarrior(t);
            blue.makeWarrior(t);
           
            //lion逃跑
            t+=5;
            if(t>T) break;
            LionRun(red,blue,t);
            
            //武士前进
            t+=5;
            if(t>T) break;
            //cout<<"**"<<moveForward(red,blue,t);
            if(moveForward(red,blue,t)!=-1) break;
            

            //抢夺武器
            t+=25;
            if(t>T) break;
            wolfGrab(red,blue,t);

            //发生战斗
            t+=5;
            if(t>T) break;
            headCombat(red,blue,t);
            

            //汇报司令部
            t+=10;
            if(t>T) break;
            cout<<setw(3)<<setfill('0')<<t/60<<':';
            cout<<setw(2)<<setfill('0')<<t%60<<" "<<red.headQuarterStrength;
            cout<<" elements in red headquarter"<<endl;
            cout<<setw(3)<<setfill('0')<<t/60<<':';
            cout<<setw(2)<<setfill('0')<<t%60<<" "<<blue.headQuarterStrength;
            cout<<" elements in blue headquarter"<<endl;
            
            //汇报武士情况
            t+=5;
            if(t>T) break;
            report(red,blue,t);

            //完成循环
            t+=5;
            if(t>T) break;
        }
    }
}


