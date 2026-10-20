#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print01(int val){
    cout<<val<<" ";
}

int main(){
    vector<int> v1;
    for(int i=0;i<20;i=i+2){
        v1.push_back(i);
    }
    vector<int> v2;
    for(int i=1;i<20;i=i+2){
        v2.push_back(i);
    }
    vector<int> v3;
    v3.resize(30);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());//合并的两个必须有序且顺序相同
    for_each(v3.begin(),v3.end(),print01);
}