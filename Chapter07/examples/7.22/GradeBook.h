/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.h
 *
 *    Description:  Fig. 7.22: Definition of class GradeBook that uses a
 *                  two-dimensional array to store test grades.
 *
 *        Version:  1.0
 *        Created:  20/04/16 19:01:21
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
    // constants
    static const int students = 10;
    static const int tests = 3;

    GradeBook(std::string, const int[][tests]);

    // SETTERS
    void setCourseName(std::string);

    // GETTERS
    std::string getCourseName();
    int getMinimum();
    int getMaximum();
    double getAverage(const int[], const int);

    void displayMessage();
    void processGrades();
    void outputBarChart();
    void outputGrades();

 private:
    std::string courseName;

    int grades[students][tests];
};
