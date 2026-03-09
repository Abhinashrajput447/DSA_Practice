#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book {
private:
    int bookId;
    string title;
    string author;
    bool isAvelible;

public:
    // Constructor
    Book(int id, string t, string a); 

    // Getters
    // const => this function will not modify object data
    int getId() const;
    string getTitle() const;
    bool getAvailability() const; 

    // Book operations
    void issueBook();
    void returnBook();

    // Display
    void display() const;
};

#endif


