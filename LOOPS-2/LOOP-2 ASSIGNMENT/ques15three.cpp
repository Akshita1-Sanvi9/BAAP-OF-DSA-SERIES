#include<iostream>
using namespace std;
int main(){
  int i=1;
  while(i<=10);
  //if there is semicolon after while then it will not print anything as per the question
  {
  cout<<i<<endl;
  i++;
  }
return 0;
}