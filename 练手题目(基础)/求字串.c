#include <stdio.h>
#include <string.h>
int compare(char* a,char* b){
    int sum=0;
    for(int i=0;i<strlen(a);i++ ){
            int j=i;
            int temp=0;
            while(b[temp]==a[i]){
                temp++;
                i++;
                if(temp==(int)strlen(b)){
                    sum++;
                    temp =0;
                    break;
                }
            }
        i=j;
    }
    return sum;
}
int main(){
    char a[20]="123123836177123";
    char b[20]="123";
    int sum=compare(a,b);
    printf("%d",sum);
}