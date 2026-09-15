//C中的结构体纯数据容器，但cpp的可以定义函数，像class
#include <iostream>
using namespace std;
struct sutdents{
    string name;
    int age;
    float score;
};
int main(){
    struct sutdents a;
    a.name="xiedi";
    a.age=100;
    a.score=100;
    cout<<a.name<<endl;

    //----------------------------------------------//
    struct sutdents b[10];
    b[3].age=100;

    sutdents c;
    
    

    
}