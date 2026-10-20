#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    v1.push_back(9);
    sort(v1.begin(),v1.end());
    bool k=binary_search(v1.begin(),v1.end(),9);//是否有9？注意：必须有序序列！
    cout<<k;

}
