#include <iostream>
#include <vector>
#include <string>
using namespace std;
class person{
    public:
    person(string a,int b){
        this->m_name=a;
        this->m_age=b;

    }
    string m_name;
    int m_age;
    
};
void test01(){
    vector<person>N;
    person p1("aaa",10);
    person p2("bbb",20);
    person p3("ccc",30);
    person p4("ddd",40);

    //加数据
    N.push_back(p1);
    N.push_back(p2);
    N.push_back(p3);
    N.push_back(p4);

    //遍历

    for(vector<person>::iterator bg=N.begin();bg!=N.end();bg++){
        cout<<bg->m_name<<bg->m_age<<endl;
    }

}

int main(){
    test01();
}