#include <iostream>
using namespace std;

class v{
    
 private :
 
 int health;
 
    
 public :
 
 char level;
  int gethealth(){
    return health;
  }
  void sethealth(int n){
    health=n;
  }

};

int main() {
 v vikas;
 
 vikas.sethealth(20);
 vikas.level='A';

 cout<<vikas.gethealth()<<endl;
 cout<<vikas.level<<endl;
}