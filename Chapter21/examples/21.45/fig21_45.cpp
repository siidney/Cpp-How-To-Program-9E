/*
 * =============================================================================
 *
 *       Filename:  fig21_45.cpp
 *
 *    Description:  Fig. 21.45: Using memchr
 *
 *        Version:  1.0
 *        Created:  27/02/18 12:03:10
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // memchr prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char s[] = "This is a string";

    std::cout << "s = " << s << "\n" << std::endl;
    std::cout << "The remainder of s after character 'r' is found is \""
              << static_cast<char *>(memchr(s, 'r', 16)) << '\"' << std::endl;

    return 0;
}  // end method main
