/*
 * =====================================================================================
 *
 *       Filename:  fig15_06.cpp
 *
 *    Description:  fig. 15.16: Inputting characters using cin member function
 *                  getline
 *
 *        Version:  1.0
 *        Created:  12/09/16 16:50:14
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    const int SIZE = 80;
    char buffer[SIZE];

    // input characters in buffer via cin function getline
    std::cout << "Enter a sentence:" << std::endl;
    std::cin.getline(buffer, SIZE);

    // display buffer contents
    std::cout << "\nThe sentence entered is:" << std::endl
              << buffer << std::endl;

    return 0;
}
