/*
 * =============================================================================
 *
 *       Filename:  ex_2140.cpp
 *
 *    Description:  Exercise 21.40 - Write Your Own String Copy and Concatenation
 *                  Functions.
 *
 *        Version:  1.0
 *        Created:  26/03/18 13:17:57
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>

#include "custcopycatsub.hpp"

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char str1[15];
    char str2[15];

    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");

    int ret = strncmp(str1, str2, 4);

    if (ret < 0) {
        printf("str1 < str2\n");
    } else if (ret > 0) {
        printf("str2 < str1\n");
    } else {
        printf("str1 == str2\n");
    }


    return 0;
}  // end method main
