#include <stdio.h>
int han(int n,char from,char temp,char to){
    
    if(n==1){
        printf("%c--->%c\n",from,to);
    }else{
        han(n-1,from,to,temp);            //n-1个盘子从A经过C到B
        printf("%c--->%c\n",from,to);
        han(n-1,temp,from,to);            //n-1个盘子从B经过A到C

    }
}
int main(){
 han(6,'A','B','C');
}