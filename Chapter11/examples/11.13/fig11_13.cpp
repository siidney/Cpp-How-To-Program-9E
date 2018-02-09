/*
 * =====================================================================================
 *
 *       Filename:  fig11_13.cpp
 *
 *    Description:  Fig. 11.13: Driver for simple class Array
 *
 *        Version:  1.0
 *        Created:  13/07/16 17:51:19
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Array.hpp"

#include <iostream>

int main(int argc, const char* argv[]) {
    Array integers1(7);

    outputArray(integers1);
    outputArray(3);         // convert 3 to an Array and output Array's contents
    outputArray(Array(3));  // explicit single argument constructor call

    return 0;
}
// print Array contents
void outputArray(const Array& arrayToOutput) {
    std::cout << "The Array received has " << arrayToOutput.getSize()
              << " elements. The contents are:\n"
              << arrayToOutput << std::endl;
}
