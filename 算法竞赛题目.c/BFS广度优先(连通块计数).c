#include <stdio.h>
#include <stdlib.h>
typedef struct neigh{
    struct  neigh *next;
    int to;
}neigh;
typedef struct Queue{
    int data[100005];
    int front,rear;
}Queue;

void initqueue(Queue *T){
    T->front=0;
    T->rear=0;
}
void input(Queue *T,int e){
    T->data[T->rear]=e;
    T->rear++;
}
int output(Queue *T){
    int e;
    e=T->data[T->front];
    T->front++;
    return e;
}

int isempty(Queue *T){
    if(T->front==T->rear){
        return 1;
    }else{
        return 0;
    }
}


neigh* adj[100005]={NULL};    
int addedge(int a,int b){
    
    neigh *heada=(neigh *)malloc(sizeof(neigh));
    heada->to=b;
    heada->next=adj[a];
    adj[a]=heada;
    neigh *headb=(neigh *)malloc(sizeof(neigh));
    headb->to=a;
    headb->next=adj[b];
    adj[b]=headb;
    return 1;
}
int visited[100005]={0};
void BFS(int start){
    Queue Q;
    initqueue(&Q);
    input(&Q,start);
    visited[start]=1;
    while(!isempty(&Q)){
        int u=output(&Q);
        neigh *cur=adj[u];
        while(cur!=NULL){
            if(visited[cur->to]!=1){
                input(&Q,cur->to);
                visited[cur->to]=1;
            }
            cur=cur->next;
        }
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a=0,b=0;
    for(int i=1;i<=n;i++){
        visited[i]=0;
        adj[i]=NULL;
        
        
    }
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        
        addedge(a,b);
    }
    int bian=0;
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            BFS(i);
            bian++;
        }
    }
   
    printf("%d",bian);
}