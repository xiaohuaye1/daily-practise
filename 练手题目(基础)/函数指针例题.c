#include <stdio.h>

float qiu(int n){
    float sum=0;
    for(;n>0;n-=2){
        float j=1.0/n;
        sum+=j;
    }
    printf("%f",sum);
    return sum;
}
int main(){
    int a;
    float b;
    float(*p)(int)=qiu;
    
    scanf("%d",&a);
    b=p(a);
}
