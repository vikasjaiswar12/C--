// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class complex { 
private: 
    float  real; 
    float imag; 
 
public:
 complex(float a=0.0,float b=0.0){
     real=a;
     imag=b;
 }
 complex add(complex&a,complex&b){
     complex result;
      result.real=a.real+b.real;
     result .imag=a.imag+b.imag;
     return result;
 }
 void display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
 }
};
int main() {
   
   complex vikas(2,3);
   complex aman(4,5);
   
   complex sum;
   sum=sum.add(vikas,aman);
   
   sum.display();
   
}