#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "User.h"
#include <vector>

class Library {
private:
    vector<Book> books;
    vector<User*> users;

    Book* findBook(int bookId);
    User* findUser(int userId);

public:
    void addBook(Book book);
    void registerUser(User* user);

    void issueBook(int userId, int bookId);
    void returnBook(int userId, int bookId);

    void displayBooks() const;
};
#endif