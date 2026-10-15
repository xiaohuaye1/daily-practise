#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    stack<int> s1;

    //入栈
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    while(s1.empty()==0){
        cout<<s1.top()<<endl;//看栈顶
        s1.pop();
    }
    cout<<s1.size()<<endl;
}