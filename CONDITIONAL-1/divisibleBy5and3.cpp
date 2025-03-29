#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  if(a%3==0 && a%5==0){
    cout<<"It is divisible by 3 and 5.";
  }
  else{
    cout<<"It is not divisible by 3 and 5.";
  }
}