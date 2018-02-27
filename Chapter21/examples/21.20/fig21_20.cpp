/*
 * =============================================================================
 *
 *       Filename:  fig21_20.cpp
 *
 *    Description:  Fig. 21.20: Using functions isspace, iscntrl, ispunct,
 *                  isprint and isgraph.
 *
 *        Version:  1.0
 *        Created:  27/02/18 10:35:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cctype>  // character-handling function prototypes

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    std::cout << "According to isspace:\nNewline "
              << (isspace('\n') ? "is a" : "is not a")
              << "whitespace character\nHorizontal tab "
              << (isspace('\t') ? "is a" : "is not a")
              << "whitespace character\n"
              << (isspace('%') ? "% is a" : "% is not a")
              << "whitespace character\n";

    std::cout << "\nAccording to iscntrl:\nNewline "
              << (iscntrl('\n') ? "is a" : "is not a") << " control character\n"
              << (iscntrl('$') ? "$ is a" : "$ is not a") << " control character\n";

    std::cout << "\nAccording to ispunt:\n"
              << (ispunct(';') ? "; is a" : "; is not a") << "punctuation character\n"
              << (ispunct('Y') ? "Y is a" : "Y is not a") << "punctuation character\n"
              << (ispunct('#') ? "# is a" : "# is not a") << "punctuation character\n";

    std::cout << "\nAccording to isprint:\n"
              << (isprint('$') ? "$ is a" : "$ is not a") << " printing character\nAlert "
              << (isprint('\a') ? "is a" : "is not a") << " printing character\nSpace "
              << (isprint(' ') ? "is a" : "is not a") << " printing character\n";

    std::cout << "\nAccording to isgraph:\n"
              << (isgraph('Q') ? "Q is a" : "Q is not a")
              << " printing character other than a space\nSpace "
              << (isgraph(' ') ? "is a" : "is not a")
              << " printing character other than a space" << std::endl;
    return 0;
}  // end method main
