#include<iostream>
using namespace std;
int main(){
  int n,ld;
  cout<<"Enter the number: ";
  cin>>n;
 int sum=0;
 while(n>0){
  ld=n%10;
  sum+=ld;
  n/=10;
 }
 cout<<sum;
}