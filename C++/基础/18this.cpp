#include <iostream>
using namespace std;
class person{
    public:
    person (int age){
        this->age=age;
    }
    int age;
};
int main(){
    person p1(18);
    cout<<p1.age<<endl;
}