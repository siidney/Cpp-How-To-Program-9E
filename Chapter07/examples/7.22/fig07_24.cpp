/*
 * =====================================================================================
 *
 *       Filename:  fig07_24.cpp
 *
 *    Description:  Fig. 7.24: Creates GradeBook object using a two-dimensional
 *                  array of grades.
 *
 *        Version:  1.0
 *        Created:  20/04/16 19:22:21
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
    int gradesArray[GradeBook::students][GradeBook::tests] = {
        {87, 96, 70}, {68, 87, 90}, {94, 100, 90}, {100, 81, 82}, {83, 65, 85},
        {78, 87, 65}, {85, 75, 83}, {91, 94, 100}, {76, 72, 84},  {87, 93, 73}};

    GradeBook myGradeBook("CS101 Introduction to C++ Programming", gradesArray);

    myGradeBook.displayMessage();
    myGradeBook.processGrades();

    return 0;
}
