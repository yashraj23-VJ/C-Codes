// Chit 12: Petrol
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class Petrol {
public:
    int liters, pricePerLiter;

    // Constructor
    Petrol() {
        liters = 5;
        pricePerLiter = 100;
    }

    // (a) display() - calculates total cost
    void display() {
        cout << "Total Cost = " << liters * pricePerLiter << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Fuel" << endl;
    }
};

// (b) Derived class
class Diesel : public Petrol {
public:
    // Overridden show()
    void show() override {
        cout << "Diesel Fuel" << endl;
    }
};

// (c) Function template to find minimum value
template <typename T>
T minVal(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    // (a) Object of base class
    Petrol p;
    p.display();

    // (b) Polymorphism using base class pointer
    Diesel d;
    Petrol *ptr = &d;
    ptr->show();

    // (c) Template function call
    cout << "Min: " << minVal(8, 3) << endl;

    return 0;
}

/*
Output:
Total Cost = 500
Diesel Fuel
Min: 3
*/
