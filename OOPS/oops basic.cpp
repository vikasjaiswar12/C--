#include<iostream>
using namespace std;
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
 
  hello vikas;
  cout<<"name :"<<vikas.getname()<<endl;
  cout<<"size : "<<sizeof(vikas)<<endl;
  cout<<vikas.num<<endl;
  cout<<vikas.level<<endl;
 
}