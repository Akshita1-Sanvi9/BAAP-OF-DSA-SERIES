#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for(int i=1;i<=2*n-1;i++){
    cout<<"*";
   }
   cout<<endl;

   for(int i=n-1;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    for(int k=1;k<=2*n-2*i-1;k++){
      cout<<" ";
    }
    for(int l=1;l<=i;l++){
      
      cout<<"*";
    }
    cout<<endl;

   }
   for(int i=2;i<=n-1;i++){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    for(int k=1;k<=2*n-2*i-1;k++){
      cout<<" ";
    }
    for(int l=1;l<=i;l++){
      
      cout<<"*";
    }
    cout<<endl;

   }
   for(int i=1;i<=2*n-1;i++){
    cout<<"*";
   }
   cout<<endl;
  
  return 0;
}


    