#include <stdio.h>
#include <math.h>
int is_prime(int a);
int main(){
    int a;
    int j=2;
    scanf("%d",&a); //输入偶数
    for(;j<=a/2;j++){
            if(is_prime(j)==1&&is_prime(a-j)==1){
                printf("%d=%d+%d\n",a,j,a-j);
            }
    }


}



int is_prime(int a){
    if(a==2)
    return 1;
    
    for(int i=2;i<(int)sqrt(a)+1;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}