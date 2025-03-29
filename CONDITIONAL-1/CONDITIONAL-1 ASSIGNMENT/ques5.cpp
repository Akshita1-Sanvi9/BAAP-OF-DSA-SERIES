#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter sides of triangle: ";
  cin>>a>>b>>c;
  if(a+b>c && b+c>a && c+a>b){
  if((a==b) && (b==c)){
    cout<<"equilateral triangle";
  }
  else if((a!=b) &&(b!=c) && (c!=a)){
    cout<<"scalene triangle";
  }
  else{
    cout<<"isosceles triangle";
  }
}
else{
  cout<<"not a triangle";
}
 return 0;
}