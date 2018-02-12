/*
 * =====================================================================================
 *
 *       Filename:  ex_732.cpp
 *
 *    Description:  Exercise 7.32 - Palindromes
 *
 *        Version:  1.1
 *        Created:  26/04/16 13:29:30
 *       Revision:  12/02/18 04:09:37
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

bool testPalindrome(const std::string &, int, int start = 0);

int main(int argc, const char *argv[]) {
    std::string test1 = "not a palindrome";
    std::string test2 = "able was i ere i saw elba";
    std::string test3 = "stressed rats on paws swap no star desserts";

    std::cout << "A program to recursively test if strings are palindromes\n\n";

    std::cout << ((testPalindrome(test1, test1.length() - 1)) ? "TRUE: "
                                                              : "FALSE: ")
              << test1 << std::endl;
    std::cout << ((testPalindrome(test2, test2.length() - 1)) ? "TRUE: "
                                                              : "FALSE: ")
              << test2 << std::endl;
    std::cout << ((testPalindrome(test3, test3.length() - 1)) ? "TRUE: "
                                                              : "FALSE: ")
              << test3 << std::endl;

    return 0;
}

/*
 * Tests if given string is palindrome
 * @param const std::string&
 * @param int
 * @param int start = 0
 * @return bool
 */
bool testPalindrome(const std::string &st, int end, int start) {
    // only one char
    if (start >= end) { return true; }

    // start and end do not match
    if (st[start] != st[end]) { return false; }

    return testPalindrome(st, --end, ++start);
}
