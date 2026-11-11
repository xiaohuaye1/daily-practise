//快速解决将某个区间+一个数
//f[i]=a[i]-a[i-1]
//性质:原数组[L,R]全部加K相当于差分f[L]+=K,f[R+1]-=K
//a[i]=f[1]+f[2]+...f[i]
#include <iostream>
using namespace std;
const int N=1e5+10;
int a[N];
int f[N];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        f[i]=a[i]-a[i-1];
    }
    while(m--){
        int l,r,k;
        cin>>l>>r>>k;
        f[l]+=k;f[r+1]-=k;

    }
    for(int i=1;i<=n;i++){
        a[i]=a[i-1]+f[i];
        cout<<a[i];
    }
}