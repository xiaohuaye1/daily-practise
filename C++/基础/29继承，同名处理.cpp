#include <iostream>
using namespace std;
class fatheer{
    public:
    int m_a=100;
    void func(){
        cout<<"base"<<endl;
    }
};
class son:public fatheer{
    public:
    int m_a=200;
    void func(){
        cout<<"son"<<endl;
    }
};
int main(){
    son a;
    cout<<"son="<<a.m_a<<endl;
    cout<<"father="<<a.fatheer::m_a<<endl;//通过子类访问父类要加作用域

    ////////函数同理
    a.func();
    a.fatheer::func();
}