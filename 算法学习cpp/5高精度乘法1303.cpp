#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    if(a=="0"||b=="0"){
        cout<<0;
        return 0;
    }
    int la,lb,lc;
    la=a.size(),lb=b.size(),lc=la+lb;
    int c[lc];
    for(int i=0;i<lc;i++){
        c[i]=0;
    }
    //1拆分
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    //2模拟
    for(int i=0;i<la;i++){
        for(int j=0;j<lb;j++){
            c[i+j] += (a[i]-'0') * (b[j]-'0');
            
        }
    }
    for(int i=0;i<lc-1;i++){
        c[i+1]+=c[i]/10;
        c[i]=c[i]%10;
    }
    int start=lc-1;
    while(c[start]==0){
        start--;
    }
    for(int i=start;i>=0;i--){
        cout<<c[i];
    }
    cout << endl;




}