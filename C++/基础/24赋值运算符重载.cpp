#include <iostream>
using namespace std;

class person {
public:
    // 构造函数：创建person对象时自动调用
    person(int age) {
        m_age = new int(age);  // 在堆内存中分配int空间，存储age值
        // 这样做的目的：演示动态内存管理，避免浅拷贝问题
    }
    person& operator=(person &p) {
        // 第一步：释放当前对象原有的内存（避免内存泄漏）
        if (m_age != NULL) {      // 如果当前对象已有内存分配
            delete m_age;          // 释放原有内存
            m_age = NULL;          // 指针置空，避免悬空指针
        }

        // 第二步：深拷贝 - 为新对象分配独立内存
        m_age = new int(*p.m_age); // 分配新内存，并拷贝p.m_age指向的值
        // 注意：这里拷贝的是值(*p.m_age)，不是指针(p.m_age)

        // 第三步：返回当前对象的引用，支持链式赋值
        return *this;  // this是指向当前对象的指针，*this就是当前对象本身
        // 返回引用可以让 p1 = p2 = p3 这样的链式赋值正常工作
    }

    // 析构函数：对象销毁时自动调用
    ~person() {
        if (m_age != NULL) {      // 如果指针不为空
            delete m_age;          // 释放堆内存
            m_age = NULL;          // 指针置空
        }
    }

    int* m_age;  // 指向int的指针成员变量
};

int main() {
    person p1(18);  
    person p2(19); 

    p1 = p2;        // 调用赋值运算符重载函数
                    // 效果：p1.m_age现在指向新分配的内存，值为19
                    // p1和p2的m_age指向不同的内存地址（深拷贝）

    cout << *p1.m_age; // 输出p1.m_age指向的值（应该是19）

    return 0;
    // 程序结束，p1和p2的析构函数被调用，各自释放自己的内存
    // 因为实现了深拷贝，所以不会出现双重释放的问题
}