#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  for(int i=1;i<=n;i++){
  for(int j=65;j<=65+n-i;j++){
    if(i==1 && j==(65+n-i)) continue;
    cout<<(char)j;
  }
  for(int k=1;k<=2*(i-1)-1;k++){
    cout<<" ";
  }
  for(int l=65+i+n-2;l<=65+2*n-2;l++){
    cout<<(char)l;
  }
  cout<<endl;
}
return 0;
}