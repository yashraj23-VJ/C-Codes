// Write separate C++ program with function template <typename T> ‘min(T a, T b)‘. 
// Test with ‘int‘ and ‘double‘. Add exception handling if both values are negative

#include <iostream>
#include <stdexcept>
using namespace std;

// Function template
template <typename T>
T min(T a, T b) {
    if (a < 0 && b < 0) {
        throw logic_error("Both values are negative.");
    }
    return (a < b) ? a : b;
}

int main() {
    try {
        // Test with int
        int x = 10, y = 20;
        cout << "Min (int): " << min(x, y) << endl;

        // Test with double
        double a = 5.5, b = 3.2;
        cout << "Min (double): " << min(a, b) << endl;

        // Test case to trigger exception
        int p = -7, q = -3;
        cout << "Result: " << min(p, q) << endl;
    }
    catch (const logic_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// -----output------
// Min (int): 10
// Min (double): 3.2
// Exception caught: Both values are negative.