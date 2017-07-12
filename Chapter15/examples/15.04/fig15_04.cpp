/*
 * =====================================================================================
 *
 *       Filename:  fig15_04.cpp
 *
 *    Description:  Fig. 15.4: Using member functions get, put and eof
 *
 *        Version:  1.0
 *        Created:  12/09/16 16:21:06
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
    int character;  // user int, because char cannot represent EOF

    // prompt user to enter line of text
    std::cout << "Before input, cin.eof() is " << std::cin.eof() << std::endl
              << "Enter a sentence followed by end-of-file:" << std::endl;

    // use get to read each character; use put to display it
    while ((character = std::cin.get()) != EOF) std::cout.put(character);

    // display end-of-file character
    std::cout << "\nEOF in this system is: " << character << std::endl;
    std::cout << "After input of EOF, cin.eof() is " << std::cin.eof()
              << std::endl;
    return 0;
}
