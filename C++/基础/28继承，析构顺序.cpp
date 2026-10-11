#include <iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Base构造"<<endl;
    }
    ~Base(){
        cout<<"Base析构"<<endl;
    }
};

class son:public Base{
    public:
    son(){
        cout<<"son构造"<<endl;
    }
    ~son(){
        cout<<"son析构"<<endl;
    }
};

int main(){
    son a;
    //先构造爸爸，再构造儿子，先结束儿子再结束爸爸
}