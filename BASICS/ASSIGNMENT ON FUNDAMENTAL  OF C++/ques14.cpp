#include<iostream>
using namespace std;
int main(){
  int head,leg,chicken,dog;
  cout<<"Enter number of heads: ";
  cin>>head;
  cout<<"Enter number of legs: ";
  cin>>leg;
  chicken=0.5*(4*head-leg);
  dog=head-chicken;
  cout<<"DOGS: "<<dog<<" CHICKEN: "<<chicken;
  return 0;

}