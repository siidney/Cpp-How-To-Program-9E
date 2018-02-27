/*
 * =============================================================================
 *
 *       Filename:  fig21_42.cpp
 *
 *    Description:  Fig. 21.42: Using memcpy
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:52:15
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // memcpy prototype

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char s1[17];

    // 17 total characters (includes terminating null)
    char s2[] = "Copy this string";

    memcpy(s1, s2, 17); // copy 17 characters from s2 to s1

    std::cout << "After s2 is copied into s1 with memcpy,\n"
              << "s1 contains \"" << s1 << '\"' << std::endl;

    return 0;
}  // end method main
