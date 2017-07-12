/*
 * =====================================================================================
 *
 *       Filename:  fig08_07.cpp
 *
 *    Description:  Fig. 8.7: Pass-by-reference with a pointer argument used to
 *                  cube a variable's value
 *
 *        Version:  1.0
 *        Created:  29/04/16 16:33:02
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

void cubeByReference(int *);

int main(int argc, const char *argv[]) {
    int number = 5;

    std::cout << "The original value of number is " << number;

    cubeByReference(&number);

    std::cout << "\nThe new value of number is " << number << std::endl;
    return 0;
}
// calculate the cube of *nPtr; modifies variable number in main
void cubeByReference(int *nPtr) { *nPtr = *nPtr * *nPtr * *nPtr; }
