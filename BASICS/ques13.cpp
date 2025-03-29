#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int x1,x2,y1,y2;
  float dist;
  cout<<"Enter x1 and y1: ";
  cin>>x1>>y1;
  cout<<"Enter x2 and y2: ";
  cin>>x2>>y2;
  dist=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
  cout<<"distance is: "<<dist;
  return 0;
}