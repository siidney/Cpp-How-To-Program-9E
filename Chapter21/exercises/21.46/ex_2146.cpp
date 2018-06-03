/*
 * =============================================================================
 *
 *       Filename:  ex_2146.cpp
 *
 *    Description:  Exercise 21.46 - Check Protection
 *
 *        Version:  1.0
 *        Created:  03/06/18 04:10:32
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <stdio.h>
#include <string.h>

/**
 * Prints the given dollar amount in check protected format.
 * Presupposes checks have 8 spaces. Fills in the blanks with *.
 * Assumes input is correct.
 * @param const char*
 */
void printProtectedFormat(const char* amount) {
    const size_t MAX_LEN = 8;

    size_t len = (MAX_LEN - strlen(amount));

    // print asterisks
    if (len > 0) {
        for (unsigned int i = 0; i < len; ++i) { putchar('*'); }
    }
    printf("%s\n", amount);
}  // end method printProtectedFormat

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const size_t SIZE = 4;
    const char* amounts[] = {"99.87", "1,230.60", "199.00", ".87"};

    for (size_t i = 0; i < SIZE; ++i) {
        printProtectedFormat(amounts[i]);
    }

    return 0;
}  // end method main
