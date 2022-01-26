#include <iostream>
#include <cstdlib>
#include "Books_lib.h"
using namespace std;


int main()
{
    int number;
    char choice;
    int i=0;
    Books book1("Harry Potter and Philosopher's stone", "J.K.Rowling", 1997, 240);
    //book1.print();

    Books book2(book1); /// call of our copy constructor
    cout << "Copy of our book1 into book2 \n";
    //book2.print();


    cout << "\n\nHow many books have you read?: "; cin >>number;
    cout << "Do you want to share them with us? \n";

    Books *B = new Books[number];

    do
    {
        B[i].reader();

        cout << "Do you want to give one more book's info? (y/n): ";
        cin >>choice;
        ++i;
    }
    while (choice == 'Y' || choice == 'y' && i < number);


    for(int i=0; i<number; ++i)
    {
        B[i].print();
        cout << endl;
    }

    /// if you have created objects dynamically, you have to release the memory yourself!

    for(int i=0; i<number; ++i)
    {

    }
    return 0;
}
