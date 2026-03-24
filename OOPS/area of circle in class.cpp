// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class area {
  private :
  float r,f=3.14;
   void getinfo(){
       cin>>r;
   }
   public:

   void display(){
      getinfo();
     cout<<f*r*r;  
   }
};
int main() {
   area v;
   v.display();
}