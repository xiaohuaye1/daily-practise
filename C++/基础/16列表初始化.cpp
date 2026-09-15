#include <iostream>
using namespace std;
class Person{
    public:
    Person():m_A(10),m_B(20),m_C(30)
    {
        cout<<m_A<<m_B<<m_C<<endl;
    }
    int m_A,m_B,m_C;
    // 是C++专门为构造函数设计的语法
    // 编译器知道这是在初始化成员变量，不是普通赋值
    // 所有成员变量在类定义时就已经确定了内存布局
    // 初始化列表只是告诉编译器："用这些值来构造已经分配好内存的成员

};
void test(){
    Person p1;
}
int main(){
    test();
}