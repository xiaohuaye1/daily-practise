#include <iostream>
using namespace std;
//公共：内外都可以访问
//私有:内可以，外不可以！儿子不可以访问
//保护:内可以，外不可以！儿子可以访问
class person{
public:
    string name;
protected:
    string car;
private:
    int password;

public:
void func(int a){
    password=a;
    cout<<password<<endl;
}

};
int main(){
    person p1;
    p1.name="woc";
    // p1.car="nb";//NO!
    // p1.password="123";//NO!
    p1.func(14);
}