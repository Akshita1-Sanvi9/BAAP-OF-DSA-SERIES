#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter the alphabet: ";
  cin>>ch;
  int ascii=(int)ch;
  if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
    cout<<"It is an alphabet.";
  }
  else{
    cout<<"It is not an alphabet.";
  }
}