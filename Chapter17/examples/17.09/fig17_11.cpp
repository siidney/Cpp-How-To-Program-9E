/*
 * =====================================================================================
 *
 *       Filename:  fig17_11.cpp
 *
 *    Description:  Fig. 17.11 - Creating a randomly accessed file.
 *
 *        Version:  1.0
 *        Created:  21/12/16 19:00:41
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "ClientData.hpp"

#include <cstdlib>
#include <fstream>
#include <iostream>

int main(int argc, const char* argv[]) {
    std::ofstream outCredit("credit.dat", std::ios::out | std::ios::binary);

    // exit program if ofstream could not open file
    if (!outCredit) {
        std::cerr << "File could not be opened." << std::endl;
        return 1;
    }

    ClientData blankClient;  // constructor zeros out each data member

    // output 100 blank records to file
    for (int i = 0; i < 100; ++i) {
        outCredit.write(reinterpret_cast<const char*>(&blankClient),
                        sizeof(ClientData));
    }

    return 0;
}
