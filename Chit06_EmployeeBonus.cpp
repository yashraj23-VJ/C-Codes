// Chit 6: EmployeeBonus
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class EmployeeBonus {
public:
    int salary, bonus;

    // Constructor
    EmployeeBonus() {
        salary = 20000;
        bonus = 3000;
    }

    // (a) display() - shows total salary
    void display() {
        cout << "Total Salary = " << salary + bonus << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Employee Bonus" << endl;
    }
};

// (b) Derived class
class ManagerBonus : public EmployeeBonus {
public:
    // Overridden show()
    void show() override {
        cout << "Manager Bonus" << endl;
    }
};

// (c) Function template to find minimum value
template <typename T>
T minVal(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    // (a) Object of base class
    EmployeeBonus e;
    e.display();

    // (b) Polymorphism using base class pointer
    ManagerBonus m;
    EmployeeBonus *ptr = &m;
    ptr->show();

    // (c) Template function call
    cout << "Min: " << minVal(10, 5) << endl;

    return 0;
}

/*
Output:
Total Salary = 23000
Manager Bonus
Min: 5
*/
