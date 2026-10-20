#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print01(int val){
    cout<<val<<" ";
}
class print02{
        public:
        void operator()(int val){
            cout<<val<<" ";
        }
};
int main(){
    vector<int>v1;
    for(int i=0;i<110;i++){
        v1.push_back(i);
    }
    //普通函数
    for_each(v1.begin(),v1.end(),print01);
    cout<<endl;
    /////仿函数
    for_each(v1.begin(),v1.end(),print02());//普通函数放函数名，仿函数放完整函数
    
    

}