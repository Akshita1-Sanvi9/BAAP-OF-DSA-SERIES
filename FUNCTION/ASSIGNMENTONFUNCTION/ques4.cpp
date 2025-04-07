#include<iostream>
using namespace std;
void count(int n){
  int num=n;
  if(n==0) cout<<"Total number of digits: "<<1<<endl;
  else{
  int count=0;
  while(n!=0){
    count+=1;
    n=n/10;
  }
  cout<<"Total number of digits: "<<count<<endl;
}
   
  cout<<"Square : "<<num*num;
}
int main(){
  int N;
  cout<<"Enter a number: ";
  cin>>N;
  count(N);
}