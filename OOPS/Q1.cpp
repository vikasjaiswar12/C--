#include <iostream>
using namespace std;
class employee{
  private:
  int age;
  char name[20];
  
  void getinfo(){
      cout<<"enter empolyee name"<<endl;
       cin.getline(name, 20);

      cout<<"enter empolyee age"<<endl;
      cin>>age;
  }
  
  public:
    void displayinfo(){
        getinfo();
        cout<<name<<endl;
        cout<<age<<endl;
    }
  
};
int main() {
 
 employee v;
 v.displayinfo();
 
 
 
}