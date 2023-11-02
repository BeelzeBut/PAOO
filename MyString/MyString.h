#pragma once
#include <iostream>
#include <cstring>

class MyString {
private:
    char* data;
    size_t length;

public:
    MyString(const char* initString = "");
    MyString(const MyString& other);
    ~MyString();
    MyString& operator=(const MyString& other);
    void print() const;
    size_t getLength() const;
};
