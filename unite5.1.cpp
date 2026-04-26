// Write separate C++ program with function template <typename T> ‘multiply(T a, T b)‘. 
// Test with ‘int‘ and ‘float‘. Add exception handling if any value is negative. 

#include <iostream>
using namespace std;

// Function template
template <typename T>
T multiply(T a, T b) {
    if (a < 0 || b < 0) {
        throw invalid_argument("Negative values are not allowed.");
    }
    return a * b;
}

int main() {
    try {
        // Test with int
        int x = 5, y = 3;
        cout << "Integer multiplication: " << multiply(x, y) << endl;

        // Test with float
        float a = 2.5f, b = 4.0f;
        cout << "Float multiplication: " << multiply(a, b) << endl;

        // Test with negative value (to trigger exception)
        int p = -2, q = 6;
        cout << "Result: " << multiply(p, q) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// ------outpit-----
// Integer multiplication: 15
// Float multiplication: 10
// Exception caught: Negative values are not allowed.