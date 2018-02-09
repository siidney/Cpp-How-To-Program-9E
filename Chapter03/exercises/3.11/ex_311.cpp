/*
 * =====================================================================================
 *
 *       Filename:  ex_311.cpp
 *
 *    Description:  Exercise 3.11 - Modifying Class GradeBook
 *
 *        Version:  1.0
 *        Created:  20/03/16 20:30:29
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
    GradeBook gradeBook1("This is a course", "The Instructor");

    gradeBook1.displayMessage();

    return 0;
}
