#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  
  for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(i==j || i==n+1-j) cout<<"*";
        else cout<<" ";
        
      }
      cout<<endl;
  }
  return 0;
}