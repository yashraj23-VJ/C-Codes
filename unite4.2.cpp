// Write a C++ program with base class ‘Vehicle‘ having virtual function ‘showSpeed()‘. 
// Derive ‘Car‘ and ‘Bike‘. Override ‘showSpeed()‘. Use base class pointer to call both.
#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    virtual void showSpeed() {
        cout << "Vehicle speed" << endl;
    }
};

// Derived class: Car
class Car : public Vehicle {
public:
    void showSpeed() override {
        cout << "Car speed: 120 km/h" << endl;
    }
};

// Derived class: Bike
class Bike : public Vehicle {
public:
    void showSpeed() override {
        cout << "Bike speed: 80 km/h" << endl;
    }
};

int main() {
    Vehicle* v;  // base class pointer

    Car c;
    Bike b;

    // Call Car's function
    v = &c;
    v->showSpeed();

    // Call Bike's function
    v = &b;
    v->showSpeed();

    return 0;
}

// --------output--------
// Car speed: 120 km/h
// Bike speed: 80 km/h