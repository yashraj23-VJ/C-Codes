// Write separate C++ program with function template <typename T> ‘cube(T num)‘. 
// Test with ‘int‘ and ‘float‘. Add exception handling if num is zero.

#include <iostream>
#include <stdexcept>
using namespace std;

// Function template
template <typename T>
T cube(T num) {
    if (num == 0) {
        throw invalid_argument("Number should not be zero.");
    }
    return num * num * num;
}

int main() {
    try {
        // Test with int
        int x = 3;
        cout << "Cube (int): " << cube(x) << endl;

        // Test with float
        float y = 2.5f;
        cout << "Cube (float): " << cube(y) << endl;

        // Test case to trigger exception
        int z = 0;
        cout << "Result: " << cube(z) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// ----output----
// Cube (int): 27
// Cube (float): 15.625
// Exception caught: Number should not be zero.