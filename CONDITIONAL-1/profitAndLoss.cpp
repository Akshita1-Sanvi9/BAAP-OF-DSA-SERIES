#include<iostream>
using namespace std;
int main(){
  int cp,sp;
  cout<<"Enter the cost price: ";
  cin>>cp;
  cout<<"Enter the selling price: ";
  cin>>sp;
  if(cp>sp){
    cout<<"loss "<<cp-sp;
  }
  else if(cp==sp){
    cout<<"no profit or loss";
  }
  else{
    cout<<"profit "<<sp-cp;
  }
}