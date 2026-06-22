#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
public:
    int bookID;
    string title;
    string author;
    bool issued;

    Book();
    Book(int id, string title, string author);
};

#endif