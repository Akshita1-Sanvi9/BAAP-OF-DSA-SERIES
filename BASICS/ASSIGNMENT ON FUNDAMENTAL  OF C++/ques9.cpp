#include<iostream>
using namespace std;
int main(){
  int x=5;
  cout<<x++<<" "<<++x;
  //it should come as 5 and 7 not 6 and 7
  return 0;
}