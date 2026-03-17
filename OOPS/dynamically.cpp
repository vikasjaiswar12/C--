#include<iostream>
using namespace std;

//hero*h=new hero

class hello{
  private :
  char name='o';
  
   public :
    int num=10;
    char level='B';

    char getname(){
      return name;
    }
    void setname(char n){
      name=n;
    }
};

int main(){
 
hello A;
cout<<"name : "<<A.getname()<<endl;

//dynamically
hello *b=new hello;
cout<<"name : "<<(*b).getname()<<endl;
//OR
cout<<"name : "<<b->getname()<<endl;

}