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


    multiset<int> mu;
    //允许插入重复值
    mu.insert(10); 
    mu.insert(10);
    mu.insert(20);


}