// Chit 11: HotelBill
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class HotelBill {
public:
    int days, rentPerDay;

    // Constructor
    HotelBill() {
        days = 2;
        rentPerDay = 1000;
    }

    // (a) display() - calculates total bill
    void display() {
        cout << "Total Bill = " << days * rentPerDay << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Hotel Bill" << endl;
    }
};

// (b) Derived class
class LuxuryRoom : public HotelBill {
public:
    // Overridden show()
    void show() override {
        cout << "Luxury Room Bill" << endl;
    }
};

// (c) Function template to find maximum value
template <typename T>
T maxVal(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // (a) Object of base class
    HotelBill h;
    h.display();

    // (b) Polymorphism using base class pointer
    LuxuryRoom l;
    HotelBill *ptr = &l;
    ptr->show();

    // (c) Template function call
    cout << "Max: " << maxVal(15, 25) << endl;

    return 0;
}

/*
Output:
Total Bill = 2000
Luxury Room Bill
Max: 25
*/
