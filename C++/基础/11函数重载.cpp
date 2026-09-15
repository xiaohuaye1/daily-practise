#include <iostream>
using namespace std;
//1：同一个作用域
//2：代码名相同
//3：顺序/类型/个数不同
void function(){
    cout<<"1"<<endl;
}
void function(int){
    cout<<"2"<<endl;
}
int main(){
    function();
    function(10);
}
//或者一个是double一个是int