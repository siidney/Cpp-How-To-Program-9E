/*
 * =====================================================================================
 *
 *       Filename:  ex_1405.cpp
 *
 *    Description:  Exercise 14.05 - Function Template Overloading
 *                  Neat tabular column format is pointless imho so this is the
 *                  best you're going to get.
 *
 *        Version:  1.0
 *        Created:  05/09/16 19:01:51
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

// function template printArray definition
template <typename T>
void printArray(const T* const array, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
// non template printArray char definition
void printArray(const char* array, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << std::setw(2) << array[i];

        if (array[i] == ' ') { std::cout << "\n"; }
    }
    std::cout << std::endl;
}
int main(int argc, const char* argv[]) {
    const int CSIZE = 10;

    char charArr[CSIZE] = {'T', 'H', 'I', 'S', ' ', 'I', 'S', ' ', 'A', 'N'};

    printArray(charArr, CSIZE);

    return 0;
}
