#include <stdio.h>
//链表可以连续也可以不连续，储存位置可以不在一起
//每一个节点不仅要储存内容还要储存指示后继元素信息
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next; //一个struct node类型的指针指向下一个node
}Node;


//初始化构建头节点
Node *initList(){//返回结构体指针类型的函数,因为需要返回头节点的地址
    Node *head=(Node *)malloc(sizeof(Node));//在堆内存申请一块Node大小的内存，让head指针指向它
    head->data=0;
    head->next=NULL;
    return head;
}

 //头插法，每一次都在头文件后面插入
 int inserthead(Node *L,int e){ //L就是头节点的地址
    Node *p=(Node *)malloc(sizeof(Node)); //创建新节点
    p->data=e;//新节点的数据域放入2
    p->next=L->next;//让p指向的NULL
    L->next=p;//让头节点的next指向p
    return 1;
 }


 //尾插法
 int inserttail(Node *L,int e){
    Node *nc=(Node *)malloc(sizeof(Node));//先分配一块新的结构体空间给新元素
    nc->next=NULL;
    nc->data=e;
    Node *p=L;
    while(p->next!=NULL){//找到最后一个元素
        p=p->next;
    }
    p->next=nc;
    return 1;
 }

 //在指定位置插入节点
 int sert(Node *L,int position,int e){
    Node *nc=(Node *)malloc(sizeof(Node)); 
    Node *p=L;
    nc->data=e;
    for(int i=1;i<position;i++){ //找到要插入位置
        p=p->next;
    }
    nc->next=p->next; //nc指向要插入到位置的下一个元素地址
    p->next=nc; //连接前面
    
    return 1;
 }


 //删除节点
 int delete(Node *L,int position){
    Node *p=L;
    for(int i=1;i<position;i++){
        p=p->next;
    }
    //此时p是要删除节点的前驱
    Node *q=p->next;//标记一下删除节点好一会free
    p->next=q->next;
    free(q);
    return 1;
 }
 


 //遍历
 void listNode(Node *L){
    int i=0;
    Node *p=L->next; //头节点后的第一个节点赋值给p
    while( p!=NULL){ //地址是否为空
        printf("%d ",p->data);
        p=p->next;//p是变量储存的是地址，p等于p里面next的下一个节点的地址
        i++;//顺带算一下有多少个元素;
    }
printf("\n");
printf("%d",i);
printf("\n");
 }



 //快慢指针找倒数第k个元素
int countdown(Node *L,int position){
    Node *p=L->next; //快指针
    Node *p2=L->next;//慢指针
    for(int i=0;i<position;i++){
        p=p->next;     //先让快指针领先慢指针position个位置
    }
    while(p!=NULL){
        p=p->next;
        p2=p2->next;
    }               //一起移动，快指针指向NULL时慢指针指向为position
    printf("last %d is %d \n",position,p2->data);
    return 1;
}




//反转链表
Node* reversetotally(Node*L){
    Node*first=NULL;   //让1指向NULL
    Node*second=L->next; //让2指向第一个节点
    Node*third=second->next; //让3指向第二个节点
    while(second!=NULL){
        third=second->next;   //3指向2的下一个
        second->next=first;  //2的下一个指向1
        first=second;       //1前移到2
        second=third;      //2前移到3
        
    }
    Node *newhead=initList(); //装个头
    newhead->next=first;
    return newhead;
}



//find中间节点(only in ji shu ge yuan su)

void deletemiddle(Node*L){
    Node*fast=L->next;  
    Node*slow=L;       
    while(fast->next!=NULL){
        fast=fast->next;   //快指针一次走2步
        fast=fast->next;
        slow=slow->next;    //慢指针一次走1步，所以最后快指针走完时慢指针走了总数的一半
    }
    slow=slow->next;
    printf("middle is %d",slow->data);
}




 //释放节点
  void release(Node *L){
    
    Node *p=L->next; 
    while( p!=NULL){ 
        Node *q=p;
        p=p->next;
        free(q);
    }
    L->next=NULL;
 }


 int main(){
    Node *k=initList();
    inserthead(k,10);
    inserthead(k,20);
    inserthead(k,30);
    inserttail(k,100);
    inserttail(k,200);
    inserttail(k,300);
    sert(k,3,999);
    sert(k,1,1000);
    listNode(k);
    delete(k,3);
    listNode(k);
    countdown(k,5);
    Node *reverse=reversetotally(k);
    listNode(reverse);
    deletemiddle(reverse);
   
   
    return 0;
 }

