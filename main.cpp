#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library library;
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Add Member\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search By Title\n";
        cout << "6. Search By Author\n";
        cout << "7. Display Books\n";
        cout << "8. Display Members\n";
        cout << "9. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                library.addBook();
                break;

            case 2:
                library.addMember();
                break;

            case 3:
                library.issueBook();
                break;

            case 4:
                library.returnBook();
                break;

            case 5:
                library.searchByTitle();
                break;

            case 6:
                library.searchByAuthor();
                break;

            case 7:
                library.displayBooks();
                break;

            case 8:
                library.displayMembers();
                break;

            case 9:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 9);

    return 0;
}