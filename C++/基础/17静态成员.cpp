#include <iostream>
using namespace std;
//静态成员变量不属于某个对象上，所有对象共享一个数据
class person{
    public:
    static int m_a;
    //编译阶段分配内存
    //类内声明，类外初始化
};
int person::m_a=100;

/// @brief /////////////////////////////////////////
class man{
    public:
    static void func(){
        cout<<"diaoyong"<<endl;
        int m_b=900;//只能访问静态成员
    }
    static int m_b;
};
int m_b=0;
int main(){
    person p1;
    cout<<p1.m_a<<endl;
    ////////////
    man m;
    m.func();
}