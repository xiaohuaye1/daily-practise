//集合，所有输入自动排序
#include <iostream>
#include <set>
using namespace std;
void printv(set<int> &v){
    for(set<int>::iterator a=v.begin();a!=v.end();a++){
        cout<<*a<<" ";
    }
    cout<<endl;
}
int main(){
    set<int>s1;


    //插入：只有insert
    s1.insert(30);
    s1.insert(3);
    s1.insert(10);
    s1.insert(40);
    s1.insert(21);
    s1.insert(19);

    //不允许插入重复值
    printv(s1);

}
