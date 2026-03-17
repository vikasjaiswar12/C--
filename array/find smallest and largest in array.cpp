#include<iostream>
#include <climits>
#include <algorithm>
using namespace std;


int main(){
 
 int num[]={11,22,33,44,45,66};
 int size=6;
 int n = sizeof(num)/sizeof(num[0]);

 int smallest=INT_MAX;  //min max
 int largest=INT_MIN;

 // int* small = min_element(num,num+n);
   //cout << *small << endl;

 for(int i=0;i<size;i++){
   if(smallest>num[i]){
        smallest=num[i] ;
    }
    //OR
    //smallest=min(num[i],smallest);
   // largest=max(num[i],largest);
 }
 cout<<"smallest ="<< smallest<<endl;
 cout<<"largest ="<<largest<<endl;

}