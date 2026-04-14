
#include <iostream>
using namespace std;
void output(int arr[]){
    for (int i=0;i<=5;++i){
     cout<<arr[i];
 }
}
void swapalternate(int arr[],int size){
   for (int i=0;i<6;i+=2){
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
   }
}
int main() {

int arr[]={1,2,3,4,5,6};
 
 swapalternate(arr,6);
 output(arr);
}