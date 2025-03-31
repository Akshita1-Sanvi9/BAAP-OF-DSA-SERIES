#include<iostream>
using namespace std;
int main(){
  int n,ld;
  cout<<"Enter the number: ";
  cin>>n;
 int rev=0;
 while(n>0){
  ld=n%10;
  rev=rev*10+ld;
  n/=10;
 }
 cout<<"Reversed is: "<<rev;
 return 0;
}