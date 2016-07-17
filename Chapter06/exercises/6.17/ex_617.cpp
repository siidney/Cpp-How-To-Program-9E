/*
 * =====================================================================================
 *
 *       Filename:  ex_617.cpp
 *
 *    Description:  Exercise 6.17 - Random Numbers
 *
 *        Version:  1.0
 *        Created:  12/04/16 00:02:35
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, const char *argv[]){
    srand(time(NULL));

    std::cout << "Random number from each of the following sets: " << std::endl;
    std::cout << "\n2 4 6 8 10: " << 2 * (rand() % 5 + 1)
              << "\n2 5 7 9 11: " << 1 + (rand() % 5 + 1)
              << "\n6 10 14 18 22: " << 2 * (1 + (rand() % 5 + 1)) << std::endl;

    return 0;
}
