#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<int>v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }


    if(v1.empty()){
        //empty就输出true
        cout<<"空"<<endl;
    }

    cout<<v1.capacity()<<endl;//容量，会比限在多，自动拓展
    cout<<v1.size()<<endl;


    //重新指定
    v1.resize(20,100);//扩展到20，多出来的用100填充
    vector<int>::iterator a=v1.begin();
    while(a!=v1.end()){
        cout<<*a<<"";
        a++;
    }
    cout<<""<<endl;


}