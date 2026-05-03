#include<iostream>
using namespace std;
class Electricity{
    public:
    int units;
    int rate;
     
    Electricity()
    {
   
     units=100;
     rate=5;
    }

    void Display()
    {
        cout<<"Total Bill: "<<units*rate<<endl;
    }

    virtual void Show()
    {
        cout<<"Electricity Bill"<<endl;
    }
};
class Domestic:public Electricity
{ public:
    void Show()
    {
        cout<<"Domestic Bill"<<endl;
    }

    
};
int main()
{
    Electricity E;
    E.Display();

    Domestic D;
    Electricity *ptr = &D;
    ptr->Show();
    return 0;
}