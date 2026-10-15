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

    //查找
    set<int>::iterator a=s1.find(30);

    //统计个数
    int niu=s1.count(30);
    cout<<niu<<endl;

}