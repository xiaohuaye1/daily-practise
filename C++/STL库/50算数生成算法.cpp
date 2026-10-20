#include<iostream>
#include<numeric>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<101;i++){
        v.push_back(i);
    }
    int total=accumulate(v.begin(),v.end(),0);//0是起始的累加值
    cout<<total<<endl;
}