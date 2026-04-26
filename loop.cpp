#include <iostream>
using namespace std;

class PrintNumbers
 {
public:
    int n;

public:
    void getNumber() 
    {
        cout << "Enter value of n: ";
        cin >> n;
    }

    void displayNumbers() 
    {
        cout << "Numbers from 1 to " << n << " are:" << endl;
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    }
};

int main() 
{
    PrintNumbers p;

    p.getNumber();
    p.displayNumbers();

    return 0;
}
