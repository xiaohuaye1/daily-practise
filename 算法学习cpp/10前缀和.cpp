#include <iostream>
using namespace std;
//前缀和->快速求出数组中某一段区间和
//f[i]=f[i-1]+a[i]
typedef long long LL;
const int N=1e5+10;
int n,q;
LL a[N];LL f[N];
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin >>a[i];
    for(int i=1;i<=n;i++) f[i]=f[i-1]+a[i];
    while(q--){
        int l,r;cin>>l>>r;
        cout<<f[r]-f[l-1]<<endl;
    }
    return 0;

}