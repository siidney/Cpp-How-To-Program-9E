/*
 * =====================================================================================
 *
 *       Filename:  ex_654.cpp
 *
 *    Description:  Exercise 6.54 - Function Template maximum
 *
 *        Version:  1.0
 *        Created:  16/04/16 15:06:11
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

template <typename T>
T maximum(T num1, T num2) {
    return (num1 > num2) ? num1 : num2;
}

int main(int argc, const char *argv[]) {
    std::cout << "Template testing using int, float and char" << std::endl;

    // int
    std::cout << "maximum(58, 78): " << maximum(58, 78) << std::endl;
    // char
    std::cout << "maximum('A', '#'): " << maximum('A', '#') << std::endl;
    // double
    std::cout << "maximum(1.359, 1.3598): " << maximum(1.359, 1.3598)
              << std::endl;

    return 0;
}
