/*
 * =====================================================================================
 *
 *       Filename:  fig05_18.cpp
 *
 *    Description:  Fig. 5.18: Logical Operators
 *
 *        Version:  1.0
 *        Created:  04/04/16 16:24:56
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    // create truth table for && (logical AND) operator
    std::cout << std::boolalpha << "Logical AND (&&)"
              << "\nfalse && false : " << (false && false)
              << "\nfalse && true  : " << (false && true)
              << "\ntrue  && false : " << (true && false)
              << "\ntrue  && true  : " << (true && true) << "\n\n";

    // create truth table for || (logical OR) operator
    std::cout << "Logical OR (||)"
              << "\nfalse || false : " << (false || false)
              << "\nfalse || true  : " << (false || true)
              << "\ntrue  || false : " << (true || false)
              << "\ntrue  || true  : " << (true || true) << "\n\n";

    // create truth table for ! (logical negation) operator
    std::cout << "Logical NOT (!)"
              << "\n!false : " << (!false) << "\n!true  : " << (!true)
              << std::endl;
    return 0;
}
