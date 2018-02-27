/*
 * =============================================================================
 *
 *       Filename:  fig21_22.cpp
 *
 *    Description:  Fig. 21.22: Using strcpy and strncpy.
 *
 *        Version:  1.0
 *        Created:  27/02/18 10:46:40
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // prototypes for strcpy and strncpy

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char x[] = "Happy Birthday to You";  // string length 21
    char y[25];
    char z[15];

    strcpy(y, x);  // copy contents of x into y

    std::cout << "The string in array x is: " << x
              << "\nThe string in array y is: " << y << '\n';

    // copy first 14 characters of x into z
    strncpy(z, x, 14);  // does not copy null character
    z[14] = '\0';

    std::cout << "The string in array z is: " << z << std::endl;

    return 0;
}  // end method main
