#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  
  for(int i=1;i<=n;i++){
    int a=1;
      for(int j=1;j<=i;j++){
        //cout<<2*j-1;
        cout<<a;
        a+=2;
      }
      cout<<endl;
  }
  return 0;
}