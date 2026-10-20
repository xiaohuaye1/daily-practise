#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print01(int val){
    cout<<val<<" ";
}
class G3{
    public:
    bool operator()(int val){
        return val>3;
    }
};

int main(){
    vector<int> v1;
    for(int i=0;i<20;i=i+2){
        v1.push_back(i);
    }
    replace(v1.begin(),v1.end(),2,200000);//20换成200000
    for_each(v1.begin(),v1.end(),print01);
    cout<<endl;
    replace_if(v1.begin(),v1.end(),G3(),3000);
    for_each(v1.begin(),v1.end(),print01);
    cout<<endl;


    //互换
        vector<int> v2;
    for(int i=0;i<20;i=i+2){
        v2.push_back(i);
    }
    swap(v1,v2);
    for_each(v1.begin(),v1.end(),print01);
    cout<<endl;
    for_each(v2.begin(),v2.end(),print01);
    
}