#include <stdio.h>
int main(){
    FILE *p;                                                                 //定义一个file指针
    char *myfile ="C:\\Users\\Lenovo\\Desktop\\hh.txt";                       //一个文件地址
    p=fopen(myfile,"a+");                                                    //fopen 打开文件，r+为即可写又可读（覆盖），“a+”为接着写
    if(p==NULL){                                                             //在txt修改后要按ctrl ＋s保存到磁盘
        printf("error");
    }else{
        char c;
        printf("succes\n");
            while((c=getchar())!='#'){
        fputc(c,p);  
    
    }
    fseek(p,0,SEEK_SET);                                                   //写入后文件指针在末尾，继续读会直接读到EOF这里要重置指针
        while((c=fgetc(p))!=EOF){                                          //从文件读取字符fgetc,fputc写入
        putchar(c);                                                         
    }

    putchar('\n');
    }
    
    fclose(p); //完成   
    return 0;
}