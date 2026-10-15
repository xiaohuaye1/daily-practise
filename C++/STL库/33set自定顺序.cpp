//集合，所有输入自动排序
#include <iostream>
#include <set>
using namespace std;
class comp{
    public:
    bool operator()(int v1,int v2)const{
        return v1>v2;
    }
};//仿函数
void printv(set<int,comp> &v){
    for(set<int,comp>::iterator a=v.begin();a!=v.end();a++){
        cout<<*a<<" ";
    }
    cout<<endl;
}

int main(){
    set<int,comp>s1;
    s1.insert(30);
    s1.insert(3);
    s1.insert(10);
    s1.insert(40);
    s1.insert(21);
    s1.insert(19);
    printv(s1);




}