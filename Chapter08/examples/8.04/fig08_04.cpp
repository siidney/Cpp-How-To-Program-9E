/*
 * =====================================================================================
 *
 *       Filename:  fig08_04.cpp
 *
 *    Description:  Fig. 8.4: Pointer operators & and *
 *
 *        Version:  1.0
 *        Created:  29/04/16 16:04:23
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    std::cout << "The address of &a is " << &a << "\nThe value of aPtr is "
              << aPtr;

    std::cout << "\n\nThe value of a is " << a << "\nThe value of *aPtr is "
              << *aPtr;

    std::cout << "\n\nShowing that * and & are inverses of each other."
              << "\n&*aPtr = " << &*aPtr << "\n*&aPtr = " << *&aPtr
              << std::endl;
    return 0;
}
