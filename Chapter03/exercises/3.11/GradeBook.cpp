/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  Fig. 3.12: GradeBook member-function definitions.
 *
 *        Version:  1.0
 *        Created:  20/03/16 19:37:07
 *       Revision:  20/03/16 20:43:17
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

#include "GradeBook.hpp"

// Constructor
GradeBook::GradeBook(const std::string &name, const std::string &instructor) {
    setCourseName(name);
    setInstructorName(instructor);
}
// SETTERS
void GradeBook::setCourseName(const std::string &name) { courseName = name; }
void GradeBook::setInstructorName(const std::string &instructor) { instructorName = instructor; }

// GETTERS
std::string GradeBook::getCourseName() { return courseName; }
std::string GradeBook::getInstructorName() { return instructorName; }

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
    std::cout << "Welcome to the grade book for: " << getCourseName() << "!\n"
              << "This course is presented by: " << getInstructorName()
              << std::endl;
}
