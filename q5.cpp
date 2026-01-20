#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Method 1: Using third variable
    int temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping (using third variable):" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Method 2: Without using third variable (addition & subtraction)
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping again (without third variable):" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
