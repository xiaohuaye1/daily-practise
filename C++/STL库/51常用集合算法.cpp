#include<iostream>
#include<numeric>
#include <vector>
#include<algorithm>
using namespace std;
void print01(int val){
    cout<<val<<" ";
}
int main(){
    vector<int>v1;
    vector<int>v2;
    for (int i= 0; i < 10; i++)
    {

    v1. push_back(i);
    v2. push_back(i + 5); // 5 14

    }

vector<int>v;
//目标容器需要提前开辟空间
//最特殊情况 大容器包含小容器 开辟空间 取小容器的size即可
    v.resize(min(v1.size(),v2.size()));
    vector<int>::iterator it=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());//求交集
    for_each(v.begin(),it,print01);
    cout<<endl;
    v.clear();



    //并集
    v.resize(v1.size()+v2.size());
    vector<int>::iterator it2=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
    for_each(v.begin(),it2,print01);
    cout<<endl;
    v.clear();




    //求差集
    v.resize(v1.size()+v2.size());
    vector<int>::iterator it3=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
    for_each(v.begin(),it3,print01);
    cout<<endl;
    v.clear();
    vector<int>::iterator it4=set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v.begin());
    for_each(v.begin(),it4,print01);

}