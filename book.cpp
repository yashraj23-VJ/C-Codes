#include <iostream>
using namespace std;

class Book {
public:
   
    char Name[50];
    char author[50];
    int copies;

public:
    void getBookDetails() 
    {
     

        cout << "Enter Book Title: ";
        cin >> Name;

        cout << "Enter Author Name: ";
        cin >> author;

        cout << "Enter Number of Copies Available: ";
        cin >> copies;
    }

    void displayBookDetails() 
    {
        cout << "Book Details" << endl;
        cout << "Title   : " << Name<< endl;
        cout << "Author  : " << author << endl;
        cout << "Copies  : " << copies << endl;
    }

    void issueBook() 
    {
        if (copies > 0) 
        {
            cout <<"Book is available " << endl;
        } 
        else 
        {
            cout <<"Book is not available " << endl;
        }
    }
};

int main()
 {
    Book b;

    b.getBookDetails();
    b.displayBookDetails();
    b.issueBook();

    return 0;
}
