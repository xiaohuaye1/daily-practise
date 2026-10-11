#include <iostream>
using namespace std;
//1：包含头文件
#include <fstream>
//2创建流对象
void test1(){
    ofstream oka; //output（写），fiel

    //3打开方式
    oka.open("C:\\Users\\Lenovo\\Desktop\\test.txt",ios::out);//out是写，in是读

    //4写
    oka<<"hhhhhhh"<<endl;
    oka<<"bbb"<<endl;

    //5关闭
    oka.close();
}

int main(){
    test1();
}