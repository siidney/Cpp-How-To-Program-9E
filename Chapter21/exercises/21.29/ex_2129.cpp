/*
 * =============================================================================
 *
 *       Filename:  ex_2129.cpp
 *
 *    Description:  EXercise 21.29 - Write Your Own String Searching Functions.
 *
 *        Version:  1.0
 *        Created:  17/03/18 09:37:31
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>

#include "custsearch.hpp"

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char str[] = "I'm a string. Look at me.";
    const char ch = 'L';

    char* res = strchr(str, ch);

    printf("String after [%c] is - [%s]\n", ch, res);

    res = strrchr(str, ch);

    printf("Last occurence of [%c] - [%s]\n", ch, res);

    return 0;
}  // end method main
