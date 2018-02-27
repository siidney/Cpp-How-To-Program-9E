/*
 * =============================================================================
 *
 *       Filename:  fig21_19.cpp
 *
 *    Description:  Fig. 21.19: Character-handling functions islower, isupper,
 *                  tolower and toupper.
 *
 *        Version:  1.0
 *        Created:  27/02/18 10:26:47
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cctype>

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    std::cout << "According to islower;\n"
              << (islower('p') ? "p is a" : "p is not a") << " lowercase letter\n"
              << (islower('P') ? "P is a" : "P is not a") << " lowercase letter\n"
              << (islower('S') ? "S is a" : "S is not a") << " lowercase letter\n"
              << (islower('!') ? "! is a" : "! is not a") << " lowercase letter\n";

    std::cout << "\nAccording to isupper:\n"
              << (isupper('D') ? "D is an" : "D is not an") << " uppercase letter\n"
              << (isupper('d') ? "d is an" : "d is not an") << " uppercase letter\n"
              << (isupper('8') ? "8 is an" : "8 is not an") << " uppercase letter\n"
              << (isupper('$') ? "$ is an" : "$ is not an") << " uppercase letter\n";

    std::cout << "\nu converted to uppercase is " << static_cast<char>(toupper('u'))
              << "\n7 converted to uppercase is " << static_cast<char>(toupper('7'))
              << "\n$ converted to uppercase is " << static_cast<char>(toupper('$'))
              << "\nL converted to lowercase is " << static_cast<char>(tolower('L'));

    return 0;
}  // end method main
