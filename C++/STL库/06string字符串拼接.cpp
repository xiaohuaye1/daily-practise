#include <iostream>
using namespace std;
#include <string>
int main(){
    ///1
    string st1;
    st1="我";
    st1+="埃卢冠";
    cout<<st1<<endl;

    //2字符串间的拼接
    string st2="111";
    st1+=st2;
    cout<<st1<<endl;

    //3append
    string st3="I";
    st3.append("love jerkoff");
    st3.append("123456",3);
    st3.append(st1);
    st3.append(st1,0,3);
    cout<<st3<<endl;

}