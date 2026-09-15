#include <stdio.h>
int sum(int *n){
    
    *n=*n+1;
    return 0;
}
int main(){
    int k=0;
    int *n=&k;
    
    scanf("%d",&k);
    sum(n);
    printf("%d",k);
}