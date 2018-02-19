/*
 * =====================================================================================
 *
 *       Filename:  ex_1107.cpp
 *
 *    Description:  Exercise 11.7: Overloading the Parenthesis Operator
 *
 *        Version:  1.0
 *        Created:  13/07/16 18:01:34
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "DoubleScriptedArray.hpp"

int main(int argc, const char *argv[]) {
    DoubleScriptedArray intArray(10, 2);

    intArray(1, 1) = 3;

    std::cout << "intArray\n" << intArray;

    std::cout << "intArray(1,1): " << intArray(1, 1) << std::endl;

    DoubleScriptedArray intArray2 = intArray;

    intArray2(0, 5) = 15;
    intArray2(1, 9) = 7;
    std::cout << "intArray2\n" << intArray2;

    return 0;
}
