#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
 char str1[20]="abcd";
 puts(str1);
 char str2[20]="9999";
 puts(str2);
 strcat (str1,str2);    //strcat包含在string，追加字符串;strcpy为覆盖字符串;
  puts(str1);
  char *strnew=(char *)malloc(strlen(str1)+strlen(str2)+1);   //要加1因为需要多一个位置储存\0;
  
  strcpy(strnew,str1);
  strcat(strnew,str2);
  puts(strnew);
  printf("%d",strlen(strnew));
  free(strnew);
}