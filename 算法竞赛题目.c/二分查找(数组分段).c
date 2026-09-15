#include <stdio.h>
#include <limits.h>
int check(int zuixiaohe,int n,int number[]){
    int sum=0;
    int kuaishu=0;
    for(int i=0;i<n;i++){
        if(number[i]>zuixiaohe){
            return INT_MAX;
        }else{
            if(sum+number[i]<=zuixiaohe){
            sum+=number[i];
        }else{
            sum=number[i];
            kuaishu++;
        }
        }
        
    }
    return kuaishu+1;

}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int number[n];
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    int left=0;
    int right=0;
    int answer=0;
    for(int i=0;i<n;i++){
        if(number[i]>left){
            left=number[i];
        }
        right+=number[i];
    }
    while(left<=right){
        int zuixiaohe=(right+left)/2;
        int shit=check(zuixiaohe,n,number);
        if(shit<m){
            right=zuixiaohe-1;
        }else if(shit>m){
            left=zuixiaohe+1;
        }else{
            answer=zuixiaohe;
            right=zuixiaohe-1;
        }

    }
    printf("%d",answer);
    
}