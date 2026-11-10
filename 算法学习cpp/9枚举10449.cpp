#include <iostream>
#include <cstring>//!!多组数据要清空之前的数据
using namespace std;
const int N=10;
int n=5;
int a[N];
int t[N];
// 自己写一个 calc 函数，统计 x 的二进制里有多少个 1
int calc(int x) {
    int count = 0;
    while (x > 0) {
        if (x & 1) count++; // 如果最低位是 1，计数器加 1
        x >>= 1;            // 右移一位，继续看下一位
    }
    return count;
}
int main(){
    int T;cin>>T;
    while(T--){
        ///先清空
        memset(a,0,sizeof a);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char ch;cin>>ch;
                //存相反的
                if(ch=='0') a[i]|=1<<j;
            }
        }
        int ret=0x3f3f3f;//统计最小
        //枚举所有按法
        for(int st=0;st<(1<<n);st++){//第一行所有按法
            memcpy(t,a,sizeof a);
            int cnt=0;
            int push=st;
            //后续
            for(int i=0;i<n;i++){
                //改当前行
                cnt+=calc(push);
               t[i] ^= push ^ (push << 1) ^ (push >> 1);
                t[i]&=(1<<n)-1;//清空影响
                //下一行
                if(i>0) t[i-1]^=push;
                if(i+1<n) t[i+1]^=push;
                push=t[i];
                
                

            }
            if(t[n-1]==0) ret =min(ret,cnt);
        }
        if(ret>6) cout<<-1<<endl;
        else cout<<ret<<endl;
    }
}