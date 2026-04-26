#include <iostream> // Provides input and output operations
#include <iomanip> // Provides formatted output functions like setprecision()

using namespace std;

// Definition of class HotelBill
class HotelBill
{
private:
// Data members (private for data security)
int tableNo, items; // Stores table number and number of items
string customerName; // Stores customer name
long long contact; // Stores customer contact number
float total, discount, payable; // Stores bill details

public:
// Member function to accept customer details
void getCustomerDetails()
{
// Accept table number
cout << "Enter Table Number: ";
cin >> tableNo;

// Clear input buffer before taking string input
cin.ignore();

// Accept customer name (including spaces)
cout << "Enter Customer Name: ";
getline(cin, customerName);

// Accept customer contact number

cout << "Enter Customer Contact Number: ";
cin >> contact;
}

// Member function to accept order details
void getOrderDetails()
{
int qty; // Quantity of each item
float price; // Price of each item
total = 0; // Initialize total bill amount

// Accept number of ordered items
cout << "\nEnter Number of Items Ordered: ";
cin >> items;

// Loop to accept quantity and price of each item
for (int i = 1; i <= items; i++)
{
cout << "\nItem " << i << " Quantity: ";
cin >> qty;

cout << "Item " << i << " Price: ";
cin >> price;

// Calculate total amount
total += qty * price;
}
}

// Member function to calculate discount and final payable amount
void calculateBill()
{
// Apply discount based on total amount
if (total >= 2000)
discount = total * 0.20; // 20% discount
else if (total >= 1000)
discount = total * 0.10; // 10% discount
else
discount = 0; // No discount

// Calculate final payable amount
payable = total - discount;
}

// Member function to display the final bill
void displayBill()
{
cout << "\n---------- HOTEL BILL ----------\n";
cout << "Table No : " << tableNo << endl;
cout << "Customer Name : " << customerName << endl;
cout << "Contact Number : " << contact << endl;

// Display bill amount with two decimal places
cout << fixed << setprecision(2);
cout << "Total Amount : Rs. " << total << endl;
cout << "Discount : Rs. " << discount << endl;

cout << "Payable Amount : Rs. " << payable << endl;
}
};

int main()
{
// Create an object of HotelBill class
HotelBill bill;

// Call member functions using object
bill.getCustomerDetails(); // Get customer information
bill.getOrderDetails(); // Get order details
bill.calculateBill(); // Calculate bill and discount
bill.displayBill();
// Display final bill

return 0; // End of program
}
//OUTPUT :

//Enter Table Number: 5
//Enter Customer Name: Amit Sharma
//Enter Customer Contact Number: 9876543210

//Enter Number of Items Ordered: 3

//Item 1 Quantity: 2
//Item 1 Price: 250

//Item 2 Quantity: 1
//Item 2 Price: 600

//Item 3 Quantity: 3
//Item 3 Price: 300

//---------- HOTEL BILL ----------
//Table No : 5
//Customer Name : Amit Sharma
//Contact Number : 9876543210
//Total Amount : Rs. 1850.00
//Discount : Rs. 185.00
//Payable Amount : Rs. 1665.00