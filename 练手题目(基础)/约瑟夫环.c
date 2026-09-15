#include <stdio.h>
int main(){
  int a[8]={1,1,1,1,1,1,1,1};
  int index=0,baoshu=0,count=8;

  while(count!=1){
        
      
      if(a[index]==1){
        baoshu++;
      }
       if(baoshu==3){
          a[index]=0;
          baoshu=0;
          count--;
          
      }   
      index++;
      if(index>=8){
        index=0; 
      }
      
  }
  for(int i=0;i<8;i++){
    printf("%d",a[i]);
  }

}