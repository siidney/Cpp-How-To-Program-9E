/*
 * =====================================================================================
 *
 *       Filename:  fig10_24.cpp
 *
 *    Description:  Fig. 10.24: Hiding a class's private data with a proxy class
 *
 *        Version:  1.0
 *        Created:  22/06/16 17:45:08
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Interface.hpp"

#include <iostream>

int main(int argc, const char *argv[]) {
    Interface i(5);

    std::cout << "Interface contains " << i.getValue() << " before setValue"
              << std::endl;

    i.setValue(10);

    std::cout << "Interface contains " << i.getValue() << " after setValue"
              << std::endl;
    return 0;
}
