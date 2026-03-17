#include<iostream>
using namespace std;

int larr(int arr[],int size,int t){
    for(int i=0;i<size;i++){
        if(arr[i]==t){
            return 1;
        }
    }
    return -1;
}
int main(){
 int arr[]={2,3,4,5,6,7};

int t;
cin>>t;

cout<<larr(arr,6,t);

}