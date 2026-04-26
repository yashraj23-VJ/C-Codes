// Write a C++ program with base class ‘Employee‘ having virtual function ‘salary()‘. 
// Derive ‘Manager‘ and ‘Developer‘. Override ‘salary()‘. Use base class pointer to call both.

#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    // Virtual function
    virtual void salary() {
        cout << "Employee salary" << endl;
    }
};

// Derived class: Manager
class Manager : public Employee {
public:
    void salary() override {
        cout << "Manager salary: 80000" << endl;
    }
};

// Derived class: Developer
class Developer : public Employee {
public:
    void salary() override {
        cout << "Developer salary: 60000" << endl;
    }
};

int main() {
    Employee* emp;  // base class pointer

    Manager m;
    Developer d;

    // Call Manager salary using base pointer
    emp = &m;
    emp->salary();

    // Call Developer salary using base pointer
    emp = &d;
    emp->salary();

    return 0;
}

// -----output----------
// Manager salary: 80000
// Developer salary: 60000