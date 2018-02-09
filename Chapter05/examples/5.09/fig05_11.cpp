/*
 * =====================================================================================
 *
 *       Filename:  fig05_11.cpp
 *
 *    Description:  Fig. 5.11: Create GradeBook object, input grades and display
 *                  grade report.
 *
 *        Version:  1.0
 *        Created:  04/04/16 17:04:22
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
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();

    return 0;
}
