#include <stdio.h>
#define MAX 25
long long matrix[MAX][MAX];
int main(){
    int endx,endy;
    scanf("%d %d",&endx,&endy);
    int mam,man;
    scanf("%d %d",&mam,&man);
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            matrix[i][j]=0;
        }

    }
    matrix[mam][man]=-1;
    int dx[8]={-1,-1,-2,-2,1,1,2,2};
    int dy[8]={2,-2,1,-1,2,-2,1,-1};
    for(int i=0;i<8;i++){
        int nx=mam+dx[i];
        int ny=man+dy[i];
        if(nx>=0&&ny>=0){
            matrix[nx][ny]=-1;
        }
    }
    matrix[0][0]=1;
for(int i=0;i<=endx;i++){
    for(int j=0;j<=endy;j++){
        if(matrix[i][j]==-1){
            continue;
        }
        if(i>=0&&i-1>=0&&matrix[i-1][j]!=-1){
            matrix[i][j]+=matrix[i-1][j];
        }
        if(j>=0&&j-1>=0&&matrix[i][j-1]!=-1){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
}
printf("%lld",matrix[endx][endy]);
} 