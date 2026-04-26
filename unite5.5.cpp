// Write separate C++ program with function template <typename T> ‘max(T a, T b)‘. 
// Test with ‘int‘ and ‘float‘. Add exception handling if both values are equal. 

#include <iostream>
#include <stdexcept>
using namespace std;

// Function template
template <typename T>
T max(T a, T b) {
    if (a == b) {
        throw logic_error("Both values are equal.");
    }
    return (a > b) ? a : b;
}

int main() {
    try {
        // Test with int
        int x = 10, y = 20;
        cout << "Max (int): " << max(x, y) << endl;

        // Test with float
        float a = 5.5f, b = 3.2f;
        cout << "Max (float): " << max(a, b) << endl;

        // Test case to trigger exception
        int p = 7, q = 7;
        cout << "Result: " << max(p, q) << endl;
    }
    catch (const logic_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// ------output----
// Max (int): 20
// Max (float): 5.5
// Exception caught: Both values are equal.
