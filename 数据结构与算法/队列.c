//先进先出，也是特殊的线性表
//一端插入，一端输出
//输入顺序为12345，那么输出顺序也为12345
#include <stdio.h>
#define MAX 100
#include <stdlib.h>
///顺序结构///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct {
    int data[MAX];
    int front;      //队头（出数据
    int rear;       //队尾（进数据
}Queue;


//初始化
void queueinit(Queue *Q){
    Q->front=0;
    Q->rear=0;
}



//出队
int output(Queue *Q){              
    if(Q->front==Q->rear){
        printf("empty\n");
        return 0;
    }
    int e=Q->data[Q->front];
    Q->front++;
    return e;//返回出队的值
}




//挪表,补齐栈前部分空的内容
int queuefull(Queue *Q){
    if(Q->front>0){  //如果第一个不位于0的位置，说明前面是空的;
        int step=Q->front;
        for(int i=Q->front;i<Q->rear;i++){
            Q->data[i-step]=Q->data[i];
        }
        Q->front=0;//循环结束，front回到0的位置
        Q->rear=Q->rear-step;
        return 1;
    }else{
        printf("真的满了");
        return 0;
    }
}


//入队
//有可能前面出了几个但后面是满的（因为先进先出）所以有时候rear指向最后了但前面是有位置的，因此判断前面的要往前挪
int input(Queue*Q,int e){
    if(Q->rear>=MAX){
        if(!queuefull(Q)){
            return 0;
        } //如果返回的是非1即0，那么！0=1，进入if,return0;

    }
    Q->data[Q->rear]=e;
    Q->rear++;
    return 1;
}





int main(){
    Queue *L=(Queue *)malloc(sizeof(Queue));
    queueinit(L);
    input(L,20);
    input(L,30);
    int a=output(L);
    printf("%d",a);
}