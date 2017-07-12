/*
 * =====================================================================================
 *
 *       Filename:  ex_1816.cpp
 *
 *    Description:  Exercise 18.16 - Counting Palindromes
 *
 *        Version:  1.0
 *        Created:  20/02/17 10:38:24
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <sstream>
#include <string>

int totalPalindromes(const std::string&);
bool isPalindrome(std::string&);

int main(int argc, const char* argv[]) {
    std::cout << "Enter a sentence: ";
    std::string base;

    std::getline(std::cin, base);

    std::cout << "\nYour sentence contains " << totalPalindromes(base)
              << " Palindromes." << std::endl;

    return 0;
}
// count and return total palindromes in given sentence
int totalPalindromes(const std::string& base) {
    std::stringstream ss(base);
    std::string word;
    int total = 0;

    while (std::getline(ss, word, ' ')) {
        total += ((isPalindrome(word)) ? 1 : 0);
    }

    return total;
}
// test if word is palindrome
bool isPalindrome(std::string& word) {
    std::string test = "";

    if (word.length() != 1) {
        std::string::reverse_iterator rit = word.rbegin();

        while (rit != word.rend()) {
            test += *(rit++);
        }
    }

    return (word == test);
}
