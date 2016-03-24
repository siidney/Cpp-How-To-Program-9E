/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.h
 *
 *    Description:  Fig. 3.11: GradeBook class definition.
 *                  This file presents GradeBook's public interface without
 *                  revealing the implementations of GradeBook's member
 *                  functions, which are defined in GradeBook.cpp
 *
 *        Version:  1.0
 *        Created:  20/03/16 19:25:08
 *       Revision:  20/03/16 20:43:33
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <string>

class GradeBook{
    private:
        std::string courseName;
        std::string instructorName;

    public:
        GradeBook(std::string, std::string);

        // SETTERS
        void setCourseName(std::string);
        void setInstructorName(std::string);

        // GETTERS
        std::string getCourseName();
        std::string getInstructorName();

        void displayMessage();
};
