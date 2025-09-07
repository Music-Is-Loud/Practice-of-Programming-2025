#include <cstdio>
#include <iostream>
#include <algorithm>
#include <list>
//auto和decltype组合来创建一个通用的模板函数！
//https://blog.csdn.net/StudyingPanda/article/details/137199096
using namespace std;
int main()
{	
	double a[] = {1.2,3.4,9.8,7.3,2.6};
	list<double> lst(a,a+5);
	lst.sort([](double a,double b){return a>b;});
	//IntelliSense配置问题：VSCode的C/C++扩展（IntelliSense）可能未正确配置C++标准，但编译器遵循C++11标准
	
	for(list<double>::iterator i  = lst.begin(); i != lst.end(); ++i) 
		cout << * i << "," ;
    return 0;
}