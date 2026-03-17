#include<iostream>
using namespace std;


int main(){
 
 int arr[5];

 for(int i=0; i<5; i++){
    cin>>arr[i];
 }

 for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
 }
   int largest=arr[0];
   for( int i=0;i<5;i++){
    if(largest<arr[i]){
        largest=arr[i];
         
    }
   }
cout<<"the largest number is :"<<largest<<endl;
}