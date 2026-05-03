// Chit 18: MinimumValue
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class MinimumValue {
public:
    int num1, num2;

    // Constructor
    MinimumValue() {
        num1 = 25;
        num2 = 15;
    }

    // (a) display() - shows both values
    void display() {
        cout << "Num1 = " << num1 << endl;
        cout << "Num2 = " << num2 << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Minimum Value" << endl;
    }
};

// (b) Derived class
class CompareMin : public MinimumValue {
public:
    // Overridden show()
    void show() override {
        cout << "Compare Minimum" << endl;
    }
};

// (c) Function template to find minimum
template <typename T>
T minVal(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    // (a) Object of base class
    MinimumValue mv;
    mv.display();

    // (b) Polymorphism using base class pointer
    CompareMin cm;
    MinimumValue *ptr = &cm;
    ptr->show();

    // (c) Template function call
    cout << "Min: " << minVal(25, 15) << endl;

    return 0;
}

/*
Output:
Num1 = 25
Num2 = 15
Compare Minimum
Min: 15
*/
