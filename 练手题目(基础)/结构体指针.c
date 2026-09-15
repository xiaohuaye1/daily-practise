#include <stdio.h>
struct man{
    char name[20];
    int age;
}person[3]={"kunge",32,"xhy",18,"chenke",18};  //定义一个人
int main(){
    struct man *p;
    p=person; //指向person的指针
    int m=0;
    for(int i=0;i<3;i++){
    printf("%-4s  %-4d",p->name,p->age);   //结构体指针用箭头。结构体数组用 "."
    if(p->age>m){
        m=p->age;
    }
    p++;  //记录最大的年龄
}
printf("%d",m);
}
//数组结构体不用加&(字符数组都不用加)
