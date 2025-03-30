#include<iostream>
using namespace std;
int main(){
//1,2,4,8,16,32....
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  
  int a=1;
  for(int i=1;i<=n;i++){
    cout<<a<<endl;
    a*=2;
  }
}