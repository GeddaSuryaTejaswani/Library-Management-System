#include <iostream>
#include "Library.h"

using namespace std;

void Library::addBook() {
    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Author: ";
    getline(cin, author);

    books.push_back(Book(id, title, author));

    cout << "Book Added Successfully!\n";
}

void Library::addMember() {
    int id;
    string name;

    cout << "Enter Member ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Member Name: ";
    getline(cin, name);

    members.push_back(Member(id, name));

    cout << "Member Added Successfully!\n";
}

void Library::issueBook() {
    int id;

    cout << "Enter Book ID to Issue: ";
    cin >> id;

    for (auto &book : books) {
        if (book.bookID == id) {
            if (!book.issued) {
                book.issued = true;
                cout << "Book Issued Successfully!\n";
            } else {
                cout << "Book Already Issued!\n";
            }
            return;
        }
    }

    cout << "Book Not Found!\n";
}

void Library::returnBook() {
    int id;

    cout << "Enter Book ID to Return: ";
    cin >> id;

    for (auto &book : books) {
        if (book.bookID == id) {
            if (book.issued) {
                book.issued = false;
                cout << "Book Returned Successfully!\n";
            } else {
                cout << "Book Was Not Issued!\n";
            }
            return;
        }
    }

    cout << "Book Not Found!\n";
}

void Library::searchByTitle() {
    string title;

    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, title);

    bool found = false;

    for (auto &book : books) {
        if (book.title == title) {
            cout << "\nBook Found\n";
            cout << "ID: " << book.bookID << endl;
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "Status: "
                 << (book.issued ? "Issued" : "Available")
                 << endl;

            found = true;
        }
    }

    if (!found)
        cout << "Book Not Found!\n";
}

void Library::searchByAuthor() {
    string author;

    cin.ignore();
    cout << "Enter Author: ";
    getline(cin, author);

    bool found = false;

    for (auto &book : books) {
        if (book.author == author) {
            cout << "\nBook Found\n";
            cout << "ID: " << book.bookID << endl;
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "Status: "
                 << (book.issued ? "Issued" : "Available")
                 << endl;

            found = true;
        }
    }

    if (!found)
        cout << "Book Not Found!\n";
}

void Library::displayBooks() {
    if (books.empty()) {
        cout << "No Books Available!\n";
        return;
    }

    cout << "\n===== Books =====\n";

    for (auto &book : books) {
        cout << "ID: " << book.bookID
             << " | Title: " << book.title
             << " | Author: " << book.author
             << " | Status: "
             << (book.issued ? "Issued" : "Available")
             << endl;
    }
}

void Library::displayMembers() {
    if (members.empty()) {
        cout << "No Members Available!\n";
        return;
    }

    cout << "\n===== Members =====\n";

    for (auto &member : members) {
        cout << "ID: " << member.memberID
             << " | Name: " << member.name
             << endl;
    }
}