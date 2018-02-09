/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  Fig. 4.13: Member-functino definitions for class GradeBook
 *                  that solves the class average program with
 *                  sentinel-controlled repetition.
 *
 *        Version:  1.0
 *        Created:  24/03/16 17:55:37
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>
#include <string>

#include "GradeBook.hpp"

GradeBook::GradeBook(std::string name) { setCourseName(name); }
// SETTERS
void GradeBook::setCourseName(std::string name) {
    if (name.length() <= 25) {
        courseName = name;
    } else {
        courseName = name.substr(0, 25);
        std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n";
        std::cout << "Limiting courseName to first 25 characters.\n"
                  << std::endl;
    }
}
// GETTERS
std::string GradeBook::getCourseName() { return courseName; }
// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
    std::cout << "Welcome to the grade book for\n"
              << getCourseName() << "!\n"
              << std::endl;
}
// determine class average based on 10 grades entered by user
void GradeBook::determineClassAverage() {
    int total;
    int gradeCounter;
    int grade;

    total = 0;
    gradeCounter = 0;

    std::cout << "Enter grade or -1 to quit: ";
    std::cin >> grade;

    while (grade != -1) {
        total += grade;
        gradeCounter++;

        std::cout << "Enter grade or -1 to quit: ";
        std::cin >> grade;
    }

    // ensure at least 1 grade entered
    if (gradeCounter != 0) {
        // calculate the average of all entered grades
        double average = static_cast<double>(total) / gradeCounter;

        std::cout << "\nTotal of all " << gradeCounter << " grades is " << total
                  << std::endl;
        std::cout << "Class average is " << std::setprecision(2) << std::fixed
                  << average << std::endl;
    } else {
        std::cout << "No grades were entered" << std::endl;
    }
}
