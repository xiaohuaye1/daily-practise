//可以但不建议
#include <iostream>
using namespace std;
class base1{
    public:
    int a=1;
};
class base2{
    public:
    int b=2;
};
class base3{
    public:
    int c=3;
};
class son:public base1,public base2,public base3{
    public:
    
};
int main(){
    son a;
    cout<<a.a<<a.b<<a.c<<endl;
}
