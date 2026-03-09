#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"

//Student Class (Inheritance + Polymorphism)
//Students can issue max 3 books.

class Student : public User {
public:
    Student(int id, string n);

    bool canIssue() const override;   // override rule
};

#endif