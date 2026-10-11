#include <iostream>
using namespace std;

class Base
{
    public:
    
    void head(){
        cout<<"123"<<endl;

    }

    void tail(){
        cout<<"456"<<endl;
    }
};

class java:public Base{ //继承Base里的public所有内容
    //public继承权限不变
    //protect继承public变protect其他不变
    //private继承全变private
    
    public:
    void javak(){
        cout<<"java"<<endl;
    }
};

int main(){
    java a;
    a.head();
    a.tail();
    a.javak();
}