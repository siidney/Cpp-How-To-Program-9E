/*
 * =====================================================================================
 *
 *       Filename:  fig07_17.cpp
 *
 *    Description:  Fig. 7.17: Creates GradeBook object using an array of
 *                  grades.
 *
 *        Version:  1.0
 *        Created:  19/04/16 19:09:57
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
    int gradesArray[GradeBook::students] = {87, 68, 94, 100, 83,
                                            78, 85, 91, 76,  87};

    GradeBook myGradeBook("CS101 Introduction to C++ Programming", gradesArray);

    myGradeBook.displayMessage();
    myGradeBook.processGrades();

    return 0;
}
