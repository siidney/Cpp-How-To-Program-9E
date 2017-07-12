/*
 * =====================================================================================
 *
 *       Filename:  fig15_03.cpp
 *
 *    Description:  Fig. 15.3: Printing the address stored in a char * variable
 *
 *        Version:  1.0
 *        Created:  12/09/16 15:51:11
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char* argv[]) {
    const char* const word = "again";

    // display value of char *, then display value of char *
    // static_cast to void *
    std::cout << "Value of word is: " << word << std::endl
              << "Value of static_cast<void*>(word) is: "
              << static_cast<void*>(word) << std::endl;

    return 0;
}
