#include<iostream>
using namespace std;
int main(){
  float p,r,t,si;
  cout<<"Enter principal,rate,time simultaneously: ";
  cin>>p>>r>>t;
  si=(p*r*t)/100;
  cout<<"The simple interest is: "<<si;
  return 0;
}