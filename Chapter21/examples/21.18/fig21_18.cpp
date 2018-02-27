/*
 * =============================================================================
 *
 *       Filename:  fig21_18.cpp
 *
 *    Description:  Fig. 21.18: Character-handling functions isdigit, isalpha
 *                  and isxdigit.
 *
 *        Version:  1.0
 *        Created:  27/02/18 10:06:08
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
    std::cout << "According to isdigit:\n"
              << (isdigit('8') ? "8 is a" : "8 is not a") << " digit\n"
              << (isdigit('#') ? "# is a" : "# is not a") << " digit\n";

    std::cout << "\nAccording to isalpha:\n"
              << (isalpha('A') ? "A is a" : "A is not a") << " letter\n"
              << (isalpha('b') ? "b is a" : "b is not a") << " letter\n"
              << (isalpha('&') ? "& is a" : "& is not a") << " letter\n"
              << (isalpha('4') ? "4 is a" : "4 is not a") << " letter\n";

    std::cout << "\nAccording to isalum:\n"
              << (isalnum('A') ? "A is a" : "A is not a") << " digit or a letter\n"
              << (isalnum('8') ? "8 is a" : "8 is not a") << " digit or a letter\n"
              << (isalnum('#') ? "# is a" : "# is not a") << " digit or a letter\n";

    std::cout << "\nAccording to isxdigit:\n"
              << (isxdigit('F') ? "F is a" : "F is not a") << " hexadecimal digit\n"
              << (isxdigit('J') ? "J is a" : "J is not a") << " hexadecimal digit\n"
              << (isxdigit('7') ? "7 is a" : "7 is not a") << " hexadecimal digit\n"
              << (isxdigit('$') ? "$ is a" : "$ is not a") << " hexadecimal digit\n"
              << (isxdigit('f') ? "f is a" : "f is not a") << " hexadecimal digit\n";

    return 0;
}  // end method main
