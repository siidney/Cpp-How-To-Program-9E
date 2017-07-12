/*
 * =====================================================================================
 *
 *       Filename:  fig18_09.cpp
 *
 *    Description:  Fig. 18-09 - Converting to C-style strings.
 *
 *        Version:  1.0
 *        Created:  09/02/17 17:21:30
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

int main(int argc, const char *argv[]) {
    std::string string1("STRINGS");  // string constructor with char* array
    const char *ptr1 = 0;            // initialise *ptr1
    int length = string1.length();
    char *ptr2 = new char[length + 1];  // including null

    // copy characters from string1 into allocated memory
    string1.copy(ptr2, length, 0);  // copy string1 to ptr2 char*
    ptr2[length] = '\0';            // add null terminator

    std::cout << "string string1 is " << string1
              << "\nstring1 converted to a C-stryle string is "
              << string1.c_str() << "\nptr1 is ";

    // Assign to pointer ptr1 the const char * returned by
    // function data(). NOTE: this is a potentially dangerous
    // assignment. If string1 is modified, pointer ptr1 can
    // become invalid.
    ptr1 = string1.data();

    // output each character using pointer
    for (int i = 0; i < length; ++i)
        std::cout << *(ptr1 + i);  // user pointer arithmetic

    std::cout << "\nptr2 is " << ptr2 << std::endl;

    delete[] ptr2;  // reclaim dynamically allocated memory

    return 0;
}
