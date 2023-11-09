#include "../MyString/MyString.h"
#include "../Book/Book.h"
#include <iostream>
using namespace library;

int main() {
    Book b1("1984", "George Orwell", "978-0451524935");
    std::cout << "Title: " << b1.getTitle() << std::endl;
    std::cout << "Author: " << b1.getAuthor() << std::endl;
    std::cout << "ISBN: " << b1.getISBN() << std::endl;
    std::cout << "Status: " << b1.getStatus() << std::endl;

    // Checkout
    std::cout << "\nChecking out the book...\n";
    b1.checkOut();
    std::cout << "Status: " << b1.getStatus() << std::endl;

    // Return
    std::cout << "\nReturning the book...\n";
    b1.returnItem();
    std::cout << "Status: " << b1.getStatus() << std::endl;

    // Copy constructor
    Book b2(b1);
    std::cout << "\nCopied book details:\n";
    std::cout << "Title: " << b2.getTitle() << std::endl;
    std::cout << "Author: " << b2.getAuthor() << std::endl;

    // Assignment operator
    Book b3 = b2;
    std::cout << "\nAssigned book details:\n";
    std::cout << "ISBN: " << b3.getISBN() << std::endl;
    std::cout << "Status: " << b3.getStatus() << std::endl;

    return 0;
}