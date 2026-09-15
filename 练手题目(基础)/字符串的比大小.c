#include <stdio.h>
#include <string.h>
void swap(char *str1,char *str2);
int main(){      //strcmp本质上比的是不同，但也可用于比较字符串的大小
    char str1[20]={"1234"};
    char str2[20]={"1999"};
    if (strcmp(str1,str2)>0){      //一位位比较ASCLL码的大小,如果str1>str2返回正数，否则返回负数
        printf("str1 is bigger");
        printf("%d",strcmp(str1,str2));
    }else{
        printf("%s\n",str1);
        swap(str1,str2);
        printf("%s\n",str1);
        printf("str2 is bigger");
    }
}
void swap(char *str1,char *str2){
    char temp[20];             //strcpy类似=，吧右边的复制到左边
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

}