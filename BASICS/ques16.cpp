#include<iostream>
using namespace std;
int main(){
  int x1,x2,y1,y2;
  float sum;
  cout<<"Enter x1 and y1: ";
  cin>>x1>>y1;
  cout<<"Enter x2 and y2: ";
  cin>>x2>>y2;
  sum=(x1*y2 + x2*y1)/(y1*y2);
  cout<<"sum: "<<sum;
  return 0;
}