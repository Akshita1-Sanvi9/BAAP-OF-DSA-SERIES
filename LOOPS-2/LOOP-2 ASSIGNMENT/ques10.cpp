#include<iostream>
using namespace std;
int main(){
  int num1,num2,LCM,HCF,numer,denom,rem;
  cout<<"Enter both numbers : ";
  cin>>num1>>num2;
  if(num1>num2){
    numer=num1;
    denom=num2;
  }
  else{
    numer=num2;
    denom=num1;
  }
  rem=numer%denom;
 
while(rem!=0){
  
  numer=denom;
  denom=rem;
  rem=numer%denom;
}
HCF=denom;
LCM=(num1*num2)/HCF;
  cout<<"HCF: "<<HCF<<endl;
  cout<<"LCM: "<<LCM;
return 0;
}