 #include <iostream>
 using namespace std;
 class animal{
    public:
    virtual void speak(){
        cout<<"动物在说话"<<endl;
    }
 };
 class cat:public animal{
    public:
    void speak(){
        cout<<"meow"<<endl;
    }
 };
 class dog:public animal{
    public:
    void speak(){
        cout<<"wow"<<endl;
    }
 };
  void dospeak(animal &a){//引用
    a.speak();
  }
  //加了 virtual，编译器就不看它声明的类型（animal），而是看它实际指向的对象cat/dog

int main(){
    cat a;
    dog b;
    dospeak(a);
    dospeak(b);
}
//得有一个继承关系
//子类重写父类的虚函数
//父类指针/引用指向子类对象