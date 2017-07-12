/*
 * =====================================================================================
 *
 *       Filename:  fig15_05.cpp
 *
 *    Description:  Fig. 15.05: Contrasting input of a string via cin and
 *                  cin.get
 *
 *        Version:  1.0
 *        Created:  12/09/16 16:30:09
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
    // create two char arrays, each with 80 elements
    const int SIZE = 80;
    char buffer1[SIZE];
    char buffer2[SIZE];

    // use cin to input characters into buffer1
    std::cout << "Enter a sentence:" << std::endl;
    std::cin >> buffer1;

    // display buffer1 contents
    std::cout << "\nThe string read with cin was:" << std::endl
              << buffer1 << std::endl
              << std::endl;

    // use cin.get to input character into buffer2
    std::cin.get(buffer2, SIZE);

    // display buffer2 contents
    std::cout << "The string read with cin.get was:" << std::endl
              << buffer2 << std::endl;

    return 0;
}
