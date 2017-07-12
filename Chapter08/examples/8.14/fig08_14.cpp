/*
 * =====================================================================================
 *
 *       Filename:  fig08_14.cpp
 *
 *    Description:  Fig. 8.14: Sizeof Operator when used on an array name
 *                  returns the number of bytes in the array.
 *
 *        Version:  1.0
 *        Created:  05/05/16 16:50:02
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

size_t getSize(double *);

int main(int argc, const char *argv[]) {
    double array[20];

    std::cout << "The number of bytes in the array is " << sizeof(array);

    std::cout << "\nThe number of bytes return by getSize() is "
              << getSize(array) << std::endl;

    return 0;
}
// return size of ptr
size_t getSize(double *ptr) { return sizeof(ptr); }
