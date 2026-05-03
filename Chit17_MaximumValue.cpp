// Chit 17: MaximumValue
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class MaximumValue {
public:
    int num1, num2;

    // Constructor
    MaximumValue() {
        num1 = 30;
        num2 = 50;
    }

    // (a) display() - shows both values
    void display() {
        cout << "Num1 = " << num1 << endl;
        cout << "Num2 = " << num2 << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Maximum Value" << endl;
    }
};

// (b) Derived class
class Compare : public MaximumValue {
public:
    // Overridden show()
    void show() override {
        cout << "Compare Values" << endl;
    }
};

// (c) Function template to find maximum
template <typename T>
T maxVal(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // (a) Object of base class
    MaximumValue mv;
    mv.display();

    // (b) Polymorphism using base class pointer
    Compare cmp;
    MaximumValue *ptr = &cmp;
    ptr->show();

    // (c) Template function call
    cout << "Max: " << maxVal(30, 50) << endl;

    return 0;
}

/*
Output:
Num1 = 30
Num2 = 50
Compare Values
Max: 50
*/
