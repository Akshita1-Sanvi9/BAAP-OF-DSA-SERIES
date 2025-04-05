#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= 2 * n - 1; k++) {
            if (i + k == n + 1 || k - i == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int k = 1; k <= 2 * n - 1; k++) {
            if (i + k == n + 1 || k - i == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
