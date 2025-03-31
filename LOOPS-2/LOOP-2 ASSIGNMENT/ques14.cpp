#include<iostream>
using namespace std;
int main(){
int n=153;
int sum=0;
int r;
int p=n;
while(n>0){
  r=n%10;
  n=n/10;
  sum=sum+r*r*r;
}
if(p==sum) cout<<"armstrong";
else cout<<"not";
return 0;
}