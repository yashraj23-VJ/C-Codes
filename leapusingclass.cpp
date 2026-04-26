#include <iostream>
using namespace std;
class LeapYear 
{
public:
    int year;
public:
    void getYear() 
    {
        cout << "Enter a year: ";
        cin >> year;
    }
    void check() 
    {
       if (year % 4 == 0) 
    {
        cout << year << " is a Leap Year";
    }
    else
    {
        cout << year << " is not a Leap Year";
    }
  }
 } ;
int main() 
 {
    LeapYear ly;
    ly.getYear();
    ly.check();
    return 0;
 }



