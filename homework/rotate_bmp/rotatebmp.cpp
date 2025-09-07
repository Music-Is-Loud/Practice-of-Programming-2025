#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#pragma pack(push,1)//禁用编译器优化
class CHeader//文件头
{
    public:
    unsigned short bfType;//bmp file's type
    unsigned int bfSize;//bmp file's size,总数=文件头+位置信息头+位图数据
    unsigned short bfReserved1;//保留字符
    unsigned short bfReserved2;//保留字符
    unsigned int bf0ffBits;//文件头到位图数据的偏移字节=文件头+位置信息头=bfSize+biSize
};
class CInfo//位置信息头
{
    public:
    unsigned int biSize;//bitmap information's size
    unsigned int biWidth;//图像宽度
    unsigned int biHeight;//图像高度
    unsigned short biPlanes;//位元面数
    unsigned short biEachBit;//每个像素占用的bit数
    unsigned int biCompression;//压缩类型
    unsigned int biImageSize;//位图数据区所占的字节大小
    unsigned int biXppm;//水平分辨率
    unsigned int biYppm;//垂直分辨率
    unsigned int biUsedColor;//本位图实际用到的颜色索引数
    unsigned int biImportantColor;//本位图中重要的色彩数
};
#pragma pack(pop)
struct PIXEL
{
    unsigned char blue;
    unsigned char green;
    unsigned char red;
};
CHeader srcHead;
CInfo srcInfo;
PIXEL *imagPixel;
unsigned int srcSize;
//每一行字节数都要是4的倍数，多出来的字节需要填0，计算要多少字节
char zero='0';
int addZero(CInfo scrInfo)
{
    int lineByte=(scrInfo.biWidth*scrInfo.biEachBit+31)/8;
    lineByte-=lineByte%4;
    int add=lineByte-scrInfo.biWidth*scrInfo.biEachBit/8;
    return add;
}
void readFile(FILE* p)
{
    fread(&srcHead,1,sizeof(CHeader),p);
    fread(&srcInfo,1,sizeof(CInfo),p);
    //fread(存入的指针位置，每次读取的字节数，字节数总块数，输入流)
    srcSize=srcInfo.biHeight*srcInfo.biWidth;
    imagPixel=new PIXEL[srcSize];
    int add=addZero(srcInfo);
    for(int i=0;i<srcInfo.biHeight;i++)//每一行读，读到行末跳过需要加0的字节数
    {
        //每一个像素3字节，一行有biWidth个像素
        fread((char*)imagPixel+i*srcInfo.biWidth*3,3,srcInfo.biWidth,p);
        fseek(p,add,SEEK_CUR);//把读写位置从当前往后移动add个字节
    }
}
void rotateImage(const char* outputfileName)
{
    FILE *p;
    p=fopen(outputfileName,"wb");
    if(p==NULL)
    {
        cout<<"ERROR:CANNOT CREATE THE FILE..."<<endl;
        return;
    }
    CHeader targetHead=srcHead;
    CInfo targetInfo=srcInfo;
    //长宽调整
    int targetHeight=srcInfo.biWidth;
    int targetWidth=srcInfo.biHeight;
    targetInfo.biHeight=srcInfo.biWidth;
    targetInfo.biWidth=srcInfo.biHeight;
    int targetAdd=addZero(targetInfo);
    targetInfo.biImageSize=(unsigned int)((targetInfo.biWidth*3+targetAdd)*targetInfo.biHeight);

    //文件头，信息头写入
    fwrite(&targetHead,1,sizeof(CHeader),p);
    fwrite(&targetInfo,1,sizeof(CInfo),p);
    //建立一个像素数组并赋值
    PIXEL* target=new PIXEL[srcSize];
    //(i,j)->(j,targetHeight-i-i)
    for(int i=0;i<targetHeight;i++)
    {
        for(int j=0;j<targetWidth;j++)
        {
            *(target+i*targetWidth+j)=*(imagPixel+j*srcInfo.biWidth+targetHeight-1-i);
        }
    }
    //将所存的像素信息写入到文件中
    for(int i=0;i<targetHeight;i++)
    {
        fwrite((char*)target+i*targetWidth*3,3,targetWidth,p);
        fwrite(&zero,1,targetAdd,p);//补0
    }
    fclose(p);
    delete []target;
}
int main(int argc,char* argv[])//argc:参数个数，第0个是程序全名，后面由用户输入
{
    if(argc!=3) 
    {
        cout<<"Usage: "<<argv[0]<<"<input.bmp><output.bmp>"<<endl;
        return 1;
    }
    FILE* p;
    p=fopen(argv[1],"rb");
    if(p!=NULL)
    {
        readFile(p);
        fclose(p);
        rotateImage(argv[2]);
        delete[]imagPixel;
    }
    else
    {
        cout<<"ERROR:CANNOT OPEN THE FILE..."<<endl;
    }
    return 0;
}