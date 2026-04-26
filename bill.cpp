#include <iostream>
using namespace std;

class ElectricityBill 
{
public:
    int units;
    int rate=12;
    float bill, discount, finalBill;

public:
    void getUnits() 
    {
        cout << "Enter total units consumed: ";
        cin >> units;
    }

    void calculateBill() 
    {
        bill=units*rate;
        discount = bill * 2/100;      // 2% discount
        finalBill = bill - discount;
    }

    void displayBill() 
    {
        cout << "Electricity Bill Details" << endl;
        cout << "Units Consumed : " << units << endl;
        cout << "Bill Amount   : Rs. " << bill << endl;
        cout << "Discount (2%) : Rs. " << discount << endl;
        cout << "Final Bill    : Rs. " << finalBill << endl;
    }
};

int main() 
{
    ElectricityBill eb;

    eb.getUnits();
    eb.calculateBill();
    eb.displayBill();

    return 0;
}
