#include <stdio.h>
typedef struct  State{
    int x,y;
    int step;
}State;
typedef struct Queue{
    int front,rear;
    State data[1000];
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
int mark[1000][1000];    // 记录每个点属于哪个连通块
int size[1000000];       // 记录每个连通块的大小  
int id = 0;              // 连通块编号
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int bfs(int startx,int starty,int n,char matrix[][n]){
    if(mark[startx][starty]!=-1){
        int bangpai_id = mark[startx][starty];
        return size[bangpai_id];
    }
    State S;
    Queue T;
    int gezi=1;
    S.x=startx;
    S.y=starty;
    initQueue(&T);
    input(&T,S);
    int new_bangpai_id = id; 
    mark[startx][starty] = new_bangpai_id;
    id++;
    while(!isempty(&T)){
        State cur;
        cur=output(&T);
        for(int i=0;i<4;i++){
            int nx=cur.x+dx[i];
            int ny=cur.y+dy[i];
            if(nx>=0&&ny>=0&&nx<n&&ny<n&&matrix[nx][ny]!=matrix[cur.x][cur.y]&&mark[nx][ny] == -1){
                State next;
                next.x=nx;
                next.y=ny;
                input(&T,next);
                gezi++;
                mark[nx][ny] = new_bangpai_id; 
            }
        }
    }
    size[new_bangpai_id] = gezi;
    return gezi;
}




int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    char matrix[n][n];
    for(int i=0;i<n;i++){
        scanf("%s", matrix[i]);
    }
    int test[m][2];
    int answer[m];
    for(int i=0;i<m;i++){
        scanf("%d %d",&test[i][0],&test[i][1]);
    }
   for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            mark[i][j] = -1;  // -1表示"无帮派"
        }
    }
    for(int i=0;i<m;i++){
        if(mark[test[i][0]-1][test[i][1]-1]==-1){
            answer[i]=bfs(test[i][0]-1,test[i][1]-1,n,matrix);
        }else{
            answer[i]=size[mark[test[i][0]-1][test[i][1]-1]];
        }
    }
     for(int i=0;i<m;i++){
        printf("%d\n",answer[i]);
    }    
}