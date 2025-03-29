#include<iostream>
using namespace std;
int main(){
  int r;
  cout<<"Enter the radius: ";
  cin>>r;
  float area=3.14*r*r;
  float cir=2*3.14*r;

  if(area>cir){
    cout<<"Yes,area is greater than circumference!";
  }
  else if(area==cir){
    cout<<"Both area and circumference are equal";
  }
  else{
    cout<<"No,area is not greater than circumference!";
  }
  return 0;
}