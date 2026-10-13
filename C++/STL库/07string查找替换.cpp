#include <iostream>
using namespace std;
#include <string>
int main(){
    //1照（从左往右)
    string st1="asdfghjkl";
    int pos=st1.find("gh");
    if(pos==-1){
        cout<<"no"<<endl;
    }else{
        cout<<"yes"<<endl;
    }
    //2照(从右往左)
    string st2="asdfghjkl";
    int pos2=st2.rfind("gh");
    if(pos2==-1){
        cout<<"no"<<endl;
    }else{
        cout<<"yes"<<endl;
    }



    //替换
    string st4="qwertyuiop";
    st4.replace(1,3,"mmmmmmmmmmmmm");//1-3里替换
    cout<<st4<<endl;

    
}
