/*
 * =====================================================================================
 *
 *       Filename:  ex_311.cpp
 *
 *    Description:  Exercise 3.11 - Modifying Class GradeBook
 *                  Modify class GradeBook (3.11-12) as followd:
 *                  a) Include a second string data member that represents the
 *                  course instructor's name.
 *                  b) Provide a set function to change the instructor's name
 *                  and a get function to retrieve it.
 *                  c) Modify the constructor to specify course name and
 *                  instructor name parameters.
 *                  d) Modify function displayMessage to output the welcome
 *                  message and course name, then the string "This course is
 *                  presented by: " followed by the instructor's name.
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
#include "GradeBook.h"

int main(int argc, const char *argv[]) {
    GradeBook gradeBook1("This is a course", "The Instructor");

    gradeBook1.displayMessage();

    return 0;
}
