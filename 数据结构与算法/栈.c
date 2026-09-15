//特殊的线性表，只能在表尾插入、删除
//表头为栈底，表尾为栈顶
//后进先出的线性表
#include <stdio.h>
#define MAX 100
typedef struct {
    int data[MAX];
    int top;
}Stack;


//初始化
void intistack(Stack *s){
    s->top=-1;    //下标,没有元素时为-1
}



//判断是否为空
int isempty(Stack *s){
    if(s->top==-1){
        printf("kong\n");
        return 1;
    }else{
        return 0;
    }
}



//入栈、压栈
int push(Stack*s,int e){
    if(s->top>= MAX-1){   
       printf("no\n");
       return 0;
    }
    s->top++;
    s->data[s->top]=e;
    return 1;
}




//出栈
int out(Stack*s,int *e){    //用指针来吧栈里面的数据传出去，然后删除栈顶
    if(s->top==-1){
        printf("empty");
        return 0;
    }
    *e=s->data[s->top];
    s->top--;
    return 1;

}


int main(){
    Stack s;
    intistack(&s);
    isempty(&s);
    push(&s,12);
    push(&s,13);
    push(&s,14);
    push(&s,15);
    push(&s,16);
    int b;
    while(isempty(&s)!=1){
        out(&s,&b);
        printf("%d\n",b);
    }
    
}