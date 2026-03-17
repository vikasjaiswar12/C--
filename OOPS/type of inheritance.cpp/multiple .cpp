#include <iostream>
using namespace std;
class A{
    public :
     int weight;
     int age;
     
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class human{
   public :
    string color;
   
    public :
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class both:public A,public human{

};
int main() {
    
    both n;
    n.speak();
    n.bark();

}