#include <iostream>
using namespace std;
#include <string>

int main(){
    string st1="bombaclat";

    //插入
    st1.insert(1,"wallahi");
    cout<<st1<<endl;

    //删除
    st1.erase(1,7);
    cout<<st1<<endl;

}