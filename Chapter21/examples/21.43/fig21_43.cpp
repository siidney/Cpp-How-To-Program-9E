/*
 * =============================================================================
 *
 *       Filename:  fig21_43.cpp
 *
 *    Description:  Fig. 21.43: Using memove.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:54:40
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // memove prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char x[] = "Home Sweet Home";

    std::cout << "The string in array x before memove is: " << x;
    std::cout << "\nThe string in array x after memove is: "
              << static_cast<char *>(memmove(x, &x[5], 10)) << std::endl;

    return 0;
}  // end method main
