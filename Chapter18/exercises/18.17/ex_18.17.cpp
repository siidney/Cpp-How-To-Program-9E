/*
 * =====================================================================================
 *
 *       Filename:  ex_18.17.cpp
 *
 *    Description:  Exercise 18.17 - Counting Vowels
 *
 *        Version:  1.0
 *        Created:  20/02/17 11:10:57
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
#include <string>

// A E I O U
int totals[5] = {0, 0, 0, 0, 0};

void countVowels(std::string&);
void printResults();

int main(int argc, const char* argv[]) {
    std::cout << "Enter a sentence: ";
    std::string base;

    std::getline(std::cin, base);

    countVowels(base);
    printResults();

    return 0;
}
// tally's number of vowels
void countVowels(std::string& base) {
    std::string::iterator it = base.begin();

    while (it != base.end()) {
        switch (*(it++)) {
            case 'a':
            case 'A':
                totals[0]++;
                break;
            case 'e':
            case 'E':
                totals[1]++;
                break;
            case 'i':
            case 'I':
                totals[2]++;
                break;
            case 'o':
            case 'O':
                totals[3]++;
                break;
            case 'u':
            case 'U':
                totals[4]++;
                break;
            default:
                break;
        }
    }
}
// print results
void printResults() {
    std::cout << std::left << std::setw(4) << "A" << std::setw(4) << "E"
              << std::setw(4) << "I" << std::setw(4) << "O" << std::setw(4)
              << "U" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout << std::setw(4) << totals[i];
    }

    std::cout << std::endl;
}
