#include <stdio.h>
int check(int zuiduanjuli,int m,int l,int n,int a[]){
    int last=0;
    int removed=0;
    for(int i=0;i<n;i++){
        if(a[i]-last<zuiduanjuli){
            removed++;
        }else{
            last=a[i];
        }
    }
    if(l-last<zuiduanjuli){
        return 0;
    }
    if(removed<=m){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n,m,l;
    scanf("%d %d %d",&l,&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int left=1;
    int right=l;
    int answer=0;
    while(left<=right){
        int mid=(left+right)/2;
        if(check(mid,m,l,n,a)){
            answer=mid;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    printf("%d",answer);

}