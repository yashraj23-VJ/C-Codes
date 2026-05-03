// Chit 5: LibraryFine
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class LibraryFine {
public:
    int daysLate, finePerDay;

    // Constructor
    LibraryFine() {
        daysLate = 5;
        finePerDay = 2;
    }

    // (a) display() - calculates total fine
    void display() {
        cout << "Total Fine = " << daysLate * finePerDay << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Fine" << endl;
    }
};

// (b) Derived class
class StudentFine : public LibraryFine {
public:
    // Overridden show()
    void show() override {
        cout << "Student Fine" << endl;
    }
};

// (c) Function template to find maximum value
template <typename T>
T maxVal(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // (a) Object of base class
    LibraryFine f;
    f.display();

    // (b) Polymorphism using base class pointer
    StudentFine s;
    LibraryFine *ptr = &s;
    ptr->show();

    // (c) Template function call
    cout << "Max: " << maxVal(10, 20) << endl;

    return 0;
}

/*
Output:
Total Fine = 10
Student Fine
Max: 20
*/
