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
    reverse(v1.begin(),v1.end());
    for_each(v1.begin(),v1.end(),print01);
}