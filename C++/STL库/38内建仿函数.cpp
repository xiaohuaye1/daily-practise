#include <iostream>
using namespace std;
#include <functional>//内建函数头文件
#include <vector>
#include <algorithm>
int main(){
    negate<int>n;
    cout<<n(50)<<endl;
    //取反

    plus<int>n1;
    cout<<n1(10,100)<<endl;
    //相加


    //关系
    vector<int>v;
    v.push_back(10);
    v.push_back(90);
    v.push_back(20);
    v.push_back(40);
    sort(v.begin(),v.end(),greater<int>());
    //内建的函数
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //逻辑非
    vector<bool>v1;
    v1.push_back(true);
    v1.push_back(false);
    v1.push_back(false);
    v1.push_back(true);

    vector<bool>v2;
    v2.resize(v1.size());
    transform(v1.begin(),v1.end(),v2.begin(),logical_not());//搬运并且取反
}