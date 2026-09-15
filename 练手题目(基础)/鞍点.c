#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int shuzu[a][b];
    for(int hang=0;hang<a;hang++){
        for(int lie=0;lie<b;lie++){
            scanf("%d",&shuzu[hang][lie]);
        }
    }

int min;
int max;
for(int hang=0;hang<a;hang++){
    int min_hang=shuzu[hang][0];
    min=0;
    max=hang;
    int if_found=1;
        for(int lie=0;lie<b;lie++){
            if(shuzu[hang][lie]<min_hang){
                min_hang=shuzu[hang][lie];
                min=lie;
            }
        }   
        for(int hang2=0;hang2<a;hang2++){
            if(shuzu[max][min]<=shuzu[hang2][min]&&hang2!=max){
                if_found=0;
                break;
            }
        }
        if(if_found==1){
            printf("屌不屌找到了是%d行 %d列",max,min);
        }
    }
return 0;
    
}