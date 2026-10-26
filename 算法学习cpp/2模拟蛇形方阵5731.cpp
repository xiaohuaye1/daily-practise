#include <iostream>
using namespace std;
int main(){
    //1:定义方向向量
    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
    //右下左上

    int n;
    cin>>n;
    int arr[n][n];
    int cnt=1;
    int x=0,y=0;
    int pos=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
        
    }
    while (cnt<=n*n){
        arr[x][y]=cnt;
        int a=x+dx[pos];
        int b=y+dy[pos];
        if(a<0||b<0||a>=n||b>=n||arr[a][b]!=0){
            pos=(pos+1)%4;
            a=x+dx[pos];
            b=y+dy[pos];
        }
        x=a,y=b;
        cnt++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d",arr[i][j]);
        }
        cout<<endl;
    }
    



}