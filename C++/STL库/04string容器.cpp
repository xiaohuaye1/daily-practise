//char*是指针，string是类
#include <iostream>
using namespace std;
void test1(){
    //默认构造
    string s1;

    //初始化
    const char*str= "hello motherfucker";
    string s2(str);


    //拷贝
    string s3(s2);

    cout<<s3<<endl;
    
}

int main(){
    test1();
}