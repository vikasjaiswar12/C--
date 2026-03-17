#include<iostream>
using namespace std;

class A{
public :
  void fuc1(){
    cout<<"inside fuction1"<<endl;
  }
};
class B:public A{
public :
  void fuc2(){
    cout<<"inside fuction2"<<endl;
  }
};
class c:public A{

public :
  void fuc3(){
    cout<<"inside fuction3"<<endl;
  }
};

int main(){
    A v;
    v.fuc1();

    B v1;
    v1.fuc1();
    v1.fuc2();

    c v2;
    v2.fuc1();
    v2.fuc3();
} 

 