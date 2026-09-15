#include <stdio.h>
long long caculate(int H,int a[],int n){
    long long sum=0;
    for(int i=0;i<n;i++){
        if(a[i]<H){
            continue;
        }else{
            sum+=a[i]-H;
        }
    }
    return sum;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int trees[n];
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&trees[i]);
        if(trees[i]>max){
            max=trees[i];
        }
    }
    int left=0;
    int right=max;
    int answer=0;
    while(left<=right){
         int mid=(left+right)/2;
         long long total=caculate(mid,trees,n);
        if(total>=m){
            answer=mid;
            left=mid+1;    
        }else{
        right=mid-1;
        }
    }
    printf("%d",answer);
}