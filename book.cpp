#include "Book.h"

Book::Book() {
    bookID = 0;
    title = "";
    author = "";
    issued = false;
}

Book::Book(int id, string title, string author) {
    this->bookID = id;
    this->title = title;
    this->author = author;
    issued = false;
}