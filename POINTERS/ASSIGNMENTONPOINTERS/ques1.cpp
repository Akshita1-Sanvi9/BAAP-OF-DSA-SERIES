#include<iostream>
using namespace std;
int main(){
  
  //user input using pointers
  int x,y;
  int* a =&x;
  int* b =&y;
  cout<<"Enter the first number: ";
  cin>>*a;
  cout<<"Enter the second number: ";
  cin>>*b;
  cout<<"Product is "<<*a * *b;
}