#include <iostream>
using namespace std;
//成员函数无法实现
class person{
public:
    int m_A;
    int m_B;
};
ostream& operator<<(ostream  &cout,person &p){
    cout<<p.m_A<<"and"<<p.m_B<<endl;
}
int main(){
    person p1;
    p1.m_A=10;
    p1.m_B=20;
    cout<<p1;
}