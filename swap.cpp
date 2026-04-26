#include <iostream>
using namespace std;

class Swap 
{
public:
    int a, b;

    void getInfo() 
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void swap() 
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    void Print() 
    {
        cout << "After swapping:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() 
{
    Swap s;

    s.getInfo();
    s.swap();
    s.Print();

    return 0;
}
