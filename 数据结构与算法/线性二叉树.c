#include<stdio.h>
#include <stdlib.h>
typedef struct ThreadNode{
    char data;
    struct ThreadNode *lchild;
    struct ThreadNode *rchild;
    int ltag;                //ltag=0时指向左孩子，为1指向前驱
    int rtag;               //rtag=0时指向右孩子，为1指向后继
}ThreadNode;
char str[]="ABDH##I##EJ###CF##G##";
int idx=0;


//创建树
void createTree(ThreadNode **T){
    char ch;
    ch=str[idx++];
    if(ch=='#'){
        *T=NULL;
    }else{
        *T=(ThreadNode *)malloc(sizeof(ThreadNode));
        (*T)->data=ch;
        createTree(&(*T)->lchild);
        if((*T)->lchild!=NULL){   //如果不为NULL（无数据，为正经节点
            (*T)->ltag=0;           //ltag为0
        }
        createTree(&(*T)->rchild);
        if((*T)->rchild!=NULL){
            (*T)->rtag=0;
        }
    }
}

ThreadNode **pre;   //记录线索化时上一个访问的节点

//开始线索化
void inorderthreading( ThreadNode **head,ThreadNode **T){   //头节点指向第一个根
    *head=(ThreadNode *)malloc(sizeof(ThreadNode));
    (*head)->ltag=0;
    (*head)->rtag=1;   //头节点左边当孩子看右边当线索看
    (*head)->rchild=(*head);  //先让他指向自己
    (*head)->lchild=T;         //左边指向根
    pre=(*head); 

    threading(T);
    (*pre)->rchild=*head;
    (*pre)->rtag=1;
    (*head)->rchild=pre;//头节点右孩子指向最后一个节点


}

//线索化
void threading(ThreadNode **T){
    if(T!=NULL){
        threading((*T)->lchild);               //一直找左孩子，递归
        if((*T)->lchild==NULL){           //左孩子为空，那么左孩子变成线索
            (*T)->ltag=1;
            (*T)->lchild=pre;             //指向上一个节点
        }
        if((*pre)->rchild==NULL){
            (*pre)->rtag=1;
            (*pre)->rchild=(*T);

        }
        (*pre)=(*T);
        threading((*T)->rchild);

    }
}




//输出遍历
void inorder(ThreadNode **T){
    ThreadNode *curr;
    curr=(*T)->lchild;
    while(curr!=(*T)){
        while(curr->ltag==0){
            curr=curr->lchild;
        }
        printf("%c",curr->data);
        while(curr->rtag==1&&curr->rchild!=T){  //挖到底了直接用线索回溯了
            curr=curr->rchild;
            printf("%c",curr->data);

        }
        curr=curr->rchild;
    }
    printf("\n");
}

