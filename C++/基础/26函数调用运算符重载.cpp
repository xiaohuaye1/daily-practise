#include <iostream>
using namespace std;
//()也可以重载
//称为仿函数
class myprint{
public:
    void operator()(string text){
        cout<<text<<endl;
    }
    
};
int main(){
    myprint p;
    p("asdfjhk");
}