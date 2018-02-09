/*
 * =====================================================================================
 *
 *       Filename:  ex_420.cpp
 *
 *    Description:  Exercise 4.20 - Validating User Input
 *
 *        Version:  1.1
 *        Created:  27/03/16 02:25:57
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
    int passes = 0;
    int failures = 0;
    int studentCounter = 1;
    int result;

    while (studentCounter++ <= 10) {
        std::cout << "Enter result (" << (studentCounter - 1) << "/10) (1 = pass, 2 = fail) ";
        std::cin >> result;

        if (result == 1) {
            ++passes;
        } else if (result == 2) {
            ++failures;
        } else {
            --studentCounter;
            continue;
        }
    }

    std::cout << "Passed " << passes << "\nFailed " << failures << std::endl;

    // determine whether more than 8 students passed
    if (passes > 8) {
        std::cout << "Bonus to instructor!" << std::endl;
    }
    return 0;
}
