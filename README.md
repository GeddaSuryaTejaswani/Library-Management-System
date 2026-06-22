# Library Management System

## Overview
The Library Management System is a C++ application developed using Object-Oriented Programming (OOP) concepts. It helps manage books, members, and borrowing operations efficiently through a menu-driven interface.

## Features

- Add new books to the library
- Add library members
- Issue books to members
- Return issued books
- Search books by title
- Search books by author
- Display all books
- Display all members
- Track book availability status

## Technologies Used

- C++
- Object-Oriented Programming (OOP)
- STL (Vector, String)

## Project Structure

```text
LibraryManagementSystem/
│
├── main.cpp
├── Library.cpp
├── Library.h
├── Book.cpp
├── Book.h
├── Member.cpp
├── Member.h
└── README.md
```

## Classes

### Book
Stores book details:
- Book ID
- Title
- Author
- Issue Status

### Member
Stores member details:
- Member ID
- Member Name

### Library
Manages:
- Book records
- Member records
- Issue and return operations
- Search functionality

## How to Compile

Using g++:

```bash
g++ main.cpp Library.cpp Book.cpp Member.cpp -o library
```

## How to Run

Windows:

```bash
library.exe
```

Linux/Mac:

```bash
./library
```

## Sample Menu

```text
===== Library Management System =====

1. Add Book
2. Add Member
3. Issue Book
4. Return Book
5. Search By Title
6. Search By Author
7. Display Books
8. Display Members
9. Exit
```

## Learning Outcomes

- Understanding Object-Oriented Programming
- Working with Classes and Objects
- File Organization in C++
- Implementing Search Operations
- Managing Data Using STL Vectors

## Future Enhancements

- File handling for permanent data storage
- Member-wise borrowing records
- Due date and fine calculation
- Admin login system
- Database integration

## Author

**Gedda Surya Tejaswani**

Developed as a C++ project for learning and demonstrating Library Management System operations using Object-Oriented Programming.
