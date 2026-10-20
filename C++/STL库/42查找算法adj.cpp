#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Fg{
    public:
    bool operator()(int val){
        return val>5; 
    }
};
int main(){
    vector<int> v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    v1.push_back(9);
    vector<int>::iterator it=adjacent_find(v1.begin(),v1.end());//重复
    cout<<*it;

}