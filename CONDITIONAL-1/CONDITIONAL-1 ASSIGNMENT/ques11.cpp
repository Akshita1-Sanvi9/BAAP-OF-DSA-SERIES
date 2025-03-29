#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int h,m;
  cout<<"Enter hours and mins: ";
  cin>>h>>m;
  int h_a = h*30;
  int m_a = m*6;

  int diff = abs(h_a - m_a);
  if(diff >180) 
  diff = 360-diff;
  
  cout<<diff;

  return 0;

}