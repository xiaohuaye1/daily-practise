#include <stdio.h>
typedef struct State{
    int x,y;
    int step;
}State;
typedef struct Queue{
    State data[100000];
    int front,rear;
}Queue;
void input(Queue *T,State S){
    T->data[T->rear]=S;
    T->rear++;
}
void initqueue(Queue *T){
    T->front=0;
    T->rear=0;
}
int isempty(Queue *T){
    if(T->front==T->rear){
        return 1;
    }else{
        return 0;
    }
}
State output(Queue *T){
    State S;
    S=T->data[T->front];
    T->front++;
    return S;
}
int bfs(int startx,int starty,int N,int M,int matrix[][M]){
    Queue T;
    initqueue(&T);
    State S;
    S.x=startx;
    S.y=starty;
    input(&T,S);
    int visited[N][M];
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            visited[i][j]=0;
        }
    }
    visited[startx][starty]=1;
    matrix[startx][starty]=3;
    while(!isempty(&T)){
        State cur;
        cur=output(&T);
        if(matrix[cur.x][cur.y]==1){
            continue;
        }
        for(int i=0;i<4;i++){
            int nx=cur.x+dx[i];
            int ny=cur.y+dy[i];
            if(nx>=0&&ny>=0&&nx<N&&ny<M&&visited[nx][ny]!=1&&matrix[nx][ny]!=1){
                visited[nx][ny]=1;
                matrix[nx][ny]=3;
                State next;
                next.x=nx;
                next.y=ny;
                input(&T,next);
            }
        }
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    int matrix[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        if(matrix[0][i]==0){
            bfs(0,i,a,a,matrix);
        }
        if(matrix[a-1][i]==0){
            bfs(a-1,i,a,a,matrix);
        }
        if(matrix[i][0]==0){
            bfs(i,0,a,a,matrix);
        }
        if(matrix[i][a-1]==0){
            bfs(i,a-1,a,a,matrix);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(matrix[i][j]==3){
                matrix[i][j]=0;
            }else if(matrix[i][j]==0){
                matrix[i][j]=2;
            }
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

}