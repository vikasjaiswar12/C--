// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

int n=5;
int num=2;
 while(num<n){
     if(n%num==0){
         cout<<"not prime ";
         return 0;
     }
   num++;
 }
 cout<<"prime";

}