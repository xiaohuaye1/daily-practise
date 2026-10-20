//返回bool的仿函数
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class F{
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
    vector<int>::iterator it=find_if(v1.begin(),v1.end(),F());//匿名函数对象
    cout<<*it<<endl;
}