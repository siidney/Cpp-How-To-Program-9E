/*
 * =====================================================================================
 *
 *       Filename:  fig03_03.cpp
 *
 *    Description:  Fig. 3.3: Define class GradeBook with a member function that
 *                  takes a parameter, create a GradeBook object and call its
 *                  displayMessage function.
 *
 *        Version:  1.0
 *        Created:  11/03/16 23:38:38
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

// GradeBook class definition
class GradeBook {
 public:
    void displayMessage(const std::string &courseName) {
        std::cout << "Welcome to the grade book for\n"
                  << courseName << "!" << std::endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::string nameOfCourse;
    GradeBook myGradeBook;

    // prompt for and input course name
    std::cout << "Please enter the course name: ";
    std::getline(std::cin, nameOfCourse);  // read a course name with blanks
    std::cout << std::endl;

    // call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage(nameOfCourse);
    return 0;
}
