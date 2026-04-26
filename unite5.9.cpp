// Write separate C++ program with function template <typename T> ‘divide(T a, T b)‘. 
// Test with ‘int‘ and ‘float‘. Add exception handling if b is zero. 
#include <iostream>
#include <stdexcept>
using namespace std;

// Function template
template <typename T>
T divide(T a, T b) {
    if (b == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    try {
        // Test with int
        int x = 10, y = 2;
        cout << "Division (int): " << divide(x, y) << endl;

        // Test with float
        float a = 7.5f, b = 2.5f;
        cout << "Division (float): " << divide(a, b) << endl;

        // Test case to trigger exception
        int p = 8, q = 0;
        cout << "Result: " << divide(p, q) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// -------output---------
// Division (int): 5
// Division (float): 3
// Exception caught: Division by zero is not allowed.