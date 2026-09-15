#include<stdio.h>
#include <stdlib.h>
typedef char VertexType;
typedef int EdgeType;
#define MAXSIZE 100
#define MAX 0x7fffffff
#define MAXEDGE 100
typedef struct{
    VertexType vertex[MAXSIZE];
    EdgeType arc[MAXSIZE][MAXSIZE];
    int vertex_num;
    int edge_num;
}MAT;
void create(MAT *G){
    G->vertex_num=9;
    G->edge_num=16;
    for(int i=0;i<G->vertex_num;i++){
        G->vertex[i]=i;
    }
    for(int i=0;i<G->vertex_num;i++){
        for(int j=0;j<G->vertex_num;j++){
            if(i==j){
                G->arc[i][j]=0;
            }
            else{
                G->arc[i][j]=MAX; 
            }
        }
    }
    G->arc[0][1]=1;
    G->arc[0][2]=5;

    G->arc[1][2]=3;
    G->arc[1][3]=7;
    G->arc[1][4]=5;

    G->arc[2][4]=1;
    G->arc[2][5]=7;

    G->arc[3][4]=2;
    G->arc[3][6]=3;

    G->arc[4][5]=3;
    G->arc[4][6]=6;
    G->arc[4][7]=9;

    G->arc[5][7]=5;

    G->arc[6][7]=2;
    G->arc[6][8]=7;

    G->arc[7][8]=4;

    for(int i=0;i<G->vertex_num;i++){
        for(int j=i+1;j<G->vertex_num;j++){
            G->arc[j][i]=G->arc[i][j];
        }
    }
    
}

void floyd(MAT G){
    int path[MAXSIZE][MAXSIZE];
    int distance[MAXSIZE][MAXSIZE];
    for(int i=0;i<G.vertex_num;i++){
        for(int j=0;j<G.vertex_num;j++){
            distance[i][j]=G.arc[i][j];
            path[i][j]=j;
        }
    }
    for(int i=0;i<G.vertex_num;i++){
        for(int j=0;j<G.vertex_num;j++){
            for(int k=0;k<G.vertex_num;k++){
                if(distance[j][k]>distance[j][i]+distance[i][k]){
                    distance[j][k]=distance[j][i]+distance[i][k];
                    path[j][k]=path[j][i];
                }
        }
        }
    }
    int k=0;
    for(int i=0;i<G.vertex_num;i++){
        for(int j=i+1;j<G.vertex_num;j++){
            printf("V%d->V%d weight:%d",i,j,distance[i][j]);
            k=path[i][j];
            printf("path V%d",i);
            while(k!=j){
                printf("->V%d",k);
                k=path[k][j];
            }
            printf("->V%d\n",j);

        }
        printf("\n");
    }

}
int main(){
    MAT G;
    create(&G);
    floyd(G);
}