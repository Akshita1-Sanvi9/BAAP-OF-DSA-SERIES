#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"enter any character: ";
  cin>>ch;
  int a = (int)ch;
  
  if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=97) || (a>=123 && a<=127))
  cout<<"special character";
  else if(a>=48 && a<=57) 
  cout<<"digit";
  else
  cout<<"alphabet";
  return 0;
}