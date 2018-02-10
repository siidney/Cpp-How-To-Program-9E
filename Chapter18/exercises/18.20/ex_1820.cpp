/*
 * =====================================================================================
 *
 *       Filename:  ex_1820.cpp
 *
 *    Description:  Exercise 18.20 - Replacing Punctuation and Tokenizing
 *                  strings
 *
 *        Version:  1.0
 *        Created:  20/02/17 16:40:07
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstring>
#include <iostream>
#include <string>

int main(int argc, const char *argv[]) {
    const char *punc_marks = ";,.:\"!?()[]{}-_'/";
    const char char2 = ' ';

    std::cout << "Enter a string: ";

    std::string base;
    std::getline(std::cin, base);

    size_t pos = base.find_first_of(punc_marks, 0);

    while (pos != std::string::npos) {
        base[pos] = char2;
        pos = base.find_first_of(punc_marks, pos + 1);
    }

    // duplicate then tokenize string
    char *dup = strdup(base.c_str());
    char *pch = strtok(dup, " ");

    while (pch != nullptr) {
        std::cout << pch << std::endl;
        pch = strtok(nullptr, " ");
    }

    free(dup);

    return 0;
}
