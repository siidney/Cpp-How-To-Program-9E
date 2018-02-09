/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.hpp
 *
 *    Description:  Fig. 3.11: GradeBook class definition.
 *
 *        Version:  1.0
 *        Created:  20/03/16 19:25:08
 *       Revision:  20/03/16 20:43:33
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
    std::string instructorName;

 public:
    GradeBook(const std::string &, const std::string &);

    // SETTERS
    void setCourseName(const std::string &);
    void setInstructorName(const std::string &);

    // GETTERS
    std::string getCourseName();
    std::string getInstructorName();

    void displayMessage();
};
