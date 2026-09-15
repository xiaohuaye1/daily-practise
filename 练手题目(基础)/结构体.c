#include <stdio.h>
#include <string.h>
int f();
struct shit{
    char name[20];
    char sex[20];
    int age;
  };//struct 本身不是函数而是一种数据类型，类似int char ，所以要加";"

  int main(){
        struct shit yituo1;                     //声明
        strcpy(yituo1.name,"fuck");                                 //数组无法声明后再整体赋值，如果要达到修改的目的要调用string。h里面的函数 strcpy
        printf("%s\n ",yituo1.name);
        f();
  }
  //当然也可用数组
    int f(){
        struct shit yituo2[3];                    
        for(int i=0;i<3;i++){
            scanf("%s%s%d",yituo2[i].name,yituo2[i].sex,&yituo2[i].age);      //scanf 可以直接修改数组，因为其直接取的是地址运算符

        }                 
        for(int i=0;i<3;i++){
            printf("%s%s%d\n",yituo2[i].name,yituo2[i].sex,yituo2[i].age);

        }    

  }