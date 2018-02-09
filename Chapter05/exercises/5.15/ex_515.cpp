/*
 * =====================================================================================
 *
 *       Filename:  ex_515.cpp
 *
 *    Description:  Exercise 5.15 - GradeBook Modification
 *
 *        Version:  1.0
 *        Created:  05/04/16 17:31:54
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
    GradeBook myGradeBook("Course Name");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();

    return 0;
}
