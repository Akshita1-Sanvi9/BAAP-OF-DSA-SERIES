/*
Explore:
Can the same function name be used for different functions without any
conflict?
*/


/*
Yes, the same function name can be used for different functions without conflict in C++. This is achieved through a feature called function overloading.

Function overloading allows multiple functions to have the same name, as long as their parameter lists differ (i.e., the number of parameters or their data types are different). The compiler differentiates between the functions based on the arguments passed during the function call.
*/
#include <iostream>
using namespace std;

// Function with one parameter
void display(int num) {
    cout << "Integer: " << num << endl;
}

// Function with two parameters
void display(int num, double value) {
    cout << "Integer: " << num << " and Double: " << value << endl;
}

int main() {
    display(5); // Calls the first function
    display(100, 3.714); // Calls the second function
    return 0;
}
/*
In this example, the display function is overloaded with two variants. The compiler decides which one to call based on the arguments passed. However, keep in mind that function overloading cannot be based on the return type alone, as this would lead to ambiguity.
*/