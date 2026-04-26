// Write separate C++ program with function template <typename T> ‘subtract(T a, T b)‘. 
// Test with ‘int‘ and ‘double‘. Add exception handling if result is negative.

#include <iostream>
using namespace std;

// Function template
template <typename T>
T subtract(T a, T b) {
    T result = a - b;
    if (result < 0) {
        throw runtime_error("Result is negative.");
    }
    return result;
}

int main() {
    try {
        // Test with int
        int x = 10, y = 4;
        cout << "Integer subtraction: " << subtract(x, y) << endl;

        // Test with double
        double a = 8.5, b = 3.2;
        cout << "Double subtraction: " << subtract(a, b) << endl;

        // Test case to trigger exception
        int p = 5, q = 9;
        cout << "Result: " << subtract(p, q) << endl;
    }
    catch (const runtime_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// --------output---------
// Integer subtraction: 6
// Double subtraction: 5.3
// Exception caught: Result is negative.