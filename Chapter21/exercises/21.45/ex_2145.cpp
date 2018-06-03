/*
 * =============================================================================
 *
 *       Filename:  ex_2145.cpp
 *
 *    Description:  Exercise 21.45 - Printing Dates in Various Formats
 *
 *        Version:  1.0
 *        Created:  30/05/18 16:07:33
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <string.h>

/*
 * Generic struct to hold date.
 */
typedef struct Date {
    const char* months[12] = {"January", "February", "March", "April", "May", "June",
                              "July", "August", "September", "October", "November", "December"};

    unsigned int day: 5;    // 1 - 31 {16, 8, 4, 2, 1}
    unsigned int month: 4;  // 1 - 12 {8, 4, 2, 1}
    unsigned int year;
} Date; // end struct NewDate

/**
 * Prints the given date (MM/DD/YYYY) as MMMM, DD, YYYY
 * Assumes input is correct
 * @param const char*
 */
void printDate(const char* str) {
    struct Date date;

    char* ptr = NULL;

    date.month = strtol(str, &ptr, 10) - 1;

    ptr++;

    date.day = strtol(ptr, &ptr, 10);

    ptr++;

    date.year = strtol(ptr, &ptr, 10);

    printf("%s %d, %d\n", date.months[date.month], date.day, date.year);
}  // end method printDate

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const size_t SIZE = 5;
    const char* dates[5] = {"07/21/1995", "11/21/1995", "05/30/1644", "09/12/1985", "07/21/2013"};

    for (size_t i = 0; i < SIZE; ++i) { printDate(dates[i]); }

    return 0;
}  // end method main
