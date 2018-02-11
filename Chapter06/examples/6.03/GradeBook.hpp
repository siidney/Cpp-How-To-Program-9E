/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.hpp
 *
 *    Description:  Fig. 6.3: Definition of class GradeBook that find the
 *                  maximum of three grades.
 *                  Member functions are defined in GradeBook.cpp
 *
 *        Version:  1.0
 *        Created:  11/04/16 10:20:29
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
    int maximumGrade;

 public:
    GradeBook(std::string);

    // SETTERS
    void setCourseName(std::string);

    // GETTERS
    std::string getCourseName();

    void displayMessage();
    void inputGrades();
    void displayGradeReport();
    int maximum(int, int, int);
};
