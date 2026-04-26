//Write a C++ program with base class ‘Student‘ having virtual function ‘display()‘. 
//Derive ‘UG‘ and ‘PG‘. Override ‘display()‘. Use base class pointer to call both.

#include <iostream>
using namespace std;

// Base class
class Student {
public:
    virtual void display() {
        cout << "Student details" << endl;
    }
};

// Derived class: UG
class UG : public Student {
public:
    void display() override {
        cout << "Undergraduate Student" << endl;
    }
};

// Derived class: PG
class PG : public Student {
public:
    void display() override {
        cout << "Postgraduate Student" << endl;
    }
};

int main() {
    Student* s;  // base class pointer

    UG ug;
    PG pg;

    // Call UG display
    s = &ug;
    s->display();

    // Call PG display
    s = &pg;
    s->display();

    return 0;
}

// ----------output----------
// Undergraduate Student
// Postgraduate Student