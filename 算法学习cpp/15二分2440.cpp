#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main() {
    int n, k;
    cin >> n >> k;
    int maxv=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxv) maxv=a[i];
    }
    int l=1,r=maxv;
    int ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        int cnt=0;
        for(int i=0;i<n;i++) cnt+=a[i]/mid;
        if(cnt>=k){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans;


}
