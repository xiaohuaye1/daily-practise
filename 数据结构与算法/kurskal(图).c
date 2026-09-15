//找权值最小的边再练节点
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
typedef struct{
    int begin;
    int end;
    int weight;
}Edge;
void create(MAT *G){
    G->vertex_num=9;
    G->edge_num=15;
    G->vertex[0]='A';
    G->vertex[1]='B';
    G->vertex[2]='C';
    G->vertex[3]='D';
    G->vertex[4]='E';
    G->vertex[5]='F';
    G->vertex[6]='G';
    G->vertex[7]='H';
    G->vertex[8]='I';
     for(int i=0;i<G->vertex_num;i++){
        for(int j=0;j<G->vertex_num;j++){
            if(i==j){
                G->arc[i][j]=0;
            }else{
                G->arc[i][j]=MAX;
            }
        }
    }
    G->arc[0][1]=10;
    G->arc[0][5]=11;
    
    G->arc[1][2]=18;
    G->arc[1][6]=16;
    G->arc[1][8]=12;

    G->arc[2][3]=22;
    G->arc[2][8]=8;
    
    G->arc[3][4]=20;
    G->arc[3][6]=24;
    G->arc[3][7]=16;
    G->arc[3][8]=21;

    G->arc[4][5]=26;
    G->arc[4][7]=7;

    G->arc[5][6]=17;

    G->arc[6][7]=19;
    for(int i=0;i<G->vertex_num;i++){
        for(int j=0;j<G->vertex_num;j++){
            G->arc[j][i]=G->arc[i][j];
        }
    }

}
sortedges(edges, num){
    //交换函数
}
void kurskal(MAT *G){
    Edge edges[MAXEDGE];
    int k=0;
    for(int i=0;i<G->vertex_num;i++){
        for(int j=i+1;j<G->vertex_num;j++){
            if(G->arc[i][j]<MAX){
                edges[k].begin=i;
                edges[k].end=j;
                edges[k].weight=G->arc[i][j];
                k++;

            }
        }
    }
    sortedges(edges,G->edge_num);
    int parent[MAXSIZE];
    for(int i=0;i<MAXSIZE;i++){
        
    }
}
