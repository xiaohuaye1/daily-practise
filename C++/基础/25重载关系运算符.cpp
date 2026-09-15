#include <iostream>
using namespace std;
class person{
public:
    person(string name,int age){
        m_name=name;
        m_age=age;
    }
    string m_name;
    int m_age;
    //重载==
    bool operator==(person &p){
        if(this->m_age==p.m_age&&this->m_name==p.m_name){
            return true;
        }else{
            return false;
        }
    }
    bool operator!=(person &p){
        if(this->m_age!=p.m_age||this->m_name!=p.m_name){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    person p1("TOM",18);
    person p2("TOM",18);
    if(p1==p2){
        cout<<"same";
    }
}