#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  
  for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
      cout<<" ";
    }
      for(int j=1;j<=i;j++){
        cout<<"*";
      }
      
      cout<<endl;
  }
  for(int i=n-1;i>=1;i--){
    for(int k=1;k<=n-i;k++){
      cout<<" ";
    }
    for(int j=i;j>=1;j--){
      cout<<"*";
    }
    
    cout<<endl;
}
  return 0;
}