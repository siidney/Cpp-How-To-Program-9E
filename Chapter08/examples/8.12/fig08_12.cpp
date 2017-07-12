/*
 * =====================================================================================
 *
 *       Filename:  fig08_12.cpp
 *
 *    Description:  Fig. 8.12: Constant Pointer to Constant Data
 *                  Attempting to modify a constant pointer to constant data.
 *
 *        Version:  1.0
 *        Created:  04/05/16 19:17:24
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
    int x = 5, y;

    // ptr is a constant pointer to a constant integer.
    // ptr always points to the same location; the integer at that location
    // cannot be modified
    const int *const ptr = &x;

    std::cout << *ptr << std::endl;

    *ptr = 7;  // error: *ptr is const; cannot assign new value
    ptr = &y;  // error: ptr is const; cannot assign new address.

    return 0;
}
