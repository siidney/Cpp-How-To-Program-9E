/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  Fig. 3.12: GradeBook member-function definitions.
 *                  This file contains implementations of the member functions
 *                  prototyped in GradeBook.h
 *
 *        Version:  1.0
 *        Created:  20/03/16 19:37:07
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "GradeBook.hpp"

#include <iostream>
#include <string>

// Constructor
GradeBook::GradeBook(const std::string &name) { setCourseName(name); }
// SETTERS
void GradeBook::setCourseName(const std::string &name) { courseName = name; }
// GETTERS
std::string GradeBook::getCourseName() { return courseName; }
// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
    std::cout << "Welcome to the grade book for\n"
              << getCourseName() << "!" << std::endl;
}
