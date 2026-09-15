#include<stdio.h>
int whomax(int a,int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }

}
int main(){
    int hang;
    scanf("%d",&hang);
    int triangle[1000][1000];
    for(int i=0;i<hang;i++){
        for(int j=0;j<=i;j++){
            scanf("%d",&triangle[i][j]);
        }
    }
    for(int i=hang-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            triangle[i][j]+=whomax(triangle[i+1][j],triangle[i+1][j+1]);
        }
    }
    printf("%d",triangle[0][0]);
}