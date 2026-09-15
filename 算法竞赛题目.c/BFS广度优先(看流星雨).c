#include <stdio.h>
typedef struct State{
    int x,y;
    int time;
}State;
typedef struct Queue{
    State data[10000];
    int front,rear;
}Queue;
void initQueue(Queue *T){
    T->front=0;
    T->rear=0;
}
void input(Queue *T,State S){
    T->data[T->rear]=S;
    T->rear++;
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
int destroyed[301][301];
int visited[301][301]={0};
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int bfs(){
    State s;
    Queue T;
    initQueue(&T);
    s.x=0;
    s.y=0;
    s.time=0;
    input(&T,s);
    visited[0][0]=1;
    while(!isempty(&T)){
        State cur;
        cur=output(&T);
        if(destroyed[cur.x][cur.y]==-1){
            return cur.time;
        }
        for(int i=0;i<4;i++){
            int nx=cur.x+dx[i];
            int ny=cur.y+dy[i];
            if(nx>=0&&ny>=0&&nx<301&&ny<301&&visited[nx][ny]!=1&&(destroyed[nx][ny]>cur.time+1||destroyed[nx][ny]==-1)){
                State next;
                next.x=nx;
                next.y=ny;
                next.time=cur.time+1;
                input(&T,next);
                visited[nx][ny]=1;
            }

        }
    }
    return -1;

}
int main(){
    int m;
    scanf("%d",&m);
    int x,y,time;
    for(int i=0;i<301;i++){
        for(int j=0;j<301;j++){
            destroyed[i][j]=-1;
        }
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&time);
        if (destroyed[x][y] == -1 || time < destroyed[x][y]) {
         destroyed[x][y] = time;
        }
        for(int j=0;j<4;j++){
            int nx=x+dx[j];
            int ny=y+dy[j];
            if(nx>=0&&ny>=0&&nx<301&&ny<301&&(destroyed[nx][ny]==-1||time<destroyed[nx][ny])){
             destroyed[nx][ny]=time;
            }
        }
    }
    int a=bfs();
    printf("%d",a);
}