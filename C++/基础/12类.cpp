#include <iostream>
using namespace std;
#define PI 3.14
class yuan{
    //访问权限

    //属性
    //行为
public:
int r;
double caculate(){
    return 2*PI*r;
}
};
int main(){
    yuan C1;
    C1.r=10;
    cout<<C1.caculate()<<endl;
}
