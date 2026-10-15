 #include <iostream>
#include <map>
using namespace std;
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
    


    map<int,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,60));
    m1.insert(pair<int,int>(3,80));

    m.swap(m1);

    //其他size/empty等和前面都一样
}