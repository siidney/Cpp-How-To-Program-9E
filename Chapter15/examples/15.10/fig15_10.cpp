/*
 * =====================================================================================
 *
 *       Filename:  fig15_10.cpp
 *
 *    Description:  Fig. 15.10: Demonstrating member function width
 *
 *        Version:  1.0
 *        Created:  12/09/16 18:05:54
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
    int widthValue = 4;
    char sentence[10];

    std::cout << "Enter a sentence:" << std::endl;
    std::cin.width(5);  // input only 5 characters from sentence

    // set field width, then display characters based on that width
    while (std::cin >> sentence) {
        std::cout.width(widthValue++);
        std::cout << sentence << std::endl;
        std::cin.width(5);  // input 5 more characters from sentence
    }

    return 0;
}
