/*
 * =====================================================================================
 *
 *       Filename:  fig08_18.cpp
 *
 *    Description:  Fig. 8.18: Using subscripting and pointer notations with
 *                  arrays.
 *
 *        Version:  1.0
 *        Created:  06/05/16 16:00:19
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
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;

    // output array b using array subscript notation
    std::cout << "Array b printed with:\n\nArray subscript notation\n";

    for (int i = 0; i < 4; ++i) {
        std::cout << "b[" << i << "] = " << b[i] << std::endl;
    }

    // output array b using the array name and pointer/offset notation
    std::cout
        << "\nPointer/offset notation where the pointer is the array name\n";

    for (int offset1 = 0; offset1 < 4; ++offset1) {
        std::cout << "*(b + " << offset1 << ") = " << *(b + offset1)
                  << std::endl;
    }

    // output array b using bPtr and array subs cript notation
    std::cout << "\nPointer subscript notation" << std::endl;

    for (int i = 0; i < 4; ++i) {
        std::cout << "bPtr[" << i << "] = " << bPtr[i] << std::endl;
    }

    // output array b using bPtr and pointer/offset notation
    std::cout << "\nPointer/offset notation" << std::endl;

    for (int offset2 = 0; offset2 < 4; ++offset2) {
        std::cout << "*(bptr * " << offset2 << ") = " << *(bPtr + offset2)
                  << std::endl;
    }

    return 0;
}
