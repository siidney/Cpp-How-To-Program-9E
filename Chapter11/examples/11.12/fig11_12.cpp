/*
 * =====================================================================================
 *
 *       Filename:  fig11_12.cpp
 *
 *    Description:  Fig. 11.12: Driver for simple class Array
 *
 *        Version:  1.0
 *        Created:  13/07/16 17:47:53
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

void outputArray(const Array&);

int main(int argc, const char* argv[]) {
    Array integers1(7);

    outputArray(integers1);
    outputArray(1);  // convert 3 to an Array and output Array's contents
    return 0;
}
// print Array contents
void outputArray(const Array& arrayToOutput) {
    std::cout << "The Array received has " << arrayToOutput.getSize()
              << " elements. The contents are:\n"
              << arrayToOutput << std::endl;
}
