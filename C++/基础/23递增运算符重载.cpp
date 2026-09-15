#include <iostream>
using namespace std;
class person{
public:
    int m_A;
};
person &operator++(person &p){
    p.m_A=p.m_A+1;
    return p;
};
person operator++(person &p,int){
    person temp=p;
    p.m_A++;
    return temp;
};
int main(){
    person p;
    p.m_A=10;
    ++(++p);
    cout<<p.m_A;
    p++;
    p++;
    cout<<p.m_A;
}