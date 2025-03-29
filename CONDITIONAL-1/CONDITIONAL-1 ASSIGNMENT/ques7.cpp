#include<iostream>
using namespace std;
int main(){
  int x,y;
  cout<<"Enter values of x and y: ";
  cin>>x>>y;
  if((x==0) && (y==0)){
    cout<<"At origin";
  }
  else if((x==0)&&(y!=0)){
    cout<<"On y-axis";
  }
  else if((x!=0)&&(y==0)){
    cout<<"On x-axis";
  }
  else{
    cout<<"does not lie on axes or origin";
  }
  return 0;
}