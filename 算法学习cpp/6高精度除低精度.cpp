#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string a;cin >>a;int la=a.size();
    int b;cin>>b;
    long long t=0;
    int c[la];
    for(int i=0;i<la;i++){
        c[i]=0;
    }
    
    for(int i=0;i<la;i++){
        t=t*10+a[i]-'0';
        c[i]=t/b;
        t=t%b;
    }

    int start=0;
    while(c[start]==0){
        start++;
        
    }
    for(int i=start;i<la;i++){
        cout<<c[i];
    }
    cout << endl;
}