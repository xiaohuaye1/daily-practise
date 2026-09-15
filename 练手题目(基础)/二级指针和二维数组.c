//指向指针的指针
#include <stdio.h>
int f();
int f2();
int f0();
int main(){
    f3();
}
int f0(){
    int a=19;
    int *p=&a;
    int **p2=&p;
    printf("%p %p %p\n",*p2,p,p2); //对于二级指针p2,*p2是解引用1次，指向p的地址；**p2是解引用2次。指向p的值


}
int f(){
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4]=a;//声明一个指向二维数组，并且第二维（也就是列）等于4的指针
    printf("%d\n",*(*(p+1)+1)); //第二行第二个; 


}
int f2(){
    int a=1,b=2,c=3;
    int *shit[3]={&a,&b,&c}; //存指针类型的数组
    int **p2=shit;
    printf("%d %d %d\n",*shit[0],*shit[1],*shit[2]);
    printf("%d %d %d\n",**(p2+0),**(p2+1),**(p2+2));
}
int f3(){
    char *str1 ="shit";
    char *str2="fuck";
    char *str3="cao";
    char *a[3]={str1,str2,str3}; //都是char形才能存在同一个指针数组里，如果非要混合存放用void或结构体数组或nuion
    printf("%s",a[0]);





}
