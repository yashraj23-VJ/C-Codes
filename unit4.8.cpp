// Write a C++ program with base class ‘Food‘ having virtual function ‘type()‘. 
// Derive ‘Veg‘ and ‘NonVeg‘. Override ‘type()‘. Use base class pointer to call both. 

#include <iostream>
using namespace std;

// Base class
class Food {
public:
    virtual void type() {
        cout << "Food type" << endl;
    }
};

// Derived class: Veg
class Veg : public Food {
public:
    void type() override {
        cout << "Vegetarian Food" << endl;
    }
};

// Derived class: NonVeg
class NonVeg : public Food {
public:
    void type() override {
        cout << "Non-Vegetarian Food" << endl;
    }
};

int main() {
    Food* f;  // base class pointer

    Veg v;
    NonVeg nv;

    // Call Veg type
    f = &v;
    f->type();

    // Call NonVeg type
    f = &nv;
    f->type();

    return 0;
}

// ------output--------
// Vegetarian Food
// Non-Vegetarian Food