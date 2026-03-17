#include<iostream>
using namespace std;

class human{
private :
int color;

public:
  int height;
  int weight;
  int age;

  public :
   int getage(){
    return age;
   }
   void setage(int n){
    age=n;
   }
   int getcolor(){
      return color; 
   }
   void setcolor(int m){
       color=m;
   }
};
class male:public human{
  public:
  int maleage;

};
int main(){

    male vikas;
    vikas.height=19;
    vikas.weight=70;
    cout<<vikas.getage()<<endl;
    cout<<vikas.height<<endl;
    cout<<vikas.weight<<endl;
    vikas.setcolor(20);
    cout<<vikas.getcolor()<<endl;
//human vikas;
//vikas.setage(20);
//cout<<vikas.getage();

}