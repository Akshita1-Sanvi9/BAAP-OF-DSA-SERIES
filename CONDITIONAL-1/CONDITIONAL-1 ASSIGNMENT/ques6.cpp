#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter marks of students A,B and C: ";
  cin>>a>>b>>c;
  if((a<b) && (a<c)){
    cout<<"A scored the lowest.";
  }
  else if((b<a) && (b<c)){
    cout<<"B scored the lowest.";
  }
  else{
    cout<<"C scored the lowest.";
  }
  return 0;
}