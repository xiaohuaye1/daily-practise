#include <iostream>
using namespace std;
int main(){

    int *p=new int (11);//返回的地址
    cout<<*p<<endl;
    delete p; //释放

    int *q=new int[10];//连续十个元素
    for(int i=0;i<10;i++){
        q[i]=i;
    }
    for(int i=0;i<10;i++){
        cout<<q[i]<<endl;
    }
    delete[] q; //加个【】
}