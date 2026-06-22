#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Member.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Member> members;

public:
    void addBook();
    void addMember();

    void issueBook();
    void returnBook();

    void searchByTitle();
    void searchByAuthor();

    void displayBooks();
    void displayMembers();
};

#endif