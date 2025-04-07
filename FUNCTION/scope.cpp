#include<iostream>
using namespace std;
int c=5;//global variable
int add(int a,int b){
  int d=a+b+c;
  return d;
}
int main(){
  int m=add(4,5);//local variable
   cout<<m;
  //cout<<c;
}