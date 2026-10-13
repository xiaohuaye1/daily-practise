#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printV(vector<int>v){
    vector<int>::iterator a=v.begin();
    while(a!=v.end() ){
        cout<<*a<<" ";
        a++;
    }
    cout<<""<<endl;
}
int main(){
    vector<int>v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    vector<int>v2;
    v2.assign(v1.begin(),v1.end());
    vector<int>v3;
    v3.assign(10,100);

    printV(v1);
    printV(v2);
    printV(v3);

}