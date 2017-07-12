/*
 * =====================================================================================
 *
 *       Filename:  ex_427.cpp
 *
 *    Description:  Exercise 4.27 - Printing the Decimal Equivalent of a Binary
 *                  Number.
 *
 *        Version:  1.0
 *        Created:  27/03/16 03:23:33
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int binaryToDecimal(int);

int main(int argc, const char *argv[]) {
    int binNum = 0;

    std::cout << "Printing the decimal equivalent of a binary number\n";

    std::cout << "Enter a binary number for decimal conversion: ";
    std::cin >> binNum;

    printf("%d as decimal = %d\n", binNum, binaryToDecimal(binNum));

    return 0;
}
// returns the decimal equivalent of a binary number
int binaryToDecimal(int bin) {
    int decimal = 0;
    int value = 1;

    while (bin != 0) {
        decimal += (bin % 10) * value;

        bin /= 10;
        value += value;
    }

    return decimal;
}
