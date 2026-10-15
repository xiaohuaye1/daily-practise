#include <iostream>
#include <string>
#include <list>
using namespace std;
int main(){
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);


    list<int>l2=l;

    list<int>l3;
    l3.assign(l2.begin(),l2.end());

    list<int>l4;
    l4.assign(10,100);
}