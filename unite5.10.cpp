// Write separate C++ program with function template <typename T> ‘power(T a, T b)‘. 
// Test with ‘int‘ and ‘double‘. Add exception handling if exponent is negative.
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

// Function template
template <typename T>
T power(T a, T b) {
    if (b < 0) {
        throw invalid_argument("Exponent should not be negative.");
    }
    return pow(a, b);
}

int main() {
    try {
        // Test with int
        int x = 2, y = 3;
        cout << "Power (int): " << power(x, y) << endl;

        // Test with double
        double a = 2.5, b = 2.0;
        cout << "Power (double): " << power(a, b) << endl;

        // Test case to trigger exception
        int p = 2, q = -3;
        cout << "Result: " << power(p, q) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// ------output-------
// Power (int): 8
// Power (double): 6.25
// Exception caught: Exponent should not be negative.