//0和1表示两种情况
//求子集
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> num;
    for(int i = 0; i < 5; i++){
    num.push_back(i);
    }
    int n=num.size();
    vector<vector<int>> ans; 
    for(int i=0;i<(1<<n);i++){
        vector<int> temp;
       for(int j=0;j<n;j++){
        if((i>>j)&1){
            temp.push_back(num[j]);
        }
       }
       ans.push_back(temp);
    }

    for (const auto& subset : ans) {
    cout << "[ ";
    for (int numk : subset) {
        cout << numk << " ";
    }
    cout << "]" << endl;
}
}