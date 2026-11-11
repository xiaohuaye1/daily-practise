//傻逼运营
#include <iostream>
using namespace std;
int n,m;
const int N=1e5+10;
typedef long long ll;
ll f[N];
int main(){
    cin>>n>>m;
    int x;cin>>x;
    for(int i=2;i<=m;i++){
        int y;cin>>y;
        if(x>y) f[y]++,f[x]--;
        else f[x]++,f[y]--;
        x=y;
    }
    for(int i=1;i<=n;i++){
        f[i]+=f[i-1];
    }
    ll ret=0;
    for(int i=1;i<n;i++){
        ll a,b,c;cin>>a>>b>>c;
        ret+=min(a*f[i],c+b*f[i]);
    }
    cout<<ret<<endl;
}