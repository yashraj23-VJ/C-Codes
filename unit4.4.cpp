// Write a C++ program with base class ‘Bank‘ having virtual function ‘interest()‘. 
// Derive ‘SBI‘ and ‘HDFC‘. Override ‘interest()‘. Use base class pointer to call both.

#include <iostream>
using namespace std;

// Base class
class Bank {
public:
    virtual void interest() {
        cout << "Bank interest rate" << endl;
    }
};

// Derived class: SBI
class SBI : public Bank {
public:
    void interest() override {
        cout << "SBI interest rate: 6.5%" << endl;
    }
};

// Derived class: HDFC
class HDFC : public Bank {
public:
    void interest() override {
        cout << "HDFC interest rate: 7%" << endl;
    }
};

int main() {
    Bank* b;  // base class pointer

    SBI s;
    HDFC h;

    // Call SBI interest
    b = &s;
    b->interest();

    // Call HDFC interest
    b = &h;
    b->interest();

    return 0;
}

// ---------output---------------
// SBI interest rate: 6.5%
// HDFC interest rate: 7%