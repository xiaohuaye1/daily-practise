#include <iostream>
using namespace std;
class Person{
    public:
    int age;
//构造函数
Person(){
    cout<<"无参数"<<endl;
}
Person(int a){
    cout<<"参数"<<endl;
}
//拷贝构造
Person(const Person &p){
    age=p.age;
    //传入的人身上的属性拷贝到我身上
}
};
//默认构造调用： !注意不要加括号
Person p1;
//有参
Person p2(10);
//拷贝
Person p3(p1);