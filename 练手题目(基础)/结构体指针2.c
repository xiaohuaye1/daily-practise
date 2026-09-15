#include <stdio.h>     //用指针修改结构体里的值
#include <stdlib.h>
struct a{
    int age;
    char gender;
};
void yigehanshu(struct a *yi){  //要是指针，不然传入的是结构体的副本，修改的是结构体副本
    yi->age=20;
    yi->gender='M';
}
int main(){
    struct a *p;
    // p=malloc(sizeof( struct a));        方法1：可以手动分配内存给指针p；
    //yigehanshu(p);
    //printf("%d %c",p->age,p->gender);
    struct a stu1;
    stu1.gender='N';
    stu1.age=99;
    printf("%d %c",stu1.age,stu1.gender);
    //以上在给结构体赋初始值
    p=&stu1;                            
    yigehanshu(p);
    //通过指针调用函数修改结构体
    printf("%d %c",p->age,p->gender);
}