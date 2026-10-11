#include <iostream>
//多态中父类往往没用可以改成纯虚函数
//类有纯虚函数也叫抽象类：无法实例化，子类必须重写不然也会变成纯虚类
class father{
    public:
    virtual void func()=0;//一个纯虚函数成为纯虚类
};
