/*
 * =====================================================================================
 *
 *       Filename:  ex_809.cpp
 *
 *    Description:  Exercise 8.09 - Write C++ Statements
 *
 *        Version:  1.0
 *        Created:  06/05/16 17:27:34
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    long int value1 = 200000;
    long int value2;

    // a) declare a variable longPtr to be a pointer to a object of type long
    long int *longPtr;

    // b) assign the address of variable value1 to pointer variable long Ptr
    longPtr = &value1;

    // c) print the value of the object pointer to by longPtr
    std::cout << *longPtr << std::endl;

    // d) assign the value of the object pointed to by longPtr to variable
    // value2
    value2 = *longPtr;

    // e) print the value of value2
    std::cout << value2 << std::endl;

    // f) print the address of value1
    std::cout << &value1 << std::endl;

    // g) print the address sotred in longPtr
    std::cout << &longPtr << std::endl;

    return 0;
}
