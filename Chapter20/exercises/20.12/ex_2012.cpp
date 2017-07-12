/*
 * =====================================================================================
 *
 *       Filename:  ex_2012.cpp
 *
 *    Description:  Exercise 20.12 - Infix-to-Postfix Conversion
 *
 *        Version:  1.0
 *        Created:  13/06/17 15:24:42
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Stack.h"

#include <iostream>
#include <string>

/*
 * Tests whether given character is a valid arithmetic operation
 * @param   char        character to test
 * @return  bool        result
 */
bool isOperator(const char& c) {
    switch (c) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        case '%':
            return true;
        break;
        default:
            return false;
        break;
    }
}

/**
 * Checks whether the precedence of a is greater than b.
 * @param operator1.
 * @param operator2.
 * @return result.
 */
bool precedence(const char& operator1, const char& operator2) {
    switch (operator1) {
        case '+':
        case '-':
            return ((operator2 == '-') || (operator2 == '+'));
        case '*':
        case '/':
        case '%':
            return ((operator2 == '*') || (operator2 == '/') || (operator2 == '%')
                   || (operator2 == '+') || (operator2 == '-'));
        case '^':
            return true;
        default:
            return false;
    }
}

/**
 * Tests whether given char is a left parenthesis.
 * @param c.
 * @return result.
 */
bool isParenthesis(const char& c) {
    return (c == '(');
}
int main(int argc, const char* argv[]) {
    std::string infix;
    Stack<char> postfixStack;

    std::cout << "Enter infix expression: ";
    std::getline(std::cin, infix);

    std::cout << infix << std::endl;

    for (char& c : infix) {
        std::cout << c << std::endl;
    }

    return 0;
}
