#include <iostream>
#include <iomanip> 
#include <cstring>
using namespace std;
template <class T>
class CArray3D
{
// 在此处补充你的代码
    public:
    T*** data;
    int layer,height,width;
    CArray3D(int l,int h,int w):layer(l),height(h),width(w)
    {
        data=new T**[layer];
        for(int i=0;i<layer;i++)
        {
            data[i]=new T*[height];
            T* single_layer=new T[height*width];
            for (int j=0;j<height;j++)
            {
                data[i][j]=single_layer+j*width;
                //每个data[i]中存的是一个二维数组T**，height维✖️一维数组T*
                //每个data[i][j]中存的是是一个一维数组，也是一个数组起始坐标，如何计算这个起始坐标？
                //为了保证内存连续分配以使memset可用，先分配一整块height*width的T数组
                //然后data[i][j]记录行起始坐标
            }
        }
    }
    ~CArray3D()
    {
        for(int i=0;i<layer;i++)
        {
            delete[] data[i][0];
            delete[] data[i];
        }
        delete[]data;
    }
    class CArray2D
    {
        public:
        T** now_layer;
        int height_,width_;
        CArray2D(T**p,int h,int w):now_layer(p),height_(h),width_(w){}
        T* operator[](int j)
        {
            return now_layer[j];
        }
        operator T*()
        {
            return now_layer[0];
        }
    };
    CArray2D operator[](int nowlayer)
    {
        if(nowlayer>=layer) return CArray2D(data[0],height,width);
        return CArray2D(data[nowlayer],height,width);
    }
};

CArray3D<int> a(3,4,5);
CArray3D<double> b(3,2,2);
void PrintA()
{
	for(int i = 0;i < 3; ++i) {
		cout << "layer " << i << ":" << endl;
		for(int j = 0; j < 4; ++j) {
			for(int k = 0; k < 5; ++k) 
				cout << a[i][j][k] << "," ;
			cout << endl;
		}
	}
}
void PrintB()
{
	for(int i = 0;i < 3; ++i) {
		cout << "layer " << i << ":" << endl;
		for(int j = 0; j < 2; ++j) {
			for(int k = 0; k < 2; ++k) 
				cout << b[i][j][k] << "," ;
			cout << endl;
		}
	}
}

int main()
{

	int No = 0;
	for( int i = 0; i < 3; ++ i ) {
		a[i];
		for( int j = 0; j < 4; ++j ) {
			a[j][i];
			for( int k = 0; k < 5; ++k )
				a[i][j][k] = No ++;
			a[j][i][i];	
		}
	}
	PrintA();
	memset(a[1],-1 ,20*sizeof(int));	
	memset(a[1],-1 ,20*sizeof(int));
	PrintA(); 
	memset(a[1][1],0 ,5*sizeof(int));	
	PrintA();

	for( int i = 0; i < 3; ++ i )
		for( int j = 0; j < 2; ++j )
			for( int k = 0; k < 2; ++k )
				b[i][j][k] = 10.0/(i+j+k+1);
	PrintB();
	int n = a[0][1][2];
	double f = b[0][1][1];
	cout << "****" << endl;
	cout << n << "," << f << endl;
		
	return 0;
}