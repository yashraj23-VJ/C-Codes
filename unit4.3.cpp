// Write a C++ program with base class ‘Animal‘ having virtual function ‘sound()‘. 
// Derive ‘Dog‘ and ‘Cat‘. Override ‘sound()‘. Use base class pointer to call both.
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;  // base class pointer

    Dog d;
    Cat c;

    // Call Dog's sound
    a = &d;
    a->sound();

    // Call Cat's sound
    a = &c;
    a->sound();

    return 0;
}

// ---------output----------
// Dog barks
// Cat meows