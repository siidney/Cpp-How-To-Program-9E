/*
 * =====================================================================================
 *
 *       Filename:  fig06_05.cpp
 *
 *    Description:  Fig. 6.5: Create GradeBook object, intput grades and display
 *                  grade report.
 *
 *        Version:  1.0
 *        Created:  11/04/16 10:30:12
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
