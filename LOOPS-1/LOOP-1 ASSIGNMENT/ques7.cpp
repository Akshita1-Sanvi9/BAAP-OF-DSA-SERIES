#include<iostream>
using namespace std;
int main(){
  int n,sum=0;
  cout<<"Enter the value of n: ";
  cin>>n;
 // cout<<"Sum: "<<n*(n+1)/2;
  for(int i=n;i>=1;i--){
    sum=sum+i;}
    cout<<"sum is "<<sum;
    return 0;
  }