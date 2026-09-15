#include "1swap.h" //双引号代表自定义
#include <iostream>
using namespace std;
void swapk(int *a,int *b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}