#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;
void printd(deque<int>&d1){
    for(deque<int>::iterator a=d1.begin();a!=d1.end();a++){
        cout<<*a<<" ";
    }
    cout<<endl;

}
int main(){
    deque<int>d1;
    d1.push_back(10);
    d1.push_front(60);
    d1.push_back(5);
    d1.push_back(16);
    d1.push_front(31);
    d1.push_back(17);
    d1.push_front(20);
    d1.push_back(9);
    d1.push_back(3);
    printd(d1);

    //排序
    sort(d1.begin(),d1.end());
    printd(d1);
    //vector也行


}