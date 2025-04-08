#include<iostream>
using namespace std;
int main(){
  // int x=5;
  // int y=6;
  // int* a=&x;
  // int* b=&y;
  // cout<<*a + *b;

  //user input using pointers
  int x,y;
  int* a =&x;
  int* b =&y;
  cout<<"Enter the first number: ";
  cin>>*a;
  cout<<"Enter the second number: ";
  cin>>*b;
  cout<<*a+*b;
}