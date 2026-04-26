// Write a C++ program with base class ‘Person‘ having virtual function ‘role()‘. 
// Derive ‘Teacher‘ and ‘Student‘. Override ‘role()‘. Use base class pointer to call both. 

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    virtual void role() {
        cout << "Person role" << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
public:
    void role() override {
        cout << "Teacher teaches students" << endl;
    }
};

// Derived class: Student
class Student : public Person {
public:
    void role() override {
        cout << "Student learns subjects" << endl;
    }
};

int main() {
    Person* p;  // base class pointer

    Teacher t;
    Student s;

    // Call Teacher role
    p = &t;
    p->role();

    // Call Student role
    p = &s;
    p->role();

    return 0;
}

// -----output------
// Teacher teaches students
// Student learns subjects