//指针函数:函数，返回指针的函数 void * malloc(size)
//函数指针: 指针，地址指向函数 typedef int (*name)（int ，int）
#include <stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){

    int (*padd)(int,int)=&add;
    int a=10,b=20;
    int sum=0;
    sum=padd(a,b);
    printf("%d\n",sum);
}
