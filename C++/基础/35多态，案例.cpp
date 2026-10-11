#include <iostream>
using namespace std;
class drinking{
    public:
    virtual void boil()=0;
    virtual void drink()=0;
};
class coffee:public drinking{
    void boil(){
        cout<<"农夫山贼"<<endl;
    }
    void drink(){
        cout<<"小口喝"<<endl;
    }
};
class tea:public drinking{
    void boil(){
        cout<<"百岁山"<<endl;
    }
    void drink(){
        cout<<"大口喝"<<endl;
    }
};

void dowork(drinking &a){
    a.boil();
    a.drink();
}
int main(){
    coffee a;
    tea b;
    dowork(a);
    dowork(b);
}