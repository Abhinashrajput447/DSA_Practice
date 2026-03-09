#include "Library.h"

void Library::addBook(Book book) {
    books.push_back(book);
}

void Library::registerUser(User* user) {
    users.push_back(user);
}

Book* Library::findBook(int bookId) {
    for(auto &book : books) {
        if(book.getId() == bookId) {
            return &book;
        }
    }
    return nullptr;
}

User* Library::findUser(int userId) {
    for(auto user : users) {
        if(user->getId() == userId)
            return user;
    }
    return nullptr;
}


void Library::issueBook(int userId, int bookId) {
    Book* book = findBook(bookId);
    User* user = findUser(userId);

    if (!book || !user) {
        cout << "Invalid user or book.\n";
        return;
    }

    if (!book->getAvailability()) {
        cout << "Book already issued.\n";
        return;
    }

    if (!user->canIssue()) {
        cout << "User reached book limit.\n";
        return;
    }

    book->issueBook();
    user->addBook(bookId);
}

void Library::returnBook(int userId, int bookId) {
    Book* book = findBook(bookId);
    User* user = findUser(userId);

    if (!book || !user) {
        cout << "Invalid user or book.\n";
        return;
    }

    book->returnBook();
    user->removeBook(bookId);
}

void Library::displayBooks() const {
    for(const auto &book : books) {
        book.display();
        cout << "------------------------------\n";
    }
}