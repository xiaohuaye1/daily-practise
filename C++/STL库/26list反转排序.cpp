#include <iostream>
#include <list>
using namespace std;

void printlist(list<int>&l1){
    for(list<int>::iterator a=l1.begin();a!=l1.end();a++){
        cout<<*a<<"";
    }
    cout<<endl;
}
bool compare(int v1,int v2){
    return v1>v2;
}
int main(){
    list<int>l1;
    l1.push_back(1);
    l1.push_front(2);
    l1.push_back(3);
    l1.push_front(4);
    l1.push_back(5);
    l1.push_front(6);
    //反转
    printlist(l1);
    l1.reverse();
    printlist(l1);

    //排序
    l1.sort();
    printlist(l1);

    //降序/自定规则
    l1.sort(compare);
    printlist(l1);
    

}