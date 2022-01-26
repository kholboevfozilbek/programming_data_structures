
#include <iostream>
#include <stdexcept>
#include "Books_lib.h"
using namespace std;

void Books::print()
{
    cout << "Book title:  " << this->title << endl;
    cout << "Book author:  " << this->author << endl;
    cout << "Year published:  " << this->year << endl;
}

Books::Books()
{
    title = "";
    author = "";
    year = 0;
    page = 0;
}

Books::~Books()
{
    cout << "\n\nDestruction of object \n\n" << this->title;

}

Books::Books(const Books &o)
{
    this->author = o.author;
    this->title = o.title;
    this->year = o.year;
    this->page = o.page;
}

Books::Books(string T, string A, int Y, int P)
{
    this->title = T;
    this->author = A;
    this->year = Y;
    this->page = P;
}

void Books::reader()
{
    cout << "Enter your books informations!!\n";
    cout << "Enter book's title: ";
    cin >> title;
    cout << "Enter book's author: ";
    cin >>author;
    cout << "Enter published year: ";
    cin >>year;
}

void Books::setTitle(string new_title)
{
    title = new_title;
}

void Books::setAuthor(string new_author)
{
    author = new_author;
}

void Books::setYear(int new_year)
{
    if (this->year < 0 || this->year > 2021) throw logic_error("Wrong information (year) entered!!!");
    year = new_year;
}
void Books::setpage(int new_page)
{
    if (this->page < 0 || this->page > 100000) throw logic_error("Wrong information is entered!! ");

    this->page = new_page;
}

string Books::getTitle()
{
    return this->title;
}
string Books::getAuthor()
{
    return this->author;
}
int Books::getYear()
{
    return this->year;
}
int Books::getPage()
{
    return this->page;
}
