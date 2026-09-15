//给数据起别名
#include <iostream>
using namespace std;
int main(){
    int a=0;
    int &asfhjakdhf=a;  //必须初始化且引用后不可改变 int &b=...
    cout<<asfhjakdhf<<endl;
    /////底层逻辑就是指针，只不过是不能改方向的指针//////指针常量
}