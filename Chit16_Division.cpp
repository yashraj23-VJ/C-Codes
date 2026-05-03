// Chit 16: Division
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class Division {
public:
    int num1, num2;

    // Constructor
    Division() {
        num1 = 20;
        num2 = 5;
    }

    // (a) display() - shows division result
    void display() {
        cout << "Division Result = " << num1 / num2 << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Division" << endl;
    }
};

// (b) Derived class
class Calculator : public Division {
public:
    // Overridden show()
    void show() override {
        cout << "Calculator" << endl;
    }
};

// (c) Function template for division
template <typename T>
T divi(T a, T b) {
    return a / b;
}

int main() {
    // (a) Object of base class
    Division d;
    d.display();

    // (b) Polymorphism using base class pointer
    Calculator c;
    Division *ptr = &c;
    ptr->show();

    // (c) Template function call
    cout << "Div: " << divi(18, 3) << endl;

    return 0;
}

/*
Output:
Division Result = 4
Calculator
Div: 6
*/
