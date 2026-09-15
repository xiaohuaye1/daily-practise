#include <stdio.h>
#define MAX 100
#include <stdlib.h>
typedef struct TreeNode{
    char data;
    struct TreeNode *lchild;
    struct TreeNode *rchild;

}TreeNode;

char str[] = "ABDH#K###E##CFI###G#J##";
int idx=0;
typedef struct {
    TreeNode* data[MAX];
    int front;      //队头（出数据
    int rear;       //队尾（进数据
}Queue;

//初始化
void queueinit(Queue *Q){
    Q->front=0;
    Q->rear=0;
}


//出队
TreeNode* output(Queue *Q){              
    if(Q->front==Q->rear){
        printf("empty\n");
        return 0;
    }
    TreeNode *e=Q->data[Q->front];
    Q->front++;
    return e;//返回出队的值
}

int isempty(Queue *Q){
    if(Q->front==Q->rear){
        return 1;
    }else{
        return 0;
    }
}
int queuesize(Queue *Q){
    int i=Q->front;
    int j=Q->rear;
    int sum=j-i;
    return sum;

}
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
int input(Queue*Q,TreeNode* e){
    if(Q->rear>=MAX){
        if(!queuefull(Q)){
            return 0;
        } 

    }
    Q->data[Q->rear]=e;
    Q->rear++;
    return 1;
}
///////////队列//////////////





//创造树
void creatTree(TreeNode **T){   //链表的头指针可以一直不动，而树的创建必须从根开始递归地修改每个结点的左右孩子指针。
    char ch=str[idx++];
    if(ch=='#'){
        *T=NULL;
        return;
    }else{
        *T=(TreeNode *)malloc(sizeof(TreeNode));   //T为二级指针，*T才是树的成员，箭头左边必须是结构体的指针
        (*T)->data=ch;
        creatTree(&(*T)->lchild);                      //lchild 为树指针，因为要传入二级指针所以再加一个地址
        creatTree(&(*T)->rchild);
    }
}
////深度计算/////
int depth(TreeNode *root){   //传入根节点的指针
    if(root==NULL){
        return 0;
    }
    int depths =0;
    Queue *p=(Queue *)malloc(sizeof(Queue));           //创建队列
    queueinit(p);  //初始化队列
    input(p,root); //根节点入5队
    while(!isempty(p)){
        int count=queuesize(p);
        while(count>0){
            TreeNode *curr;
            curr=output(p);
            if(curr->lchild!=NULL){
                input(p,curr->lchild);
            }
            if(curr->rchild!=NULL){
                input(p,curr->rchild);
            }
            count--;
        }
        depths++;
    }
return depths;

}

int main(){
    TreeNode *T;
    creatTree(&T);
    int a;
    a=depth(T);
    printf("%d",a);

}