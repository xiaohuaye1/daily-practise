#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=0;i--){
        int a;
        cin>>a;
        if(a==0) continue;
        if(a<0){
            cout<<'-';
        }else if (a!=0)
        {
            cout<<'+';
        }
        a=abs(a);
        
        if(a!=1||(a==1&&i==0))cout<<a;
        if(i==0) continue;
        else if(i==0) cout<<'x';
        else cout<<"x^"<<i;
    }
}