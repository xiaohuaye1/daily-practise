#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int>l1;
    //头插尾插
    l1.push_back(1);
    l1.push_front(2);
    l1.push_back(3);
    l1.push_front(4);
    l1.push_back(5);
    l1.push_front(6);

    //尾删
    l1.pop_back();
    //头删
    l1.pop_front();


    //insert

    list<int>::iterator a=l1.begin();

    l1.insert(++a,100);

    //删除
    list<int>::iterator b=l1.begin();
    l1.erase(++b);


    //移除
    l1.push_back(10000);
    l1.push_back(10000);
    l1.push_back(10000);
    l1.remove(10000);



    //清空
    l1.clear();

}