/*
 * =============================================================================
 *
 *       Filename:  fig21_24.cpp
 *
 *    Description:  Fig. 21.24: Using strcmp and strncmp.
 *
 *        Version:  1.0
 *        Created:  27/02/18 10:55:09
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <iomanip>
#include <cstring>  // prototypes for strcmp and strncmp

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char *s1 = "Happy New Year";
    char *s2 = "Happy New Year";
    char *s3 = "Happy Holidays";

    std::cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns3 = " << s3
              << "\n\nstrcmp(s1, s2) = " << std::setw(2) << strcmp(s1, s2)
              << "\n\nstrcmp(s1, s3) = " << std::setw(2) << strcmp(s1, s3)
              << "\n\nstrcmp(s3, s1) = " << std::setw(2) << strcmp(s3, s1);

    std::cout << "\n\nstrncmp(s1, s3, 6) = " << std::setw(2) << strncmp(s1, s3, 6)
              << "\nstrncmp(s1, s3, 7) = " << std::setw(2) << strncmp(s1, s3, 7)
              << "\nstrncmp(s3, s1, 7) = " << std::setw(2) << strncmp(s3, s1, 7)
              << std::endl;
    return 0;
}  // end method main
