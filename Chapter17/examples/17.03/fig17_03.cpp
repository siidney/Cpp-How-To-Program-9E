/*
 * =====================================================================================
 *
 *       Filename:  fig17_03.cpp
 *
 *    Description:  Fig. 17.3: Create a Sequential File
 *
 *        Version:  1.0
 *        Created:  28/10/16 16:05:45
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, const char *argv[]) {
    // ofstream constructor opens file
    std::ofstream outClientFile("clients.txt", std::ios::out);

    // exit program if unable to create file
    if (!outClientFile) {  // overloaded ! operator
        std::cerr << "File could not be opened" << std::endl;
        return 0;
    }

    std::cout << "Enter the account, name, and balance." << std::endl
              << "Enter end-of-file to end input.\n? ";

    int account;
    std::string name;
    double balance;

    // read account, name and balance from cin, then place in file
    while (std::cin >> account >> name >> balance) {
        outClientFile << account << ' ' << name << ' ' << balance << std::endl;
        std::cout << "? ";
    }

    return 0;
}
