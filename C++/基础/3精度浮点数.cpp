#include <iostream>
using namespace std;
int main(){
    float a=3.14f;//要加个f声明为float，否则默认double
    double b=3.14;//double不用
    long double c=3.14L;//longdouble要加大小写L;
    cout <<a<<b<<c<<endl;
    //科学计数法//
    int d=3e2;
    cout<<d<<endl;
    float e=3e-3;
    cout <<e<<endl;
    return 0;
}