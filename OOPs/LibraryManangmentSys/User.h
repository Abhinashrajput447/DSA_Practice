#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class User {
protected:
    int userId;
    string name;
    vector<int> issuedBooks;  // store book IDs

public:
    User(int id, string n);

    int getId() const;
    string getName() const;

    virtual bool canIssue() const;  // for polymorphism
    void addBook(int bookId);
    void removeBook(int bookId);


    virtual void display() const;

    virtual ~User() {};
};

#endif