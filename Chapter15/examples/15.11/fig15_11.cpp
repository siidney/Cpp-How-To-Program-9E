/*
 * =====================================================================================
 *
 *       Filename:  fig15_11.cpp
 *
 *    Description:  Fig. 15.11: Creating and testing user-defined,
 *                  nonparametised stream manipulators.
 *
 *        Version:  1.0
 *        Created:  12/09/16 18:20:26
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

// bell manipulator (using escape sequence \a)
std::ostream& bell(std::ostream& output) {
    return output << '\a';  // issue system beep
}

// carriageReturn manipulator (using escape sequence \r)
std::ostream& carriageReturn(std::ostream& output) {
    return output << '\r';  // issue carriage return
}

// tab manipulator (using escape sequence \t)
std::ostream& tab(std::ostream& output) { return output << '\t'; }

// endLine manipulator (using escape sequence \n and member function flush)
std::ostream& endLine(std::ostream& output) {
    return output << '\n' << std::flush;
}

int main(int argc, const char* argv[]) {
    // use tab and endLine manipulators
    std::cout << "Testing the tab manipulator:" << endLine << 'a' << tab << 'b'
              << tab << 'c' << endLine;

    std::cout << bell;  // use bell manipulator

    // use carriageReturn and newLine manipulators
    std::cout << carriageReturn << "-----" << endLine;

    return 0;
}
