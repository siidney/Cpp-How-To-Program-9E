/*
 * =====================================================================================
 *
 *       Filename:  fig06_19.cpp
 *
 *    Description:  Fig. 6.19: Comparing pass-by-value and pass-by-reference
 *                  with references.
 *
 *        Version:  1.0
 *        Created:  11/04/16 13:47:11
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int squareByValue(int);
void squareByReference(int &);

int main(int argc, const char *argv[]) {
    int x = 2;
    int z = 4;

    // demonstrate squareByValue
    std::cout << "x = " << x << " before squareByValue\n";
    std::cout << "Value returned by squareByValue: " << squareByValue(x)
              << std::endl;
    std::cout << "x = " << x << " after squareByValue\n" << std::endl;

    // demonstrate squareByReference
    std::cout << "z = " << z << " before squareByReference\n";
    squareByReference(z);
    std::cout << "z = " << z << " after squareByReference\n";

    return 0;
}
// squareByValue multiplies number by itself, stores the result in number and
// returns the new value of number
int squareByValue(int number) { return number *= number; }
// squareByReference multiplies numberRef by itself and stores the result in the
// variable to which numberRef refers in the main function
void squareByReference(int &numberRef) { numberRef *= numberRef; }
