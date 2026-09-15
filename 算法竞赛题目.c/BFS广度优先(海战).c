#include <stdio.h>
typedef struct State{
    int x,y;
}State;
typedef struct Queue{
    int front;
    int rear;
    State data[100000];
}Queue;
void initqueue(Queue *T){
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

void bfs(int startx,int starty,int n,int m,char matrix[][m],int id,int copy[][m]){
    State S;
    Queue T;
    initqueue(&T);
    S.x=startx;
    S.y=starty;
    input(&T,S);
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
    while(!isempty(&T)){
        State cur;
        cur=output(&T);
        copy[cur.x][cur.y]=id;
        for(int i=0;i<4;i++){
            int nx=cur.x+dx[i];
            int ny=cur.y+dy[i];
            State next;
            if(nx>=0&&ny>=0&&nx<n&&ny<m&&matrix[nx][ny]=='#'){
                next.x=nx;
                next.y=ny;
                input(&T,next);
                matrix[nx][ny]='!';
                copy[nx][ny]=id;
            }
        }
    }
}

int ifbad(int n,int m,char matritx[][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(i-1>=0&&j+1<m){
            if(matritx[i][j]=='#'&&matritx[i-1][j+1]=='#'){
                if(i-1<0||j+1>m){
                    continue;
                }
                if(matritx[i-1][j]=='.'&&matritx[i][j+1]=='#'){
                    printf("Bad placement.");
                    return 0;
                }else if(matritx[i-1][j]=='#'&&matritx[i][j+1]=='.'){
                    printf("Bad placement.");
                    return 0;
                }
            }
        }
            if(i-1>=0&&j-1>=0){
            if(matritx[i][j]=='#'&&matritx[i-1][j-1]=='#'){
                if(i-1<0||j-1<0){
                    continue;
                }
                if(matritx[i-1][j]=='#'&&matritx[i][j-1]=='.'){
                    printf("Bad placement.");
                    return 0;
                }else if(matritx[i-1][j]=='.'&&matritx[i][j-1]=='#'){
                    printf("Bad placement.");
                    return 0;
                }
            }
        }
            
        }
    }
    return 1;
}


int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    char matrix[n][m];
    int copy[n][m];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c",&matrix[i][j]);
            copy[i][j]=0;
        }
    }
    if(ifbad(n,m,matrix)==0){
        return 0;

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]=='#'){
                sum++;
                bfs(i,j,n,m,matrix,sum,copy);
            }
        }
    }

    printf("There are %d ships.",sum);
    }
    