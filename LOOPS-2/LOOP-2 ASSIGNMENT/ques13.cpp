#include<iostream>
using namespace std;
int main(){
  int N;
  cout<<"Enter N: ";
  cin>>N;
  int sum=0;
  int i=1;
  while(i<=N){
    if(sum>300){
      sum=sum-(i-1);
        break;}
    if(i%5==0){
      i++;
    continue;}
    sum=sum+i;
    i++;
   
  }
  cout<<sum;
 return 0;
}