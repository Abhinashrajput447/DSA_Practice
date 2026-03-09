#include "Library.h"
#include "Student.h"

int main() {

    Library lib;

    lib.addBook(Book(101, "C++", "Bjarne"));
    lib.addBook(Book(102, "DSA", "CLRS"));

    Student* s1 = new Student(1, "Abhinash");

    lib.registerUser(s1);

    lib.issueBook(1, 101);
    lib.issueBook(1, 102);
    lib.issueBook(1, 103);  // invalid
    lib.issueBook(1, 101);  // already issued

    lib.displayBooks();

    return 0;
}