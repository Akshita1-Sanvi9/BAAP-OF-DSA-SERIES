#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  int summation=0;
  for(int i=1;i<=n;i++){
    int num=2;
    int sum=0;
    for(int j=1;j<=i;j++){
        sum=sum*10+num;
    }
      summation=summation+sum;
  }
  cout<<summation;
  return 0;
}