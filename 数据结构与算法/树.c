//节点：树中的一个单元
//节点的度：节点拥有的子树
//树的度：树内节点度的最大值
//叶子:节点度为0的节点/终端节点
//非终端节点：度不为0
//双亲和孩子：一个节点是他子树的双亲，子树是他的孩子
//二叉树：每一个节点度最多为2
#include <stdio.h>
#include <stdlib.h>
typedef struct TreeNode{
    char data;
    struct TreeNode *lchild;
    struct TreeNode *rchild;

}TreeNode;

char str[] = "AB##C##";
int idx=0;

//输出遍历树
void preorder(TreeNode *T){
    if(T==NULL){   //判断此节点是否为空，不为空就递归
        return;
    }
    printf("%c",T->data);
    preorder(T->lchild);  //达到效果是从上到下从左到右输出   //中序输出就是把printf换到中间，实现的是从左到右从下到上输出 //后序遍历同理printf在下面
    preorder(T->rchild);

}

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
int main(){
    TreeNode *T;
    creatTree(&T);
    preorder(T);

}