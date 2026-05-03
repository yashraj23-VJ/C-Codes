// Chit 13: ExamMarks
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class ExamMarks {
public:
    int marks1, marks2;

    // Constructor
    ExamMarks() {
        marks1 = 70;
        marks2 = 80;
    }

    // (a) display() - shows total marks
    void display() {
        cout << "Total Marks = " << marks1 + marks2 << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Marks" << endl;
    }
};

// (b) Derived class
class FinalMarks : public ExamMarks {
public:
    // Overridden show()
    void show() override {
        cout << "Final Marks" << endl;
    }
};

// (c) Function template for addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // (a) Object of base class
    ExamMarks e;
    e.display();

    // (b) Polymorphism using base class pointer
    FinalMarks f;
    ExamMarks *ptr = &f;
    ptr->show();

    // (c) Template function call
    cout << "Add: " << add(6, 4) << endl;

    return 0;
}

/*
Output:
Total Marks = 150
Final Marks
Add: 10
*/
