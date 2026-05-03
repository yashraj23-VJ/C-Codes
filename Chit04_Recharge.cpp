// Chit 4: Recharge
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class Recharge {
public:
    long long number;
    int amount;

    // Constructor
    Recharge() {
        number = 9876543210;
        amount = 199;
    }

    // (a) display() - shows recharge details
    void display() {
        cout << "Mobile Number = " << number << endl;
        cout << "Recharge Amount = " << amount << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Recharge" << endl;
    }
};

// (b) Derived class
class SpecialRecharge : public Recharge {
public:
    // Overridden show()
    void show() override {
        cout << "Special Recharge" << endl;
    }
};

// (c) Function template for division
template <typename T>
T divi(T a, T b) {
    return a / b;
}

int main() {
    // (a) Object of base class
    Recharge r;
    r.display();

    // (b) Polymorphism using base class pointer
    SpecialRecharge s;
    Recharge *ptr = &s;
    ptr->show();

    // (c) Template function call
    cout << "Div: " << divi(10, 2) << endl;

    return 0;
}

/*
Output:
Mobile Number = 9876543210
Recharge Amount = 199
Special Recharge
Div: 5
*/
