// Write separate C++ program with function template <typename T> ‘add(T a, T b)‘. 
// Test with ‘int‘ and ‘float‘. Add exception handling if sum exceeds 100. 

#include <iostream>
#include <stdexcept>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    T sum = a + b;
    if (sum > 100) {
        throw overflow_error("Sum exceeds 100.");
    }
    return sum;
}

int main() {
    try {
        // Test with int
        int x = 40, y = 50;
        cout << "Integer addition: " << add(x, y) << endl;

        // Test with float
        float a = 25.5f, b = 30.0f;
        cout << "Float addition: " << add(a, b) << endl;

        // Test case to trigger exception
        int p = 70, q = 40;
        cout << "Result: " << add(p, q) << endl;
    }
    catch (const overflow_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// ------output----
// Integer addition: 90
// Float addition: 55.5
// Exception caught: Sum exceeds 100.