#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main(){
    queue <int> q1;


    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);


    while(!q1.empty()){
        //看对头
        cout<<q1.front()<<endl;
        //弹出
        q1.pop();
    }
    cout<<q1.size();
}