// Chit 7: Temperature
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class Temperature {
public:
    float celsius;

    // Constructor
    Temperature() {
        celsius = 30;
    }

    // (a) display() - converts Celsius to Fahrenheit
    void display() {
        float fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit = " << fahrenheit << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Temperature" << endl;
    }
};

// (b) Derived class
class Weather : public Temperature {
public:
    // Overridden show()
    void show() override {
        cout << "Weather Report" << endl;
    }
};

// (c) Function template for addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // (a) Object of base class
    Temperature t;
    t.display();

    // (b) Polymorphism using base class pointer
    Weather w;
    Temperature *ptr = &w;
    ptr->show();

    // (c) Template function call
    cout << "Add: " << add(5, 7) << endl;

    return 0;
}

/*
Output:
Temperature in Fahrenheit = 86
Weather Report
Add: 12
*/
