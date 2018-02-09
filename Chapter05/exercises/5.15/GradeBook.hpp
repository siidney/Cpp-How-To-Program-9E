/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.hpp
 *
 *    Description:  Fig. 5.9: Definition of class GradeBook that counts A, B, C,
 *                  D and F grades. Member functions are defined in
 *                  GradeBook.cpp.
 *
 *        Version:  1.0
 *        Created:  04/04/16 16:52:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>
#include <string>

class GradeBook {
 private:
    std::string courseName;
    int aCount;
    int bCount;
    int cCount;
    int dCount;
    int fCount;

 public:
    explicit GradeBook(std::string);

    // SETTERS
    void setCourseName(std::string);

    // GETTERS
    std::string getCourseName() const;

    void displayMessage() const;
    void inputGrades();
    void displayGradeReport() const;
};
