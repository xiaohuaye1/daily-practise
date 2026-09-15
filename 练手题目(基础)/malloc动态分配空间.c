//malloc 
//void* malloc（size_t size);   void是空指针，展示不知道这是什么类型指针，可以后续进行强行转换
//void *realloc（void *ptr,size_t size)  扩充空间（malloc用到一半不够了
#include <stdio.h>
#include <stdlib.h> //malloc 所在函数
#include <string.h> 

int main(){
    int *p=malloc(sizeof(int)*20);//动态申请，系统不会收回
    int i=10;
    *p=i;printf("%d",*p);   
    free(p);//释放 和malloc 申请一起用 否则会数据泄露


    //malloc返回的是 *类型的，因此在不是指针的情况下要转换
   // char *p;
   // p=(char *)malloc(sizeof(int)*20);
    strcpy(p,"hello");
    printf("%s\n",p);


    char *q;
    q=(char *)realloc(p,sizeof(char)*20); //在p的基础上申请
    strcat(q,"teacher"); //strcat 字符链接
    
    printf("%s",q);
    free(p);
}
