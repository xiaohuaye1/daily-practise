#include <iostream>
using namespace std;
int main(){
    //常量指针：指针指向可以改，指针指向的值不能改
    int a=20;
    const int *p=&a; //*p=20 不行 *p=&b 可以
    //指针常量：可以改值，不能改指向
    int b=30;
    int * const q=&b;//*q=100 可以，*q=&c不可以
    //终极常量，啥都不能改
    int c=100;
    const int * const k=&c;

}
