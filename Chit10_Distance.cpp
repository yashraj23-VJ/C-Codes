// Chit 10: Distance
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class Distance {
public:
    int d1, d2;

    // Constructor
    Distance() {
        d1 = 10;
        d2 = 20;
    }

    // (a) display() - shows total distance
    void display() {
        cout << "Total Distance = " << d1 + d2 << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Distance" << endl;
    }
};

// (b) Derived class
class Travel : public Distance {
public:
    // Overridden show()
    void show() override {
        cout << "Travel Distance" << endl;
    }
};

// (c) Function template for division
template <typename T>
T divi(T a, T b) {
    return a / b;
}

int main() {
    // (a) Object of base class
    Distance d;
    d.display();

    // (b) Polymorphism using base class pointer
    Travel t;
    Distance *ptr = &t;
    ptr->show();

    // (c) Template function call
    cout << "Div: " << divi(20, 4) << endl;

    return 0;
}

/*
Output:
Total Distance = 30
Travel Distance
Div: 5
*/
