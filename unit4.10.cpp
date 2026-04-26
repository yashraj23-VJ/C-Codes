// Write a C++ program with base class ‘Shape3D‘ having virtual function ‘volume()‘. 
// Derive ‘Cube‘ and ‘Sphere‘. Override ‘volume()‘. Use base class pointer to call both. 

#include <iostream>
using namespace std;

// Base class
class Shape3D {
public:
    virtual void volume() {
        cout << "Shape3D volume" << endl;
    }
};

// Derived class: Cube
class Cube : public Shape3D {
public:
    void volume() override {
        int side = 3;
        cout << "Cube volume: " << side * side * side << endl;
    }
};

// Derived class: Sphere
class Sphere : public Shape3D {
public:
    void volume() override {
        float radius = 2;
        float vol = (4.0/3.0) * 3.14 * radius * radius * radius;
        cout << "Sphere volume: " << vol << endl;
    }
};

int main() {
    Shape3D* s;  // base class pointer

    Cube c;
    Sphere sp;

    // Call Cube volume
    s = &c;
    s->volume();

    // Call Sphere volume
    s = &sp;
    s->volume();

    return 0;
}

// ---------output-----------
// Cube volume: 27
// Sphere volume: 33.4933