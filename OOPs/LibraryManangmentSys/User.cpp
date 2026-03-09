#include "User.h"

User::User(int id, string n) {
    userId = id;
    name = n;
}

int User::getId() const {
    return userId;
}

string User::getName() const {
    return name;
}

bool User::canIssue() const{
    return true; //base user has no restrictin 
}

void User::addBook(int bookId) {
    issuedBooks.push_back(bookId);
}

void User::removeBook(int bookId) {
    for(int i=0; i<issuedBooks.size(); i++) {
        if(issuedBooks[i] == bookId) {
            issuedBooks.erase(issuedBooks.begin()+i);
        }
    }
}

void User::display() const {
    cout << "User ID: " << userId << endl;
    cout << "Name: " << name << endl;
    cout << "Issued Book Count: " << issuedBooks.size() << endl; 
}