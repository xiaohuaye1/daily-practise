#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<int>v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    //1,中括号
    for(int i=0;i<v1.size();i++){
        cout<<v1[i];
    }
    cout<<endl;

    //2at
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i);
    }
    cout<<endl;


    //获取第一个元素
    cout<<v1.front()<<endl;

    //获取最后一个元素
    cout<<v1.back()<<endl;

}