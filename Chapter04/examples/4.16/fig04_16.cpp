/*
 * =====================================================================================
 *
 *       Filename:  fig04_16.cpp
 *
 *    Description:  Fig. 4.16: Examination-results problem: Nested control
 *                  statements.
 *
 *        Version:  1.0
 *        Created:  24/03/16 19:09:55
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

    while (studentCounter <= 10) {
        std::cout << "Enter result (1 = pass, 2 = fail) ";
        std::cin >> result;

        if (result == 1) {
            passes++;
        } else {
            failures++;
        }

        studentCounter++;
    }

    std::cout << "Passed " << passes << "\nFailed " << failures << std::endl;

    // determine whether more than 8 students passed
    if (passes > 8) {
        std::cout << "Bonus to instructor!" << std::endl;
    }

    return 0;
}
