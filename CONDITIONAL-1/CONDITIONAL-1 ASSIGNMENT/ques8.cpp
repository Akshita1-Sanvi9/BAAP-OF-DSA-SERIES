#include<iostream>
using namespace std;
int main(){
  int x1,y1,x2,y2,x3,y3;
  float m1,m2;
  cout<<"Enter values of first coordinate: ";
  cin>>x1>>y1;
  cout<<"Enter values of second coordinate: ";
  cin>>x2>>y2;
  cout<<"Enter values of third coordinate: ";
  cin>>x3>>y3;
  m1=(y2-y1)/(x2-x1);
  m2=(y3-y2)/(x3-x2);
cout<<m1<<" "<<m2<<endl;
if(m1==m2)
  cout<<"collinear";
else
cout<<"non-collinear";
return 0;
}