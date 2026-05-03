// Chit 15: Multiplication
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class Multiplication {
public:
    int num1, num2;

    // Constructor
    Multiplication() {
        num1 = 5;
        num2 = 4;
    }

    // (a) display() - shows product
    void display() {
        cout << "Product = " << num1 * num2 << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Multiplication" << endl;
    }
};

// (b) Derived class
class MathOperation : public Multiplication {
public:
    // Overridden show()
    void show() override {
        cout << "Math Operation" << endl;
    }
};

// (c) Function template for multiplication
template <typename T>
T mul(T a, T b) {
    return a * b;
}

int main() {
    // (a) Object of base class
    Multiplication m;
    m.display();

    // (b) Polymorphism using base class pointer
    MathOperation mo;
    Multiplication *ptr = &mo;
    ptr->show();

    // (c) Template function call
    cout << "Mul: " << mul(6, 7) << endl;

    return 0;
}

/*
Output:
Product = 20
Math Operation
Mul: 42
*/
