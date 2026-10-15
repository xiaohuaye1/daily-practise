#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>s1;
    s1.insert(30);
    s1.insert(3);
    s1.insert(10);
    s1.insert(40);
    s1.insert(21);
    s1.insert(19);
    //删除
    s1.erase(s1.begin());
    //删除重载
    s1.erase(30);
    //清空
    s1.clear();



}