#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;cin>>n;
    int a,b,c,d;
    vector<vector<int>> data(n,vector<int>(4));
    for (int i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        data[i][0] = a;
        data[i][1] = b;
        data[i][2] = c;
        data[i][3] = d;


    }
    int x,y;cin>>x>>y;
    int countl=-1;
    for (int i=0;i<n;i++){
        if(x>=data[i][0]&&x<=data[i][0]+data[i][2]&&y>=data[i][1]&&y<=data[i][1]+data[i][3]){
            countl=i;
        }
    }
    if(countl==-1){
        cout<<countl;
    }else{
        cout<<countl+1;
    }
    
}