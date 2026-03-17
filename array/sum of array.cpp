// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
  int arr[10]={1,2,3,4,55,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  int sum=0;
  for(int i=0;i<n;++i){
      sum= sum + arr[i];  //sum += arr[i]
  }
  cout<<sum;

    // cout << (n*(n+1))/2;
}