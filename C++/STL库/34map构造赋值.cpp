#include <iostream>
#include <map>
using namespace std;
//map不能有重复key
//multimap能有重复key
void printa(map<int,int>&m){
    for(map<int,int>::iterator a=m.begin();a!=m.end();a++){
        cout<<"first="<<a->first<<"second="<<a->second<<" ";//map才能这样写,或者(*a).first
    }
    cout<<endl;
}
int main(){
    map<int,int> m;

    m.insert(pair<int,int>(10,10));
    m.insert(pair<int,int>(20,60));
    m.insert(pair<int,int>(30,80));
    m.insert(pair<int,int>(40,90));
    m.insert(pair<int,int>(50,30));
    printa(m);

    //拷贝构造
    map<int,int> m2(m);
    printa(m2);

    //赋值
    map<int,int> m3=m;
    printa(m3);
    
}