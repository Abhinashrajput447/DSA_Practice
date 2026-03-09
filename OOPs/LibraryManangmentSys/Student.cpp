#include "Student.h"

Student::Student(int id, string n)
    : User(id, n) {}

bool Student::canIssue() const {
    return issuedBooks.size() < 3;   // max 3 books
}