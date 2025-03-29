#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  if(a>=100 && a<=999){
    cout<<"It is a three digit number.";
  }
  else{
    cout<<"It is not a three digit number.";
  }
}