#include <iostream>
using namespace std;

// Trinagle Area
float area(float base, float height) 
{
    return 0.5 * base * height;
}

// Circle Area
float area(float radius) 
{
    return 3.14 * radius * radius;
}

int main() 
{
    float b, h, r;

    cout << "Enter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of Triangle: " << area(b, h) << endl;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle: " << area(r) << endl;

    return 0;
}
