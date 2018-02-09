/*
 * =====================================================================================
 *
 *       Filename:  fig16_09.cpp
 *
 *    Description:  Fig. 16.9: Demonstrating unique_ptr
 *
 *        Version:  1.0
 *        Created:  25/10/16 22:06:49
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Integer.hpp"

#include <iostream>
#include <memory>

int main(int argc, const char *argv[]) {
    std::cout << "Creating a unique_ptr object that points to an Integer\n";

    // "aim" unique_ptr at Integer object
    std::unique_ptr<Integer> ptrToInteger(new Integer(7));

    std::cout << "\nUsing the unique_ptr to manipulate the Integer\n";
    ptrToInteger->setInteger(99);

    // use unique_ptr to get Integer value
    std::cout << "Integer after setInteger: " << (*ptrToInteger).getInteger()
              << "\n\n";

    return 0;
}
