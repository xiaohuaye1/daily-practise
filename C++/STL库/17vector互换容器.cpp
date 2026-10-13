#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printv(vector<int> &v){
    for(vector<int>::iterator a=v.begin();a!=v.end();a++){
        cout<<*a;
    }
    cout<<endl;
}
int main(){

    vector<int> v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }

    vector<int> v2;
    for(int i=10;i<20;i++){
        v2.push_back(i);
    }

    //1swap

    v1.swap(v2);

    //实际用途：缩小空间
    vector<int> v4;
    for(int i=0;i<10000;i++){
        v4.push_back(i);
    }
    cout<<v4.capacity()<<endl;
    //重新指定大小
    v4.resize(3);
    cout<<v4.capacity()<<endl;
    cout<<v4.size()<<endl;//浪费了空间


    //收缩
    vector<int>(v4).swap(v4); //vector<int>(v4):匿名对象，创建了一个刚刚好的临时的vector x，后面把x和v4互换了
    cout<<v4.capacity()<<endl;
    cout<<v4.size()<<endl;//全部收缩为3


}