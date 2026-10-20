#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;
void print01(int val){
    cout<<val<<" ";
}

int main(){
    vector<int> v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    v1.push_back(9);
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(3);
    sort(v1.begin(),v1.end());//升序规则
    for_each(v1.begin(),v1.end(),print01);
    cout<<endl;
    srand((unsigned int)time(NULL));
    random_shuffle(v1.begin(),v1.end());
    for_each(v1.begin(),v1.end(),print01);
}