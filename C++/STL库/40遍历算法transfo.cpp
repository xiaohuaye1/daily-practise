#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print01(int val){
    cout<<val<<" ";
}
class Tr{
    public:
    int operator()(int v){
        return v+10000;
    }
};
int main(){
    vector<int>v1;
    for(int i=0;i<110;i++){
        v1.push_back(i);
    }
    
    vector<int>v2;
    v2.resize(v1.size());
    transform(v1.begin(),v1.end(),v2.begin(),Tr());
    for_each(v2.begin(),v2.end(),print01);


}