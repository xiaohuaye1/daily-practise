#include <iostream>
using namespace std;
class animal{
    public:
    int m_age;
};
class yang:virtual public animal{};
class tuo:virtual public animal{};//虚继承，把多个父类相同的变量在子类里变成一个
class yangtuo:public yang,public tuo{};
int main(){
    yangtuo a;
    a.yang::m_age=20;
    a.tuo::m_age=30;
    cout<<a.yang::m_age<<a.tuo::m_age<<a.m_age<<endl;//数据全变成30了
}
