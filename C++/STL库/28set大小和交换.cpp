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


    if(!s1.empty()){
        cout<<"²»¿Õ"<<endl;
        cout<<s1.size()<<endl;
    }

    set<int>s2;
    s2.insert(100);
    s2.insert(200);
    s2.insert(300);
    s1.swap(s2);


}