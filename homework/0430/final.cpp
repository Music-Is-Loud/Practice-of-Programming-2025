//#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>
#include <map>
using namespace std;
int warriorStrength[5];int warriorAttack[5];//武士的生命力，武士的攻击力
int cityTotal,timeTotal;//城市数,时间数
int loyaltyLoss,arrowAttack;
int redorder[5]={2,3,4,1,0};
int blueorder[5]={3,0,1,2,4};
//bool hasReachRed,hasReachBlue;
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
        explicit CArrow(int id,int at):CWeapon(id,at,3,"arrow"){}
};
class CWarrior
{
    public:
        int warriorId;//编号
        int strength;//生命元
        int attack;//攻击力
        int head;//所属阵营
        int location;//所在位置
        int loyalty;double morale;

        //map <int,CWeapon> weaponMap;//武器统计字典，键是编号
        CWeapon* weaponOwn[3];//所有武器
        int weaponType[3];//各种武器数量
        int weaponTotal;//总武器数量

        string warriorName;//武士名字
        int warriorType;//武士类型，0dragon,1ninja,2iceman,3lion,4wolf

        explicit CWarrior(int head,int warriorId,int strength,int attack,int weaponTotal,int location,int warriorType,string name,int l=0,double m=0.0):
        head(head),warriorId(warriorId),strength(strength),attack(attack),
        weaponTotal(weaponTotal),location(location),warriorType(warriorType),warriorName(name),loyalty(l),morale(m)
        {
            for(int i=0;i<3;i++)
            {
                //weaponMap.insert(make_pair(i,CWeapon(i,0,0,"")));
                weaponType[i]=0;
                weaponOwn[i]=nullptr;
            }
        }
        ~CWarrior()
        {
            for(int i=0;i<3;i++)
                if(weaponOwn[i]!=nullptr)  delete weaponOwn[i];
        }

        void chooseWeapon(int n)//赋予武器，n是传入的编号
        {
            if(n%3==0)
            {
                int aatack=attack*2/10;
                if (aatack!=0) 
                {
                    weaponOwn[0]=new CSword(0,attack*2/10);
                    weaponType[0]++;
                    weaponTotal++;
                    //weaponMap[0].attack=aatack;weaponMap[0].available=9999;weaponMap[0].weaponName="sword";
                }
            }
            else if(n%3==1)
            {
                weaponOwn[1]=new CBomb(1,INT_MAX);
                weaponType[1]++;
                weaponTotal++;
                //weaponMap[1].attack=INT_MAX;weaponMap[1].available=1;weaponMap[1].weaponName="bomb";
            }
            else if(n%3==2)
            {
                weaponOwn[2]=new CArrow(2,arrowAttack);
                weaponType[2]++;
                weaponTotal++;
                //weaponMap[2].attack=arrowAttack;weaponMap[2].available=3;weaponMap[2].weaponName="arrow";
            }  
        }

};
class CDragon:public CWarrior
{
    public:
        explicit CDragon(int head,int warriorId,int strength,int attack,int location,double m):
        CWarrior(head,warriorId,strength,attack,0,location,0,"dragon",0,m)
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
        CWarrior(head,warriorId,strength,attack,0,location,3,"lion",l,0)
        {}
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
    
    //制造武士
    void makeWarrior(int t)
    {
        int nowMake=order[cur];//现在造的是
        double m=0.0;
        if(headQuarterStrength>=warriorStrength[nowMake])
        {
            headQuarterStrength-=warriorStrength[nowMake];warriorTotal++;
            warriorPos[headId*(cityTotal+1)]=warriorTotal;
            if(nowMake==0)
            {  
                m= 1.0 * headQuarterStrength/warriorStrength[nowMake];
                warriorList[warriorTotal-1]=
                new CDragon(headId,warriorTotal, warriorStrength[0], warriorAttack[0], headId*(cityTotal+1),m);
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
                cout<< warriorList[warriorTotal-1]->warriorName<<" "<<warriorTotal<<" born"<<endl;
            }
            if(nowMake==3) cout<<"Its loyalty is "<<headQuarterStrength<<endl;
            if(nowMake==0) cout<<"Its morale is "<<fixed<<setprecision(2)<<m<<endl;
            cur=(cur+1)%5;
        }
    }
};
class CCity
{
    public:
    int cityId;//城市编号
    int cityHp;//城市生命元
    int flag;//城市插的棋子，-1无，0红，1蓝
    int battleRecord;//上一场战斗的结果，-1无或平局，0红，1蓝
    CCity(int Id,int hp,int f=-1,int record=-1):
    cityId(Id),cityHp(hp),flag(f),battleRecord(record){}

};
vector<CCity> city;
void buildCity()
{
    for(int i=0;i<=cityTotal+1;i++)
    {
        city.push_back(CCity(i,0));
    }
}


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
//把WarriorPos改的和实际location一致,return who is win,0red1blue
int modifyRedPos(CHeadQuarter& head)
{
    int isWin=0;
    for(int i=cityTotal+1;i>=0;i--)
    {
        if(head.warriorPos[i]!=0)
        {
            if(i==cityTotal+1) isWin+=2;//有人已经在对方司令部了
            if(i==cityTotal) isWin++;//有人到达对方司令部
            int Id=head.warriorPos[i]-1;
            head.warriorPos[i]=0;//清零
            head.warriorPos[head.warriorList[Id]->location]=Id+1;
        }
    }
    //if(isWin==2) isWin=0;else isWin=-1;
    return isWin;
}
int modifyBluePos(CHeadQuarter& head)
{
    int isWin=0;
    for(int i=0;i<=cityTotal+1;i++)
    {
        if(head.warriorPos[i]!=0)
        {
            if(i==0) isWin+=2;//有人has been对方司令部
            else if (i==1) isWin++;//有人刚到
            int Id=head.warriorPos[i]-1;
            head.warriorPos[i]=0;//清零
            head.warriorPos[head.warriorList[Id]->location]=Id+1;
        }
    }
    //if(isWin==2) isWin=1;else isWin=-1;
    return isWin;
}
void printMove(CHeadQuarter& red,CHeadQuarter& blue,int t,int isWin1,int isWin2)
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
            //输出到达司令部
            else if(i==cityTotal+1)
            {
                if(isWin1!=2)
                {cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" red ";
                cout<<red.warriorList[Id]->warriorName<<" "<<Id+1<<" reached blue headquarter with ";
                cout<<red.warriorList[Id]->strength<<" elements and force ";
                cout<<red.warriorList[Id]->attack<<endl; }
                if(isWin1==3)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" blue headquarter was taken"<<endl;
                }
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
                if(isWin2!=2)
                {cout<<setw(3)<<setfill('0')<<t/60<<':';
                cout<<setw(2)<<setfill('0')<<t%60<<" blue ";
                cout<<blue.warriorList[Id]->warriorName<<" "<<Id+1<<" reached red headquarter with ";
                cout<<blue.warriorList[Id]->strength<<" elements and force ";
                cout<<blue.warriorList[Id]->attack<<endl; }
                if(isWin2==3) 
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" red headquarter was taken"<<endl;
                }
            }

        }
    }
}
//武士前进,返回是否赢了
bool moveForward(CHeadQuarter& red,CHeadQuarter& blue,int t)
{
    for(int i=0;i<=cityTotal+1;i++)
    {
        if(red.warriorPos[i]!=0 and i!=cityTotal+1)//这个位置有红武士且不是在蓝司令部
        {
            int Id=red.warriorPos[i]-1;
            red.warriorList[Id]->location++;
            if(red.warriorList[Id]->warriorType==2 and i%2==1)//当前Iceman在奇数城市，说明这一步是偶数步
            {
                red.warriorList[Id]->strength-=9;
                if(red.warriorList[Id]->strength<=0) red.warriorList[Id]->strength=1;//减少生命值
                red.warriorList[Id]->attack+=20;//加攻击力
            }
                
        }
        if(blue.warriorPos[i]!=0 and i!=0)//这个位置有blue武士 and is not in red headquarter
        {
            int Id=blue.warriorPos[i]-1;
            blue.warriorList[Id]->location--;
            if(blue.warriorList[Id]->warriorType==2 and (cityTotal+1-i)%2==1)//当前Iceman在奇数城市，说明这一步是偶数步
            {
                blue.warriorList[Id]->strength-=9;
                if(blue.warriorList[Id]->strength<=0) blue.warriorList[Id]->strength=1;//减少生命值
                blue.warriorList[Id]->attack+=20;//加攻击力
            }
        }
    }
    int isWin1,isWin2;
    isWin1=modifyRedPos(red);isWin2=modifyBluePos(blue);
    printMove(red,blue,t,isWin1,isWin2);
    if(isWin1==3 or isWin2==3) return true;
    return false;
}


//放箭
void shotArrow(CHeadQuarter& red,CHeadQuarter& blue,int t)
{
    int redId,blueId;bool isKilled;
    for(int i=1;i<=cityTotal;i++)
    {
        if(i!=cityTotal and red.warriorPos[i]!=0 and blue.warriorPos[i+1]!=0)
        {
            redId = red.warriorPos[i]-1;blueId=blue.warriorPos[i+1]-1;
            if(red.warriorList[redId]->weaponType[2]!=0)//有箭，射出
            {
                isKilled = false;
                blue.warriorList[blueId]->strength -= arrowAttack;//attack
                red.warriorList[redId]->weaponOwn[2]->available--;//arrow used
                if(red.warriorList[redId]->weaponOwn[2]->available==0)//arrow erase
                {
                    red.warriorList[redId]->weaponTotal--;
                    red.warriorList[redId]->weaponType[2]--;
                }
                if(blue.warriorList[blueId]->strength<=0)//killed
                {
                    blue.warriorList[blueId]->strength=0;
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" red ";
                    cout<<red.warriorList[redId]->warriorName<<" "<<redId+1<<" shot and killed blue ";
                    cout<<blue.warriorList[blueId]->warriorName<<" "<<blueId+1<<endl;
                    isKilled=true;
                }
                if(!isKilled)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" red ";
                    cout<<red.warriorList[redId]->warriorName<<" "<<redId+1<<" shot"<<endl;
                }
            }
        }
        if(i!=1 and blue.warriorPos[i]!=0 and red.warriorPos[i-1]!=0)
        {
            redId = red.warriorPos[i-1]-1;blueId=blue.warriorPos[i]-1;
            if(blue.warriorList[blueId]->weaponType[2]!=0)//有箭，射出
            {
                isKilled = false;
                red.warriorList[redId]->strength -= arrowAttack;//attack
                blue.warriorList[blueId]->weaponOwn[2]->available--;//arrow used
                if(blue.warriorList[blueId]->weaponOwn[2]->available==0)//arrow erase
                {
                    blue.warriorList[blueId]->weaponTotal--;
                    blue.warriorList[blueId]->weaponType[2]--;
                }
                if(red.warriorList[redId]->strength<=0)//killed
                {
                    red.warriorList[redId]->strength=0;
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" blue ";
                    cout<<blue.warriorList[blueId]->warriorName<<" "<<blueId+1<<" shot and killed red ";
                    cout<<red.warriorList[redId]->warriorName<<" "<<redId+1<<endl;
                    isKilled=true;
                }
                if(!isKilled)
                {
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" blue ";
                    cout<<blue.warriorList[blueId]->warriorName<<" "<<blueId+1<<" shot"<<endl;
                }
            }
        }
    }
}

void killWarrior(CHeadQuarter& head,int Id)
{
    head.warriorPos[head.warriorList[Id]->location]=0;
    //delete head.warriorList[Id];
    head.warriorList[Id]=nullptr;
} 
//判断谁先发起进攻,0red1blue,传入cityid
int startCombat(int Id)
{
    if(city[Id].flag==-1) return 1-Id%2;//doesn't has a flag
    return city[Id].flag;//has a flag
}
//返回攻击值
int calAttact(CHeadQuarter& head, int Id, bool isFirst)
{
    int real_attact=0;
    if(head.warriorList[Id]->weaponType[0]!=0) real_attact+=head.warriorList[Id]->weaponOwn[0]->attack;
    if(isFirst) real_attact += head.warriorList[Id]->attack;
    else real_attact += head.warriorList[Id]->attack *5/10;
    return real_attact;
}
//修改sword
void modifySword(CHeadQuarter&head,int Id)
{
    if(head.warriorList[Id]->weaponType[0]!=0)
    {
        head.warriorList[Id]->weaponOwn[0]->attack=head.warriorList[Id]->weaponOwn[0]->attack*8/10;
        if(head.warriorList[Id]->weaponOwn[0]->attack<=0)//lose the sword
        {head.warriorList[Id]->weaponTotal --;head.warriorList[Id]->weaponType[0]=0;head.warriorList[Id]->weaponOwn[0]=nullptr;}
    }
    return;
}

void printBomb(CHeadQuarter& red,CHeadQuarter& blue,int redId,int blueId,int side,int t)
{
    if(side==0)
    {
        cout<<setw(3)<<setfill('0')<<t/60<<':';
        cout<<setw(2)<<setfill('0')<<t%60<<" red ";
        cout<<red.warriorList[redId]->warriorName<<" "<<redId+1<<" used a bomb and killed blue ";
        cout<<blue.warriorList[blueId]->warriorName<<" "<<blueId+1<<endl;

    }
    else
    {
        cout<<setw(3)<<setfill('0')<<t/60<<':';
        cout<<setw(2)<<setfill('0')<<t%60<<" blue ";
        cout<<blue.warriorList[blueId]->warriorName<<" "<<blueId+1<<" used a bomb and killed red ";
        cout<<red.warriorList[redId]->warriorName<<" "<<redId+1<<endl;
    }
    //bomb killed both
    //red.warriorPos[red.warriorList[redId]->location]=0;red.warriorList[redId]=nullptr;
    //blue.warriorPos[blue.warriorList[blueId]->location]=0;blue.warriorList[blueId]=nullptr;
    killWarrior(red,redId);
    killWarrior(blue,blueId);
}
//扔炸弹
void throwbomb(CHeadQuarter& red,CHeadQuarter& blue,int t)
{
    int redId,blueId;
    for(int i=1;i<=cityTotal;i++)
    {
        if(red.warriorPos[i]!=0 and blue.warriorPos[i]!=0)
        {
            redId = red.warriorPos[i]-1;blueId = blue.warriorPos[i]-1;
            if(red.warriorList[redId]->strength>0 and blue.warriorList[blueId]->strength>0)
            {
                if(red.warriorList[redId]->weaponType[1]!=0)//red has a bomb
                {
                    if(startCombat(i)==1 and calAttact(blue,blueId,true) >= red.warriorList[redId]->strength )
                        printBomb(red,blue,redId,blueId,0,t);//对方先开始并且我方被杀死
                    if(startCombat(i)==0 and calAttact(red,redId,true) < blue.warriorList[blueId]->strength)
                    {//我先开始并且对方扛过了
                        if(blue.warriorList[blueId]->warriorType!=1 and calAttact(blue,blueId,false) >= red.warriorList[redId]->strength)
                            printBomb(red,blue,redId,blueId,0,t);//对方反击把我杀死了
                    }
                }
                if(blue.warriorList[blueId]!=nullptr and blue.warriorList[blueId]->weaponType[1]!=0)//blue has a bomb
                {
                    if(startCombat(i)==0 and calAttact(red,redId,true) >= blue.warriorList[blueId]->strength)
                        printBomb(red,blue,redId,blueId,1,t);//对方先开始并且我方被杀死
                    if(startCombat(i)==1 and calAttact(blue,blueId,true) < red.warriorList[redId]->strength)
                    {//我先开始并且对方扛过了
                        if(red.warriorList[redId]->warriorType!=1 and calAttact(red,redId,false) >= blue.warriorList[blueId]->strength)
                            printBomb(red,blue,redId,blueId,1,t);//对方反击把我杀死了
                    }
                }
            }   
        }
    }
}

vector<int> redReward;vector<int>blueReward;//奖励名单，存储要奖励生命元的ID
int redHp,blueHp;
//拿走生命元
int takeElement(CHeadQuarter& win, int winId, int cityId, int t)
{
    int cache_element = 0;
    cache_element = city[cityId].cityHp;
    city[cityId].cityHp = 0;
    cout<<setw(3)<<setfill('0')<<t/60<<':';
    cout<<setw(2)<<setfill('0')<<t%60;
    if(win.headId==0) {cout<<" red ";redReward.push_back(winId);}
    else {cout<<" blue ";blueReward.push_back(winId);}
    cout<<win.warriorList[winId]->warriorName<<" "<<winId+1<<" earned ";
    cout<<cache_element<<" elements for his headquarter"<<endl;
    return cache_element;
}

//dragon cheers
void DragonCheers(CHeadQuarter& head,int Id,int cityId,int t)
{
    if(startCombat(cityId)==head.headId and head.warriorList[Id]->morale>0.8)
    {
        cout<<setw(3)<<setfill('0')<<t/60<<':';
        cout<<setw(2)<<setfill('0')<<t%60;
        if(head.headId==0) cout<<" red dragon ";else cout<<" blue dragon ";
        cout<<Id+1<<" yelled in city "<<cityId<<endl;
    }
}

//平局
void tie(CHeadQuarter& red,CHeadQuarter& blue,int redId,int blueId,int cityId,int t)
{
    city[cityId].battleRecord = -1;
    //lion 忠诚度下降
    if(red.warriorList[redId]->warriorType==3) red.warriorList[redId]->loyalty -= loyaltyLoss;
    if(blue.warriorList[blueId]->warriorType==3) blue.warriorList[blueId]->loyalty -= loyaltyLoss;
    //dragon 忠诚度变化,欢呼
    if(red.warriorList[redId]->warriorType==0) 
    {red.warriorList[redId]->morale-=0.2;DragonCheers(red,redId,cityId,t);}
    if(blue.warriorList[blueId]->warriorType==0) 
    {blue.warriorList[blueId]->morale-=0.2;DragonCheers(blue,blueId,cityId,t);}
    
}

//输赢
void Win(CHeadQuarter& win,CHeadQuarter& lose,int winId,int loseId,int cityId,int t)
{
    //lion战死,生命值先不要变化
    if(lose.warriorList[loseId]->warriorType==3) 
        win.warriorList[winId]->strength += lose.warriorList[loseId]->strength;
        
    //wolf战胜，偷取武器
    if(win.warriorList[winId]->warriorType==4)
    {
        for(int i=0;i<3;i++)
        {
            if(lose.warriorList[loseId]->weaponType[i]!=0 and win.warriorList[winId]->weaponType[i]==0)
            {
                win.warriorList[winId]->weaponTotal++;
                win.warriorList[winId]->weaponType[i]=lose.warriorList[loseId]->weaponType[i];
                win.warriorList[winId]->weaponOwn[i]=lose.warriorList[loseId]->weaponOwn[i];
            }
        }
    }
    
    //dragon wins
    if(win.warriorList[winId]->warriorType==0)
    {
        win.warriorList[winId]->morale += 0.2;
        DragonCheers(win,winId,cityId,t);
    }

    //take elements
    int cache=takeElement(win,winId,cityId,t);
    if(win.headId==0) redHp+=cache;else blueHp+=cache;

    //flag
    if(city[cityId].battleRecord==win.headId and city[cityId].flag!=win.headId)//升旗
    {
        cout<<setw(3)<<setfill('0')<<t/60<<':';
        cout<<setw(2)<<setfill('0')<<t%60;
        if(win.headId==0) cout<<" red ";else cout<<" blue ";
        cout<<"flag raised in city "<<cityId<<endl;
        city[cityId].flag=win.headId;
    }
    city[cityId].battleRecord = win.headId;

    //kill lose warrior
    killWarrior(lose,loseId);
    
}

void battle(CHeadQuarter& first,CHeadQuarter& second,int fId,int secId,int cityId,int t)
{
    int fattack = calAttact(first,fId,true); int sattack = calAttact(second,secId,false);
    //攻击
    cout<<setw(3)<<setfill('0')<<t/60<<':';
    cout<<setw(2)<<setfill('0')<<t%60;
    if(first.headId==0) cout<<" red ";else cout<<" blue ";
    cout<<first.warriorList[fId]->warriorName<<" "<<fId+1<<" attacked";
    if(first.headId==1) cout<<" red ";else cout<<" blue ";
    cout<<second.warriorList[secId]->warriorName<<" "<<secId+1<<" in city "<<cityId;
    cout<<" with "<<first.warriorList[fId]->strength<<" elements and force "<<first.warriorList[fId]->attack<<endl;
    //打死敌人
    if(second.warriorList[secId]->strength <= fattack)
    {
        modifySword(first,fId);
        cout<<setw(3)<<setfill('0')<<t/60<<':';
        cout<<setw(2)<<setfill('0')<<t%60;
        if(second.headId==0) cout<<" red ";else cout<<" blue ";
        cout<<second.warriorList[secId]->warriorName<<" "<<secId+1;
        cout<<" was killed in city "<<cityId<<endl;
        Win(first,second,fId,secId,cityId,t);return;
    }
    //未打死  
    second.warriorList[secId]->strength -= fattack;modifySword(first,fId);
    
    
    if(second.warriorList[secId]->warriorType!=1)//not ninja
    {   //反击
        cout<<setw(3)<<setfill('0')<<t/60<<':';
        cout<<setw(2)<<setfill('0')<<t%60;
        if(second.headId==0) cout<<" red ";else cout<<" blue ";
        cout<<second.warriorList[secId]->warriorName<<" "<<secId+1<<" fought back against";
        if(second.headId==1) cout<<" red ";else cout<<" blue ";
        cout<<first.warriorList[fId]->warriorName<<" "<<fId+1<<" in city "<<cityId<<endl;
        //打死
        if(first.warriorList[fId]->strength <= sattack)
        {
            cout<<setw(3)<<setfill('0')<<t/60<<':';
            cout<<setw(2)<<setfill('0')<<t%60;
            if(first.headId==0) cout<<" red ";else cout<<" blue ";
            cout<<first.warriorList[fId]->warriorName<<" "<<fId+1;
            cout<<" was killed in city "<<cityId<<endl;
            modifySword(second,secId);
            Win(second,first,secId,fId,cityId,t);return;
        }
        //反击，未打死  
        first.warriorList[fId]->strength -= sattack;modifySword(second,secId);
    }
    if(first.headId==0) tie(first,second,fId,secId,cityId,t);
    else tie(second,first,secId,fId,cityId,t);
}
//战斗
void combat(CHeadQuarter& red,CHeadQuarter& blue,int t)
{
    int redId,blueId;redReward.clear();blueReward.clear();
    redHp=0;blueHp=0;
    for(int i=1;i<=cityTotal;i++)
    {
        if(red.warriorPos[i]!=0 and blue.warriorPos[i]!=0)
        {
            redId = red.warriorPos[i]-1;blueId = blue.warriorPos[i]-1;

            //both are killed by arrow
            if(red.warriorList[redId]->strength<=0 and blue.warriorList[blueId]->strength<=0)
            {killWarrior(red,redId);killWarrior(blue,blueId);continue;}

            //one of them is killed by arrow
            else if(red.warriorList[redId]->strength<=0)
                Win(blue,red,blueId,redId,i,t);
            else if(blue.warriorList[blueId]->strength<=0)
                Win(red,blue,redId,blueId,i,t);

            //both of them are alive
            else
            {
                if(startCombat(i)==0)//red starts first
                    battle(red,blue,redId,blueId,i,t);
                else battle(blue,red,blueId,redId,i,t);
            }
        }
        else if(red.warriorPos[i]!=0)  
        {   
            redId=red.warriorPos[i]-1;
            if(red.warriorList[redId]->strength<=0) killWarrior(red,redId);
        }
        else if(blue.warriorPos[i]!=0)  
        {   
            blueId=blue.warriorPos[i]-1;
            if(blue.warriorList[blueId]->strength<=0) killWarrior(blue,blueId);
        }
        

        
    }
    
    //奖励生命元
    if(!redReward.empty())
    {
        for(int i=redReward.size()-1;i>=0;i--)
        {
            if(red.headQuarterStrength>=8)
            {
                red.headQuarterStrength -= 8;
                red.warriorList[redReward[i]]->strength += 8;
            }
            else break;
        }
    }
    if(!blueReward.empty())
    {
        for(int i=0;i<blueReward.size();i++)
        {
            if(blue.headQuarterStrength>=8)
            {
                blue.headQuarterStrength -= 8;
                blue.warriorList[blueReward[i]]->strength += 8;
            }
            else break;
        }
    }
    //司令部得到生命元
    red.headQuarterStrength += redHp;blue.headQuarterStrength += blueHp;
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
            if(redW->weaponTotal==0) cout<<" has no weapon"<<endl;
            else
            {
                bool has=false,f=true;//有武器，当前武器是不是第一个输出的
                cout<<" has ";
                if(redW->weaponType[2]!=0){has=true;cout<<"arrow("<<redW->weaponOwn[2]->available<<")";f=false;}
                if(redW->weaponType[1]!=0)
                {
                    has=true;
                    if(f==false) cout<<",";f=false;
                    cout<<"bomb";
                }
                if(redW->weaponType[0]!=0)
                {
                    has=true;
                    if(f==false) cout<<",";f=false;
                    cout<<"sword("<<redW->weaponOwn[0]->attack<<")";
                }
                if(!has) cout<<"no weapon"<<endl;else cout<<endl;
            }
        }
    }
    for(int i=0;i<=cityTotal+1;i++)
    {
        if(blue.warriorPos[i]!=0)
        {
            CWarrior* blueW=blue.warriorList[blue.warriorPos[i]-1];
            cout<<setw(3)<<setfill('0')<<t/60<<':';
            cout<<setw(2)<<setfill('0')<<t%60<<" blue "<<blueW->warriorName<<" "<<blue.warriorPos[i];
            if(blueW->weaponTotal==0) cout<<" has no weapon"<<endl;
            else
            {
                bool has=false,f=true;//有武器，当前武器是不是第一个输出的
                cout<<" has ";
                if(blueW->weaponType[2]!=0){has=true;cout<<"arrow("<<blueW->weaponOwn[2]->available<<")";f=false;}
                if(blueW->weaponType[1]!=0)
                {
                    has=true;
                    if(f==false) cout<<",";f=false;
                    cout<<"bomb";
                }
                if(blueW->weaponType[0]!=0)
                {
                    has=true;
                    if(f==false) cout<<",";f=false;
                    cout<<"sword("<<blueW->weaponOwn[0]->attack<<")";
                }
                if(!has) cout<<"no weapon"<<endl;else cout<<endl;
            }
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
        cin>>strength>>cityTotal>>arrowAttack>>loyaltyLoss>>T;
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
        buildCity();
        //hasReachRed=false;hasReachBlue=false;//无人到达司令部
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
            if(moveForward(red,blue,t)==true) break;
            
            //城市产出生命元
            t+=10;
            if(t>T) break;
            for(int i=1;i<=cityTotal;i++)
            {
                city[i].cityHp+=10;
            }

            //只有一个武士抢夺城市生命元
            t+=10;
            if(t>T) break;
            for(int i=1;i<=cityTotal;i++)
            {
                int Id;
                if(red.warriorPos[i]!=0 and blue.warriorPos[i]==0)
                {
                    Id=red.warriorPos[i]-1;
                    red.headQuarterStrength += city[i].cityHp;
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" red ";
                    cout<<red.warriorList[Id]->warriorName<<" "<<Id+1;
                    cout<<" earned "<<city[i].cityHp<<" elements for his headquarter"<<endl;
                    city[i].cityHp = 0;
                }
                if(red.warriorPos[i]==0 and blue.warriorPos[i]!=0)
                {
                    Id=blue.warriorPos[i]-1;
                    blue.headQuarterStrength += city[i].cityHp;
                    cout<<setw(3)<<setfill('0')<<t/60<<':';
                    cout<<setw(2)<<setfill('0')<<t%60<<" blue ";
                    cout<<blue.warriorList[Id]->warriorName<<" "<<Id+1;
                    cout<<" earned "<<city[i].cityHp<<" elements for his headquarter"<<endl;
                    city[i].cityHp = 0;
                }
            }

            //放箭
            t+=5;
            if(t>T) break;
            shotArrow(red,blue,t);

            //炸弹
            t+=3;
            if(t>T) break;
            throwbomb(red,blue,t);

            //战斗
            t+=2;
            if(t>T) break;
            combat(red,blue,t);

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
        city.clear();
    }
}