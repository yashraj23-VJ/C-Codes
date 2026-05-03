// Chit 8: TicketBooking
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class TicketBooking {
public:
    int tickets, price;

    // Constructor
    TicketBooking() {
        tickets = 2;
        price = 100;
    }

    // (a) display() - shows total cost
    void display() {
        cout << "Total Cost = " << tickets * price << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Ticket Booking" << endl;
    }
};

// (b) Derived class
class OnlineBooking : public TicketBooking {
public:
    // Overridden show()
    void show() override {
        cout << "Online Booking" << endl;
    }
};

// (c) Function template for subtraction
template <typename T>
T sub(T a, T b) {
    return a - b;
}

int main() {
    // (a) Object of base class
    TicketBooking t;
    t.display();

    // (b) Polymorphism using base class pointer
    OnlineBooking o;
    TicketBooking *ptr = &o;
    ptr->show();

    // (c) Template function call
    cout << "Sub: " << sub(10, 3) << endl;

    return 0;
}

/*
Output:
Total Cost = 200
Online Booking
Sub: 7
*/
