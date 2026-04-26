#include <iostream>
using namespace std;

class MedicalBill 
{
public:
    float doctorFee;
    float medicine;
    float rent;
    float total;

public:
    MedicalBill() 
    {
        cout << "Enter Doctor Fee: ";
        cin >> doctorFee;

        cout << "Enter Medicine Cost: ";
        cin >> medicine;

        cout << "Enter Room Charges: ";
        cin >> rent;

        total = doctorFee + medicine + rent;
    }

    void displayBill() 
    {
        cout << "Hospital Bill Details" << endl;
        cout << "Doctor Fee     : Rs. " << doctorFee << endl;
        cout << "Medicine Cost  : Rs. " << medicine << endl;
        cout << "Room Rent   : Rs. " << rent << endl;
        cout << "Total Bill     : Rs. " << total<< endl;
    }
};

int main()
 {
    MedicalBill mb;   
    mb.displayBill();

    return 0;
}
