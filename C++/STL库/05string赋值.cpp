#include <iostream>
using namespace std;
#include <string>
void test01(){
    string st1;
    //1
    st1="hellp";
    cout<<st1<<endl;
    //2
    string st2;
    st2.assign("c++");
    cout<<st2<<endl;
    //3
    string st3;
    st3.assign("1234567890",6);
    cout<<st3<<endl;

    //4
    string st4;
    st4.assign(10,'w');
    cout<<st4<<endl;


    //一共两种，一个等于一个assign

}

int main(){
    test01();
}