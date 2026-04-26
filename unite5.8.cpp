// Write separate C++ program with function template <typename T> ‘average(T a, T b)‘. 
// Test with ‘int‘ and ‘double‘. Add exception handling if any value is negative. 

#include <iostream>
#include <stdexcept>
using namespace std;

// Function template
template <typename T>
double average(T a, T b) {
    if (a < 0 || b < 0) {
        throw invalid_argument("Negative values are not allowed.");
    }
    return (a + b) / 2.0;
}

int main() {
    try {
        // Test with int
        int x = 10, y = 20;
        cout << "Average (int): " << average(x, y) << endl;

        // Test with double
        double a = 5.5, b = 3.5;
        cout << "Average (double): " << average(a, b) << endl;

        // Test case to trigger exception
        int p = -5, q = 10;
        cout << "Result: " << average(p, q) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

// ------output-----
// Average (int): 15
// Average (double): 4.5
// Exception caught: Negative values are not allowed.