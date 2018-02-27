/*
 * =============================================================================
 *
 *       Filename:  fig21_46.cpp
 *
 *    Description:  Fig. 21.46: Using memset.
 *
 *        Version:  1.0
 *        Created:  27/02/18 12:05:30
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // memset prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char string1[15] = "BBBBBBBBBBBBBB";

    std::cout << "string1 = " << string1 << std::endl;
    std::cout << "string1 after memset = "
              << static_cast<char *>(memset(string1, 'b', 7)) << std::endl;

    return 0;
}  // end method main
