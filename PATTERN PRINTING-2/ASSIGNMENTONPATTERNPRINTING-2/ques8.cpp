#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= 2 * n - 1; k++) {
            if (i + k == n + 1 || k - i == n - 1) {
                cout << i;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
  }
    