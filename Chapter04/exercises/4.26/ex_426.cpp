/*
 * =====================================================================================
 *
 *       Filename:  ex_426.cpp
 *
 *    Description:  Exercise 4.26 - Palindromes
 *
 *        Version:  1.0
 *        Created:  27/03/16 03:05:27
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

bool isPalindrome(int);

int main(int argc, const char *argv[]) {
    int num = 0;

    std::cout << "A program to determine if a 5 digit integer is a palindrome\n"
              << std::endl;

    std::cout << "Enter a 5 digit integer: ";
    std::cin >> num;

    printf("%d is%sa palindrome\n", num, (isPalindrome(num)) ? " " : " not ");

    return 0;
}
// check if number is a palindrome
bool isPalindrome(int num) {
    if ((num / 10000) == (num % 10)) {
        num /= 10000;
        num /= 10;

        if ((num / 10) == (num % 10)) {
            return true;
        }
    }

    return false;
}
