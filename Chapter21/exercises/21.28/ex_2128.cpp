/*
 * =============================================================================
 *
 *       Filename:  ex_2128.cpp
 *
 *    Description:  Exercise 21.28 - Write your Own String Conversion Functions.
 *                  TODO: FINISH THIS.
 *
 *        Version:  1.0
 *        Created:  15/03/18 10:53:45
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>

// int atoi(const char *nPtr)
//  converts nPtr to int, otherwise return 0.
int atoi(const char *nPtr) {
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
}
// double atof(const char *nPtr)
//  converts nPtr to double, otherwise return 0.
// long atol(const char *nPtr)
//  converts nPtr to long int, otherwise return 0.
// double strtod(const char *nPtr)
//  converts nPtr to double, otherwise return 0.
//  endPtr is the address of a pointer to the rest of the string after the double.
// long strtol(const char *nPtr, char **endPtr, int base)
//  converts nPtr to long, otherwise return 0.
//  endPtr is the address of a pointer to the rest of the string after the double.
//  base indicates the base of the number to convert (8 octal, 10 dec, 16 hex. default is decimal)
// unsigned long strtoul(const char* nPtr, char **endPtr, int base)
//  converts nPtr to unsigned long, otherwise return 0.
//  endPtr is the address of a pointer to the rest of the string after the double.
//  base indicates the base of the number to convert (8 octal, 10 dec, 16 hex. default is decimal)

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char c[5] = "1234";
    char c2[5] = "abcd";

    printf("char: %s\tint: %d\n", c, atoi(c));
    printf("char: %s\tint: %d\n", c2, atoi(c2));

    strncpy(c, "123.4", sizeof(c));

    return 0;
}  // end method main
