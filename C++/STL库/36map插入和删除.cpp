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
    m.insert(make_pair(2,20));
    m.insert(map<int,int>::value_type(3,30));
    m[4]=50;
    printa(m);
    cout<<m[2]<<endl;

    //删除
    m.erase(m.begin());
    m.erase(3);//key
    m.clear();

}