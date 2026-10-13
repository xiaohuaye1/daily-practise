#include <iostream>
using namespace std;
#include <string>
int main(){
    string st1="asdfghjkl";
    string st2=st1.substr(1,3);
    cout<<st2 <<endl;

    //实际操作
    string st3="2857360375@qq.com";
    int pos=st3.find("@");
    string st4=st3.substr(0,pos);
    cout<<st4<<endl;


}