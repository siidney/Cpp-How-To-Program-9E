/*
 * =====================================================================================
 *
 *       Filename:  ex_1707.cpp
 *
 *    Description:  Exercise 17.07 - File Matching Test Data
 *
 *        Version:  1.0
 *        Created:  01/02/17 18:48:13
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, const char* argv[]) {
    // open oldmast.dat for output (and creation)
    std::ofstream outOldMaster("oldmast.dat", std::ios::out);

    outOldMaster << 100 << " "
                 << "Alan"
                 << " "
                 << "Jones"
                 << " " << 348.17 << std::endl;
    outOldMaster << 300 << " "
                 << "Mary"
                 << " "
                 << "Smi.hpp"
                 << " " << 27.19 << std::endl;
    outOldMaster << 500 << " "
                 << "Sam"
                 << " "
                 << "Sharp"
                 << " " << 0.00 << std::endl;
    outOldMaster << 700 << " "
                 << "Suzy"
                 << " "
                 << "Green"
                 << " " << -14.22 << std::endl;

    // open trans.dat for output (and creation)
    std::ofstream outTransaction("trans.dat", std::ios::out);

    outTransaction << 100 << " " << 27.14 << std::endl;
    outTransaction << 300 << " " << 62.11 << std::endl;
    outTransaction << 700 << " " << 80.78 << std::endl;
    outTransaction << 700 << " " << 1.53 << std::endl;

    return 0;
}
