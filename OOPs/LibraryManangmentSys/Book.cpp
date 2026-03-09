#include "Book.h"

// Constructor
Book::Book(int id, string t, string a) {
    bookId = id;
    title = t;
    author = a;
    isAvelible = true; // By default book is avilable
}

// Getter function
int Book::getId() const {
    return bookId;
}

string Book::getTitle() const {
    return title;
}

bool Book::getAvailability() const {
    return isAvelible;
}

//Issue book
void Book::issueBook() {
    if(isAvelible) {
        isAvelible = false;
        cout << "Bool issued successfully.\n";
    }else{
        cout << "Book is already issued.\n";
    }
}


//Return book
void Book::returnBook() {
    isAvelible = true;
    cout << "Book returned successfully.\n";
}

// Display book details
void Book::display() const {
    cout << "Book ID: " << bookId << endl;
    cout << "Title: " << title << endl; 
    cout << "Author: " << author << endl;
    cout << "Status: "
         <<(isAvelible ? "Avilabe": "Issued") << endl;
}
