// Chit 19: Sum
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class Sum {
public:
    int num1, num2;

    // Constructor
    Sum() {
        num1 = 10;
        num2 = 20;
    }

    // (a) display() - shows addition result
    void display() {
        cout << "Sum = " << num1 + num2 << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Sum" << endl;
    }
};

// (b) Derived class
class Addition : public Sum {
public:
    // Overridden show()
    void show() override {
        cout << "Addition" << endl;
    }
};

// (c) Function template for addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // (a) Object of base class
    Sum s;
    s.display();

    // (b) Polymorphism using base class pointer
    Addition a;
    Sum *ptr = &a;
    ptr->show();

    // (c) Template function call
    cout << "Add: " << add(10, 20) << endl;

    return 0;
}

/*
Output:
Sum = 30
Addition
Add: 30
*/
