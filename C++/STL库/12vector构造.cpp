#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printV(vector<int>v){
    vector<int>::iterator a=v.begin();
    while(a!=v.end() ){
        cout<<*a;
        a++;
    }
    cout<<""<<endl;
}
int main(){

    //1
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    //2区间
    vector<int>v2(v1.begin(),v1.end());

    //3n个N
    vector<int>v3(10,100);//10个100

    //拷贝
    vector<int>v4(v3);

    printV(v1);
    printV(v2);
    printV(v3);
    printV(v4);



}