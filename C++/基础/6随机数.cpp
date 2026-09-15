#include <iostream>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));//随机数种子，变成真随机
    int a=rand()%100+1; //伪随机
    cout<<"请猜测"<<endl;
    int guess=0;
    cin>>guess;
    while(guess!=a){
        if(a>guess){
            cout<<"small"<<endl;
            cin>>guess;
            continue;

        }
        else if (a<guess)
        {
            cout<<"big"<<endl;
            cin>>guess;
            continue;
        }else{
            cout<<"dui"<<endl;
            break;
        }
        
    }
}