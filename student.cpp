#include <iostream>
using namespace std;

class Student 
{

    public:
    string Name;
    int rollNo;
    string Division;

    void getInfo() 
    {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Division: ";
        cin >> Division;
    }

    void PrintInfo() 
    {
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Division" << Division << endl;
    }
};

int main() 
{
    Student s[10];

    for (int i = 0; i < 10; i++) 
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        s[i].getInfo();
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < 10; i++) 
    {
        s[i].PrintInfo();
    }

    return 0;
}
