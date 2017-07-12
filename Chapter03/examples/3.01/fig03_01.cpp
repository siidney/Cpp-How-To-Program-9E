/*
 * =====================================================================================
 *
 *       Filename:  fig03_01.cpp
 *
 *    Description:  Fig. 3.1: Define class GradeBook with a member function
 *                  displayMessage, create a GradeBook object, and call its
 *                  displayMessage function.
 *
 *        Version:  1.0
 *        Created:  11/03/16 23:22:02
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

// GradeBook class definition
class GradeBook {
 public:
    // function that displays a welcome message to the Gradebook user
    void displayMessage() {
        std::cout << "Welcome to the Grade Book!" << std::endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    GradeBook myGradeBook;  // create a GradeBook object named myGradeBook

    myGradeBook.displayMessage();

    return 0;
}
