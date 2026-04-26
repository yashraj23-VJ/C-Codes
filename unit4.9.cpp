// Write a C++ program with base class ‘Account‘ having virtual function ‘balance()‘. 
// Derive ‘Saving‘ and ‘Current‘. Override ‘balance()‘. Use base class pointer to call both.

#include <iostream>
using namespace std;

// Base class
class Account {
public:
    virtual void balance() {
        cout << "Account balance" << endl;
    }
};

// Derived class: Saving
class Saving : public Account {
public:
    void balance() override {
        cout << "Saving Account balance: 5000" << endl;
    }
};

// Derived class: Current
class Current : public Account {
public:
    void balance() override {
        cout << "Current Account balance: 10000" << endl;
    }
};

int main() {
    Account* a;  // base class pointer

    Saving s;
    Current c;

    // Call Saving balance
    a = &s;
    a->balance();

    // Call Current balance
    a = &c;
    a->balance();

    return 0;
}

// ------output------
// Saving Account balance: 5000
// Current Account balance: 10000