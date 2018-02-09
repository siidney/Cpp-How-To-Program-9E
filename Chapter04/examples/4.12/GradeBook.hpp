/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.hpp
 *
 *    Description:  Fig. 4.12: Definition of class GradeBook that determines a
 *                  class average. Member functions are defined in
 *                  GradeBook.cpp.
 *
 *        Version:  1.0
 *        Created:  24/03/16 17:54:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <string>

class GradeBook {
 private:
    std::string courseName;

 public:
    explicit GradeBook(std::string);

    // SETTERS
    void setCourseName(std::string);

    // GETTERS
    std::string getCourseName();

    void displayMessage();
    void determineClassAverage();
};
