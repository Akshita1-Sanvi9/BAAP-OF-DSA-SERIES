#include<iostream>
using namespace std;
void hii(int x, int y){
  cout<<"address of x inside hii function "<<&x<<endl;
  cout<<"address of y inside hii function "<<&y<<endl;
}
int main(){
  int x=5;int y=6;
  cout<<"address of x inside main function "<<&x<<endl;
  cout<<"address of y inside main function "<<&y<<endl;
  hii(x,y);
}