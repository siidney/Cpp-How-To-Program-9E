/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.h
 *
 *    Description:  Fig. 3.15: GradeBook class definitions presents the public
 *                  interface of the class.
 *                  Member-function definitions appear in GradeBook.cpp.
 *
 *        Version:  1.0
 *        Created:  20/03/16 19:59:38
 *       Revision:  none
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
    public:
        GradeBook(std::string);

        // SETTERS
        void setCourseName(std::string);

        // GETTERS
        std::string getCourseName();

        void displayMessage();
};
