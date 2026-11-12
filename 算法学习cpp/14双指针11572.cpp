#include <iostream>
#include <unordered_map>
using namespace std;
int t,n;
const int N=1e6+10;
int a[N];
int main(){
    cin>>t;
    while(t--){
        int ret=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int left=0,right=0;
        unordered_map<int,int> M;
        while(right<n){
            //进
            M[a[right]]++;
            while( M[a[right]]>1){
                M[a[left]]--;
                left++;
            }
            ret=max(ret,right-left+1);
            right++;
        }
        cout<<ret<<endl;
    }
    
}