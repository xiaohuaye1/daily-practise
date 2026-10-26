#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int n = max(a.size(), b.size());
    int who_max=0;
     if (a.size() > b.size()) {
        b = string(a.size() - b.size(), '0') + b; 
    }
    if (b.size() > a.size()) {
        a = string(b.size() - a.size(), '0') + a; 
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            who_max=1;
            break;
        }else if (b[i]>a[i]){
            who_max=2;
            break;
        }
    }
   
    string ans(n, '0');
    int carry = 0; 
    for(int j = n - 1; j >= 0; j--){
        int pos1 = a[j] - '0';
        int pos2 = b[j] - '0';
        
        // 当前位相减 -上一位的借位
        if(who_max==1){
            int sum=pos1-pos2-carry;
            carry=0;
            if(sum<0){
                sum+=10;
                carry=1;
            }
            ans[j ] =sum + '0';

        } 
        if(who_max==2){
            int sum=pos2-pos1-carry;
            carry=0;
            if(sum<0){
                sum+=10;
                carry=1;
            }
            ans[j ] =sum + '0';

        } 
     
    }
    if(who_max==2) cout<<'-';
    if(who_max==0){
        cout<<'0';
        return 0;
    }
    int start=0;
    while(ans[start]=='0'){
        start++;
        
    }
    for(int i=start;i<n;i++){
        cout<<ans[i];
    }
    cout << endl;

    
}