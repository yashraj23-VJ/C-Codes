// Chit 20: Difference
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class Difference {
public:
    int num1, num2;

    // Constructor
    Difference() {
        num1 = 30;
        num2 = 10;
    }

    // (a) display() - shows subtraction result
    void display() {
        cout << "Difference = " << num1 - num2 << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Difference" << endl;
    }
};

// (b) Derived class
class Subtraction : public Difference {
public:
    // Overridden show()
    void show() override {
        cout << "Subtraction" << endl;
    }
};

// (c) Function template for subtraction
template <typename T>
T sub(T a, T b) {
    return a - b;
}

int main() {
    // (a) Object of base class
    Difference d;
    d.display();

    // (b) Polymorphism using base class pointer
    Subtraction s;
    Difference *ptr = &s;
    ptr->show();

    // (c) Template function call
    cout << "Sub: " << sub(30, 10) << endl;

    return 0;
}

/*
Output:
Difference = 20
Subtraction
Sub: 20
*/
