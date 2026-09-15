#include <iostream>
using namespace std;
class Person{
public:
    //重载+号
    //返回类型 operator运算符(参数列表) {
    // 实现代码}
    Person operator+(Person &p)
    {
        Person temp;
        temp.m_A=this->m_A+p.m_A;
        temp.m_B=this->m_B+p.m_B;
        return temp;
    }
    int m_A;
    int m_B;
};
void test(){
    Person p1;
    Person p2;
    p1.m_A=10;
    p1.m_B=20;
    p2.m_A=30;
    p2.m_B=40;
    Person p3;
    p3=p1+p2;
    cout<<p3.m_A<<" "<<p3.m_B<<endl;
}
class student{
public:
    int m_A;
};
student operator+(student &p1,student &p2){
    student temp;
    temp.m_A=p1.m_A+p2.m_A;
    return temp;
}
void test2(){
    student p1;
    student p2;
    p1.m_A=10;
    p2.m_A=20;
    student p3;
    p3=p1+p2;
    cout<<p3.m_A<<endl;
}
int main(){
    test();
    test2();
}
//成员函数本质：p3=p1.operator+(p2)
//全局函数本质:p3=operator+(p1,p2)