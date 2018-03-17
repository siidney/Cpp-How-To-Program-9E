/*
 * =============================================================================
 *
 *       Filename:  custconversions.hpp
 *
 *    Description:  Exercise 21.28 - Write Your Own String Conversion Functions.
 *                  TODO: FINISH THIS.
 *
 *        Version:  1.0
 *        Created:  17/03/18 09:51:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#pragma once

/**
 * Converts the string nPtr to double.
 * Return 0 on failure.
 * @param const char*
 * @return double
 */
double atof(const char* nPtr) {
    return 0;
}  // end method atof

/**
 * Converts the string nPtr to int.
 * Return 0 on failure.
 * @param const char*
 * @return int
 */
int atoi(const char* nPtr) {
    int sign = 0;
    int n = 0;

    if (nPtr[0] == '-') { sign = -1; }

    int i = ((sign == -1) ? 1 : 0);

    // ensure nPtr is numeric
    for (int j = i; nPtr[j] != '\0'; ++j) {
        if (nPtr[j] < 48 || nPtr[j] > 57) { return n; }
    }

    // perform the conversion
    for (; nPtr[i] != '\0'; ++i) {
        n = n * 10 + (nPtr[i] - '0');
    }

    return ((sign == -1) ? -n : n);
}  // end method atoi

/**
 * Converts the string nPtr to long int.
 * Returns 0 on failure.
 * @param const char*
 * @return long
 */
long atol(const char* nPtr) {
    return 0;
}  // end method atol

/**
 * Converts the string nPtr to double.
 * endPtr is the address of a pointer to the rest of the string after the double.
 * Returns 0 on failure.
 * @param const char*
 * @param char**
 * @return double
 */
double strtod(const char* nPtr, char **endPtr) {
    return 0;
}  // end method strtod

/**
 * Converts the string nPtr to long.
 * endPtr is the address of a pointer to the rest of the string after the long.
 * base indicates the base of the number to convert (octal<8>, dec<10>, hex<16)
 * Default base is decimal.
 * @param conat char*
 * @param char **endPtr
 * @param int base
 * @return long
 */
long strtol(const char* nPtr, char** endPtr, int base) {
    return 0;
}  // end method strtol

/**
 * Converts the string nPtr to unsigned long.
 * endPtr is the address of a pointer to the rest of the string after the long.
 * base indicates the base of the number to convert (octal<8>, dec<10>, hex<16)
 * Default base is decimal.
 * @param conat char*
 * @param char **endPtr
 * @param int base
 * @return unsigned long
 */
unsigned long strtoul(const char* nPtr, char** endPtr, int base) {
    return 0;
}  // end method strtol


