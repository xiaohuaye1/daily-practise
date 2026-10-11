#include <iostream>
#include <string>
using namespace std;
//1：包含头文件
#include <fstream>
//2创建流对象
void test1(){
    ifstream oka; //intput（写），fiel

    //3打开方式
    oka.open("C:\\Users\\Lenovo\\Desktop\\test.txt",ios::in);//out是写，in是读

  
    if(!oka.is_open()){
        cout<<"失败"<<endl;
    }
    // //4读
    // char a[1024]={0};
    // while(oka>>a){
    //     cout<<a<<endl;
    // }
    //读2
    string b;
    while(getline(oka,b)){
        cout<<b<<endl;
    }

    //5关闭
    oka.close();
}

int main(){
    test1();
}