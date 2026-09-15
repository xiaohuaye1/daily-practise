#include <stdio.h>
typedef  struct State{
    int x,y;
    int step;
}State;

typedef struct Queue{
    State data[100000];
    int front;
    int rear;
}Queue;

void input(Queue *T,State S){
    T->data[T->rear]=S;
    T->rear++;
}
void initQueue(Queue *T){
    T->front=0;
    T->rear=0;
}
State output(Queue *T){
    State S;
    S=T->data[T->front];
    T->front++;
    return S;
}
int isempty(Queue *T){
    if(T->front==T->rear){
        return 1;
        
    }else{
        return 0;
    }
}
int BFS(int startx,int starty,int hang,int lie,int dis[][lie]){
    Queue T;
    State S;
    initQueue(&T);
    S.x=startx;
    S.y=starty;
    S.step=0;
    input(&T,S);
    int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
    int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
    int visited[hang][lie];
    for(int i=0;i<hang;i++){
        for(int j=0;j<lie;j++){
            visited[i][j]=0;
            dis[i][j]=-1;
        }
    }
    dis[startx][starty]=0;
    visited[startx][starty]=1;
    while(!isempty(&T)){
        State cur;
        cur=output(&T);
        for(int i=0;i<8;i++){
            int nx=cur.x+dx[i];
            int ny=cur.y+dy[i];
            if(nx>=0&&ny>=0&&visited[nx][ny]==0&&nx<hang&&ny<lie){
                dis[nx][ny]=cur.step+1;
                visited[nx][ny]=1;
                State next;
                next.step=cur.step+1;
                next.x=nx;
                next.y=ny;
                input(&T,next);
            }
        }
        
    }
    return -1;

}

int main(){
    int n,m,x,y;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    int matrix[n][m];
  BFS(x-1,y-1,n,m,matrix);
    for(int hang=0;hang<n;hang++){
        for(int lie=0;lie<m;lie++){
            printf("%d ",matrix[hang][lie]);
        }
        printf("\n");
    }

}