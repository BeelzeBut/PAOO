#pragma once
#include "../MyString/MyString.h"

class Book {
private:
    MyString title;
    MyString author;
    MyString ISBN;
    MyString status;

public:
    Book(const char* title, const char* author, const char* ISBN, const char* status = "available");
    Book(const Book& other);

    Book& operator=(const Book& other);

    MyString getTitle() const;
    MyString getAuthor() const;
    MyString getISBN() const;
    MyString getStatus() const;

    void checkout();
    void returnBook();
};
