#include<iostream>
#include<math.h>
using namespace std;
int main(){
//3,12,48....
  int n;
  int a=3;
  int r=4;
  cout<<"Enter the value of n: ";
  cin>>n;
  int an=a*pow(r,(n-1));
  for(int i=3;i<=an;i=i*4){
    cout<<i<<" ";
  }
  // int a=3;
  // for(int i=1;i<=n;i++){
  //   cout<<a<<" ";
  //   a*=4;
  // }
  return 0;
}