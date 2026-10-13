#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<int>v1;
    //尾插
    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);

    //尾删
    v1.pop_back();
    
    //插入，第一个只能是迭代器
    v1.insert(v1.begin(),100);
    v1.insert(v1.begin(),2,1000);//2个1000

    //删除,第一个也是叠加器
    v1.erase(v1.begin());
    v1.erase(v1.begin(),v1.end());//全删




}