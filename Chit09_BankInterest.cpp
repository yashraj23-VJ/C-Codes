// Chit 9: BankInterest
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class BankInterest {
public:
    int principal, rate;

    // Constructor
    BankInterest() {
        principal = 1000;
        rate = 5;
    }

    // (a) display() - calculates simple interest
    void display() {
        int interest = (principal * rate) / 100;
        cout << "Interest = " << interest << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Interest" << endl;
    }
};

// (b) Derived class
class Loan : public BankInterest {
public:
    // Overridden show()
    void show() override {
        cout << "Loan Interest" << endl;
    }
};

// (c) Function template for multiplication
template <typename T>
T mul(T a, T b) {
    return a * b;
}

int main() {
    // (a) Object of base class
    BankInterest b;
    b.display();

    // (b) Polymorphism using base class pointer
    Loan l;
    BankInterest *ptr = &l;
    ptr->show();

    // (c) Template function call
    cout << "Mul: " << mul(4, 6) << endl;

    return 0;
}

/*
Output:
Interest = 50
Loan Interest
Mul: 24
*/
