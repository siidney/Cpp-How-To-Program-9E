/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.h
 *
 *    Description:  Fig. 7.15: Definition of class GradeBook that uses an array
 *                  to store test grades.
 *
 *        Version:  1.0
 *        Created:  19/04/16 18:52:16
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
 public:
    static const int students = 10;

    GradeBook(std::string, const int[]);

    // SETTERS
    void setCourseName(std::string);

    // GETTERS
    std::string getCourseName();

    int getMinimum();
    int getMaximum();

    double getAverage();

    void displayMessage();
    void processGrades();
    void outputBarChart();
    void outputGrades();

 private:
    std::string courseName;

    int grades[students];
};
