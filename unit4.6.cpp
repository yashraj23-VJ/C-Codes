//Write a C++ program with base class ‘Appliance‘ having virtual function ‘power()‘. 
//Derive ‘Fan‘ and ‘AC‘. Override ‘power()‘. Use base class pointer to call both.

#include <iostream>
using namespace std;

// Base class
class Appliance {
public:
    virtual void power() {
        cout << "Appliance power consumption" << endl;
    }
};

// Derived class: Fan
class Fan : public Appliance {
public:
    void power() override {
        cout << "Fan power: 75 Watts" << endl;
    }
};

// Derived class: AC
class AC : public Appliance {
public:
    void power() override {
        cout << "AC power: 1500 Watts" << endl;
    }
};

int main() {
    Appliance* a;  // base class pointer

    Fan f;
    AC ac;

    // Call Fan power
    a = &f;
    a->power();

    // Call AC power
    a = &ac;
    a->power();

    return 0;
}

// -----output-----
// Fan power: 75 Watts
// AC power: 1500 Watts