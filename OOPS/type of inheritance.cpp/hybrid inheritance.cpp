#include<iostream>
using namespace std;

class A{
  public :
    void fuc(){
        cout<<" i am A"<<endl;
    }
};
class D{
   public :
    void fuc(){
        cout<<" iam D"<<endl;
    }
};
class B{
 public :
  void fuc(){
    cout<<" i am B";
  }
};
class C:public A,public B{
  
};
int main(){

 C vikas;
 vikas.A::fuc();
 vikas.B::fuc();

}