// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
    public :
     int weight;
     int age;
     
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class dog:public A{
    
};
int main() {
    
    dog d;
    d.speak();
}
