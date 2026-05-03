// Chit 14: ShoppingCart
// (a) Classes, Objects & Constructor
// (b) Inheritance & Polymorphism
// (c) Templates

#include <iostream>
using namespace std;

// Base class
class ShoppingCart {
public:
    int itemCount, price;

    // Constructor
    ShoppingCart() {
        itemCount = 3;
        price = 200;
    }

    // (a) display() - calculates total cost
    void display() {
        cout << "Total Cost = " << itemCount * price << endl;
    }

    // (b) virtual show() for polymorphism
    virtual void show() {
        cout << "Cart" << endl;
    }
};

// (b) Derived class
class OnlineCart : public ShoppingCart {
public:
    // Overridden show()
    void show() override {
        cout << "Online Cart" << endl;
    }
};

// (c) Function template for subtraction
template <typename T>
T sub(T a, T b) {
    return a - b;
}

int main() {
    // (a) Object of base class
    ShoppingCart sc;
    sc.display();

    // (b) Polymorphism using base class pointer
    OnlineCart oc;
    ShoppingCart *ptr = &oc;
    ptr->show();

    // (c) Template function call
    cout << "Sub: " << sub(15, 6) << endl;

    return 0;
}

/*
Output:
Total Cost = 600
Online Cart
Sub: 9
*/
