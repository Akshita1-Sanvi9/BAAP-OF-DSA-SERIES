#include<iostream>
using namespace std;
int main(){
  int n,ld;
  cout<<"Enter the number: ";
  cin>>n;
 int pro=1;
 for(int i=1;i<=n;i++){
  pro=pro*i;
 }
 cout<<pro;
 return 0;
}