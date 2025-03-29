#include<iostream>
using namespace std;
int main(){
  int l,b,area,peri;
  cout<<"Enter length and breadth: ";
  cin>>l>>b;
  area=l*b;
  peri=2*(l+b);
  if(area>peri){
    cout<<"area is greater than peri ";
  }
  else{
    cout<<"peri is greater than area ";
  }
  return 0;
}