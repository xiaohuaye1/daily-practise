#include <iostream>
using namespace std;
class building{
    friend void gay(building *a);//可以访问building私有成员
    public:
    building(){
        m_sittingroom="客厅";
        m_bedroom="卧室";

    }
    public:
    string m_sittingroom;
    private:
    string m_bedroom;
};
void gay(building *a){
    cout<<"quanju"<<a->m_sittingroom<<endl;
    cout<<"私有"<<a->m_sittingroom<<endl;
}
int main(){
    building a;
    gay(&a);
}