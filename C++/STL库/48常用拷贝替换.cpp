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
    v2.resize(v1.size());
    copy(v1.begin(),v1.end(),v2.begin());
    for_each(v2.begin(),v2.end(),print01);
}