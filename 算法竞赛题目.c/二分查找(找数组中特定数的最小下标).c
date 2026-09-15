#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int number[n];
    int question[m];
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    int answer[m];
    for(int i=0;i<m;i++){
        scanf("%d",&question[i]);
        answer[i]=-1;
    }
    int left=0,right=n-1;
    

    for(int i=0;i<m;i++){
        left=0,right=n-1;
        while(left<=right){
        int mid=(left+right)/2;
        if(question[i]>number[mid]){
            left=mid+1;
        }else if(question[i]<number[mid]){
            right=mid-1;
        }else if(question[i]==number[mid]){
            answer[i]=mid+1;
            right=mid-1;

        }
    }
}
for(int i=0;i<m;i++){
    printf("%d",answer[i]);
}
    
}