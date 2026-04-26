// Write separate C++ program with function template <typename T> ‘modulus(T a, T b)‘. 
// Test with ‘int‘. Add exception handling if b is zero.

#include <iostream>
#include <stdexcept>
using namespace std;

// Function template
template <typename T>
T modulus(T a, T b) {
    if (b == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return a % b;  // Works for int types
}

int main() {
    try {
        // Test with int
        int x = 10, y = 3;
        cout << "Modulus result: " << modulus(x, y) << endl;

        // Test case to trigger exception
        int p = 8, q = 0;
        cout << "Result: " << modulus(p, q) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// --------output----------
// Modulus result: 1
// Exception caught: Division by zero is not allowed.