#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  // for(int i=1;i<=2*n-1;i+=2){
  //   cout<<i<<endl;
  // }
  //2,7,12,17....
  int a=2;
  for(int i=1;i<=n;i++){
    cout<<a<<endl;
    a+=5;
  }
}