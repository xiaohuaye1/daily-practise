#include <stdio.h>
//n个数据元素的有限序列，并且是相同类型的
//存在唯一一个“第一个元素”（头节点）存在唯一一个最后（尾节点
#include <string.h>
#include <stdlib.h>


//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！//
//顺序表 : 号连续，空间存储连续
typedef struct {
    int length; //length保存顺序表有多少个数据
    int * name;
}book;
//搞一个结构体也就是声明顺序表



//顺序表初始化(传入一个指针，通过指针把顺序表length归零也就是初始化)
void initList(book *L){
  L->name=(int *)malloc(sizeof(int)*20);  
  L->length=0;
}



//增加内容 
int append(book *L, int e){
    if(L->length>=20){
        printf("存储name的已满");
        return 0;
    }
 L->name[L->length]=e;
 L->length++; //自增加
 return 1;
}

//遍历输出
void listElem(book *L){
    for(int i=0;i<L->length;i++){
        printf("%d  ",L->name[i]);
    }
    printf("\n");
}


//插入数据
int sertelem(book *L,int position,int e){
    if(position<=L->length){
        for(int i=L->length-1;i>=position-1;i--){
            L->name[i+1]=L->name[i];//所有向后挪一位
        }
        L->name[position-1]=e;
        L->length++;
        return 1;
    }
    return 0;
}



//删除数据
int delete(book *L,int position){
    if(position<=L->length){
        for(int i=position-1;i<=L->length-1;i++){
            L->name[i]=L->name[i+1];
        }
        L->length--;
        return 1;
    }
return 0;
}



//查找位置
int search(book *L,int e){
    for(int i=0;i<L->length;i++){
        if(e==L->name[i]){
            printf("找到了在%d个",i+1);
        }
    }
    return 1;
}







int main(){
    book list;//声明一个结构体变量
    initList(&list);//用刚刚写的函数清零
    append(&list,2);
    append(&list,3);
    append(&list,4);
    append(&list,5);
    append(&list,6);
    append(&list,7);
    sertelem(&list,3,999);
    delete(&list,7);
    listElem(&list);
    search(&list,3);
    free(list.name);
    return 0;
}
