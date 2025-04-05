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
      for(int k=65+i-1;k>=65;k--){
        cout<<(char)k;
      }
      for(int k=66;k<=65+i-1;k++){
        cout<<(char)k;}
      cout<<endl;
      }
  return 0;
}