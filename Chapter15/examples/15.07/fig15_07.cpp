/*
 * =====================================================================================
 *
 *       Filename:  fig15_07.cpp
 *
 *    Description:  Fig. 15.7: Unformatted I/O using read, gcount and write
 *
 *        Version:  1.0
 *        Created:  12/09/16 17:00:13
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

    // use function read to input characters into buffer
    std::cout << "Enter a sentence:" << std::endl;
    std::cin.read(buffer, 20);

    // use functions write and gcount to display buffer characters
    std::cout << std::endl << "The sentence entered was:" << std::endl;
    std::cout.write(buffer, std::cin.gcount());
    std::cout << std::endl;

    return 0;
}
