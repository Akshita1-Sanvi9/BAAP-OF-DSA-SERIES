#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  
  for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
        cout<<" ";
      }
      for(int k=65;k<=65+2*i-2;k++){
        cout<<(char)k;
      }
      cout<<endl;
  }
  return 0;
}