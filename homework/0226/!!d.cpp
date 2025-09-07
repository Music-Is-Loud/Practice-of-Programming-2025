#include <iostream>
#include <cstring>
using namespace std;

class Array2 {
// 在此处补充你的代码
public:
    int *array;
    int row;int column;
    Array2 ()
    {
        row=0;column=0;array=NULL;
    }
    Array2(int x,int y)
    {
        //array[x]=new int[x][y];错误！要y是已知常量
        row=x;column=y;
        array = new int[x*y];
    }
    ~Array2()
    {
        delete[] array;
    }
    Array2& operator=(const Array2& a1)
    {
        if(this==&a1) return *this;
        row=a1.row;column=a1.column;
        if(array) delete []array;
        array=new int[row*column];
        for(int i=0;i<row*column;i++)
        {
            array[i]=a1.array[i];
        }
        return *this;
    }
    int* operator[](int r)
    {
        return array+r*column;//返回一个数组的首地址，第二个[]保留了原来的作用
    }
    int operator()(int i,int j)//括号重载无规定参数个数
    {
        return array[i*column+j];
    }

};

int main() {
    Array2 a(3,4);
    int i,j;
    for(  i = 0;i < 3; ++i )
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}