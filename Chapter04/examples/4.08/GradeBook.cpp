/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  Fig. 4.9: Member-functino definitions for class GradeBook
 *                  that solves the class average program with
 *                  counter-controlled repition.
 *
 *        Version:  1.0
 *        Created:  24/03/16 17:29:26
 *       Revision:  none
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
    int average;

    total = 0;
    gradeCounter = 1;

    while (gradeCounter <= 10) {
        std::cout << "Enter grade: ";
        std::cin >> grade;
        total += grade;
        gradeCounter++;
    }

    average = total / 10;

    std::cout << "\nTotal of all 10 grades is " << total << std::endl;
    std::cout << "Class average is " << average << std::endl;
}
