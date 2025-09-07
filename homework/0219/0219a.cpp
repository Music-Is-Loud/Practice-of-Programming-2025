#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <typeinfo>
using namespace std;

class Student {
    private:
        int age,s1,s2,s3,s4;
        string name,number;
        double average;
    public:
        void input()
        {
            getline(cin,name,',');
            scanf("%d,",&age);
            getline(cin,number,',');
            scanf("%d,%d,%d,%d",&s1,&s2,&s3,&s4);
        }
        void calculate()
        {
            average=(s1+s2+s3+s4)/4.0;
            
        }
        void output()
        {
            cout<<name<<","<<age<<","<<number<<","<<average<<endl;
        }

// 在此处补充你的代码
};

int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}