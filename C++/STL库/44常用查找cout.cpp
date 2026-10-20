#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class person{
    public:
    person(string a,int b){
        this->m_name=a;
        this->m_age=b;

    }
    string m_name;
    int m_age;
    bool operator==(const person &p){
        if(this->m_age==p.m_age){
            return true;
        }else{
            return false;
        }
    }
    
};
class G20{
    public:
    bool operator()(const person &p){
        return p.m_age>20;
    }

};
int main(){
    vector<person>N;
    person p1("aaa",10);
    person p2("bbb",20);
    person p3("ccc",30);
    person p4("ddd",10);

    //加数据
    N.push_back(p1);
    N.push_back(p2);
    N.push_back(p3);
    N.push_back(p4);
    int num=count(N.begin(),N.end(),p4);//统计个数
    cout<<num<<endl;
    int num1=count_if(N.begin(),N.end(),G20());//大于20的个数
    cout<<num1;
}