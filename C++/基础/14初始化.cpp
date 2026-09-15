#include <iostream>
using namespace std;
class person{
    //1:构造函数初始化
    //没有返回值不用写void
    //函数名与类名一致
    //创建对象时自动调用且只调用一次
public:
    person(){
        cout<<"构造调用成功"<<endl;
    }

    //2：析构函数进行清理操作
    //没有返回值不写void
    //不可重载
    //对象销毁前自动调用
    ~person(){
        cout<<"析构调用成功"<<endl;
    }

};
int main(){
    person p1;
    
}