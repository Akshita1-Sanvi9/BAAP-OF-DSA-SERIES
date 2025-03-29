#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter the character: ";
  cin>>ch;
  int a =(int)ch;
  if(a>=65 && a<=90)
  {
   a = a + 32;
   cout<< (char)a;
  }
  else if(a>=97 && a<=122)
  {
   a = a - 32;
   cout<< (char)a;
  }
  else exit(0);
  return 0;
}