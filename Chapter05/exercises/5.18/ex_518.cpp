/*
 * =====================================================================================
 *
 *       Filename:  ex_518.cpp
 *
 *    Description:  Exercise 5.18 - Number Systems Table
 *
 *        Version:  1.0
 *        Created:  05/04/16 18:02:07
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
    std::cout << "Binary\tOctal\tHexadecimal\n";

    for (int i = 1; i <= 256; i++) {
        std::cout << std::dec << i << "\t" << std::oct << i << "\t" << std::hex
                  << i << std::endl;
    }
    return 0;
}
