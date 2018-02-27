/*
 * =============================================================================
 *
 *       Filename:  fig21_23.cpp
 *
 *    Description:  Fig. 21.23: Using strcat and strncat.
 *
 *        Version:  1.0
 *        Created:  27/02/18 10:50:09
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // prototypes for strcat and strncat

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char s1[20] = "Happy ";  // length 6
    char s2[] = "New Year ";  // length 9
    char s3[40] = "";

    std::cout << "s1 = " << s1 << "\ns2 = " << s2;

    strcat(s1, s2);  // concatenate s2 to s1 (length 15)

    std::cout << "\n\nAfter strcat(s1, s2):\ns1 = " << s1 << "\ns2 = " << s2;

    // concatenate first 6 characters of s1 to s3
    strncat(s3, s1, 6);  // places '\0' after last character

    std::cout << "\n\nAfter strncat(s3, s1, 6):\ns1 = " << s1 << "\ns3 = " << s3;

    strcat(s3, s1);  // concatenate s1 to s3
    std::cout << "\n\nAfter strcat(s3, s1):\ns1 = " << s1 << "\ns3 = " << s3 << std::endl;

    return 0;
}  // end method main
