/*
 * =====================================================================================
 *
 *       Filename:  ex_316.cpp
 *
 *    Description:  Exercise 3.16 - Target-Heart-Rate Calculator
 *
 *        Version:  1.0
 *        Created:  23/03/16 19:39:20
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "HeartRates.hpp"

int main(int argc, const char *argv[]) {
    HeartRates heartRates1("Billy", "Bunson", 11, 23, 1956);
    heartRates1.displayInformation();

    HeartRates heartRates2("Sue", "Sueson", 5, 13, 1983);
    heartRates2.displayInformation();
    return 0;
}
