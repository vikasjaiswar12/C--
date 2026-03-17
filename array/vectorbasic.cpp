#include<iostream>
#include <vector>
using namespace std;


int main(){
 
 vector<int>vec;

 cout<<vec.size()<<endl;
 //push_back
 vec.push_back(45);
 vec.push_back(48);
 vec.push_back(55);

//pop_back
 vec.pop_back();

 //front
 cout<<vec.back()<<endl;


//normal loop
 for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
 }

 cout<<endl;
 //advanced loop
 for(int i:vec){
    cout<<i<<" ";
 }


}