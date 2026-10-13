#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    //预留长度，不初始化不可访问
    vector<int> v;
    int num=0;
    int *p=NULL;
    for(int i=0;i<10000;i++){
        v.push_back(i);
        if(p!=&v[0]){
            num++;
            p=&v[0];
        }
    }

    cout<<num<<endl;

    /////统计开辟新地址的次数，花了15次，所以可以一次性开辟足够空间节省时间

    
    vector<int> v1;
    v1.reserve(10000);
    int num1=0;
    int *p1=NULL;
    for(int i=0;i<10000;i++){
        v1.push_back(i);
        if(p1!=&v1[0]){
            num1++;
            p1=&v1[0];
        }
    }
    cout<<num1<<endl;
    //只用一次


}