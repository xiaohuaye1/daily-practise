#include <iostream>
#include <string>
#include <list>
using namespace std;

void printlist(list<int>&l1){
    for(list<int>::iterator a=l1.begin();a!=l1.end();a++){
        cout<<*a<<endl;
    }
}

int main(){
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    list<int>l2(l.begin(),l.end());
    list<int>l3(l2);
    list<int>l4(10,1000);
    printlist(l2);

}