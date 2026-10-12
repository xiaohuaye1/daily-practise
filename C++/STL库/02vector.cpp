#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void myPrint(int a){
    cout<<a<<endl;
}
void test1(){
    vector<int> v;//创建一个动态数组

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);

    //通过迭代器访问,iterator表示的是vector内的一个类型
    vector<int>::iterator itBeginLLLLL=v.begin();//起始迭代器，指向第一个元素
    vector<int>::iterator itEndxqc=v.end();//结束迭代器，指向最后一个元素

    //遍历
    while(itBeginLLLLL!=itEndxqc){
        cout<<*itBeginLLLLL<<endl;
        itBeginLLLLL++;
    }
    //stl自带遍历
    for_each(v.begin(),v.end(),myPrint);
}
int main(){
    test1();
}