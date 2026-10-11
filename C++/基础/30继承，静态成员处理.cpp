#include <iostream>
using namespace std;
//静态成员变量不属于某个对象上，所有对象共享一个数据
class father{
    public:
    static int m_a;
    //编译阶段分配内存
    //类内声明，类外初始化
};
int father::m_a=100;

class son:public father{
    public:
    static int m_a;
};
int son::m_a=999;

int main(){
    son a;
    //通过对象访问
    cout<<a.m_a<<endl;
    cout<<a.father::m_a<<endl;
    //通过类访问
    cout<<son::m_a<<endl;
    cout<<son::father::m_a<<endl;
}