/*
 * =====================================================================================
 *
 *       Filename:  fig11_11.cpp
 *
 *    Description:  Fig. 11.08: Date class test program
 *
 *        Version:  1.0
 *        Created:  11/07/16 14:24:38
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Date.hpp"

#include <iostream>

int main(int argc, const char *argv[]) {
    Date d1(12, 27, 2010);
    Date d2;

    std::cout << "d1 is " << d1 << "\nd2 is " << d2;
    std::cout << "\n\nd1 += 7 is " << (d1 += 7);

    d2.setDate(2, 28, 2008);
    std::cout << "\n\n  d2 is " << d2;
    std::cout << "\n++d2 is " << ++d2 << " (leap year allows 29th)";

    Date d3(7, 13, 2010);

    std::cout << "\n\nTesting the prefix increment operator:\n"
              << "  d3 is " << d3 << std::endl;
    std::cout << "++d3 is " << ++d3 << std::endl;
    std::cout << "  d3 is " << d3;

    std::cout << "\n\nTesting the postfix increment operator:\n"
              << "  d3 is " << d3 << std::endl;
    std::cout << "d3++ is " << d3++ << std::endl;
    std::cout << "  d3 is " << d3 << std::endl;

    return 0;
}
