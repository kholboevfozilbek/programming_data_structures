/// interface of my data structure

#include <iostream>
#include <string>
using namespace std;

struct Books
{
private:
    string title;
    string author;
    int year;
    int page;

public:

    Books();
    Books(string T, string A, int Y, int P);
    Books(const Books &o);
    ~Books();

    void setTitle(string new_title);
    void setAuthor(string new_author);
    void setYear(int new_year);
    void setpage(int new_page);
    string getTitle();
    string getAuthor();
    int getYear();
    int getPage();

    void reader();
    void print();


};
