/*
 * =====================================================================================
 *
 *       Filename:  fig04_10.cpp
 *
 *    Description:  Fig. 4.10: Create GradeBook object and invoke its
 *                  determineClassAverage function.
 *
 *        Version:  1.0
 *        Created:  24/03/16 17:44:49
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "GradeBook.hpp"

int main(int argc, const char *argv[]) {
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();
    return 0;
}
