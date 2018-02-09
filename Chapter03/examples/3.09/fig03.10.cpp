/*
 * =====================================================================================
 *
 *       Filename:  fig03.10.cpp
 *
 *    Description:  Fig. 3.10: Including class GradeBook for file GradeBook.h
 *                  for use in main.
 *
 *        Version:  1.0
 *        Created:  12/03/16 00:14:46
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include "GradeBook.hpp"

// function main begins program excution
int main(int argc, const char *argv[]) {
    // create two GradeBook objects
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("Cs102 Data Structures in C++");

    // display initial value of courseName for each GradeBook
    std::cout << "gradeBook1 created for course: "
              << gradeBook1.getCourseName();
    std::cout << "\ngradeBook2 created for course: "
              << gradeBook2.getCourseName() << std::endl;
    return 0;
}
