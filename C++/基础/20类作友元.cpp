#include <iostream>
using namespace std;

class building;  // 前向声明

class gay {
public:
    void visit();
    building* a;  // 改为指针，避免循环依赖
};

class building {
    friend class gay;  // 声明gay类为友元类
public:
    building(){
        m_livingroom="客厅";
    }  // 构造函数
    string m_livingroom;
};

// 实现gay类的成员函数
void gay::visit() {
    if (a) {
        cout << "访问建筑：" << a->m_livingroom << endl;
    }
}

// 主函数 - 程序入口点
int main() {
    building house;        // 创建一个建筑对象
    gay visitor;           // 创建一个访客对象
    visitor.a = &house;    // 让访客指向建筑
    visitor.visit();       // 访客访问建筑
    return 0;
}