// Chit 3: Shopping
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class Shopping {
public:
    int price, quantity;

    // Constructor
    Shopping() {
        price = 100;
        quantity = 3;
    }

    // (a) display() - shows total cost
    void display() {
        cout << "Total Cost = " << price * quantity << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Shopping" << endl;
    }
};

// (b) Derived class
class OnlineShopping : public Shopping {
public:
    // Overridden show()
    void show() override {
        cout << "Online Shopping" << endl;
    }
};

// (c) Function template for multiplication
template <typename T>
T mul(T a, T b) {
    return a * b;
}

int main() {
    // (a) Object of base class
    Shopping s;
    s.display();

    // (b) Polymorphism using base class pointer
    OnlineShopping o;
    Shopping *ptr = &o;
    ptr->show();

    // (c) Template function call
    cout << "Mul: " << mul(4, 5) << endl;

    return 0;
}

/*
Output:
Total Cost = 300
Online Shopping
Mul: 20
*/
