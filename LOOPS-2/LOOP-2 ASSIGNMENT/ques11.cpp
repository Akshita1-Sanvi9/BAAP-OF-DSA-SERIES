#include<iostream>
using namespace std;
int main(){
  int next;
  int ft=0;
  int st=1;
  for(int i=1;i<=10;i++){
    
    cout<<ft<<" ";
    next=ft+st;
    ft=st;
    st=next;
   
  }
  return 0;
}