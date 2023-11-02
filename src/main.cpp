#include "../MyString/MyString.h"
#include <iostream>

int main() {
    // Constructor
    MyString str1("Hello, World!");
    std::cout << "str1: ";
    str1.print();
    std::cout << std::endl;

    // Copy constructor
    MyString str2 = str1;
    std::cout << "str2 (copy of str1): ";
    str2.print();
    std::cout << std::endl;

    // Assignment operator
    MyString str3 = "Assignment Operator";
    str3 = str1;
    std::cout << "str3 (assigned from str1): ";
    str3.print();
    std::cout << std::endl;

    // getLength function
    std::cout << "Length of str1: " << str1.getLength() << std::endl;
    std::cout << "Length of str2: " << str2.getLength() << std::endl;
    std::cout << "Length of str3: " << str3.getLength() << std::endl;

    return 0;
}
