#include <iostream>
using namespace std;
#include <string>
int main(){
    string str="pussy";
    //1\中括号访问
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl; 
    }
    //2、at访问
    str.at(1)='x';
        for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl; 
    }
    
}