/*
 * =====================================================================================
 *
 *       Filename:  ex_1108.cpp
 *
 *    Description:  Exercise 11.8: Complex Class
 *
 *        Version:  1.0
 *        Created:  14/07/16 19:52:19
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Complex.hpp"

int main(int argc, const char *argv[]) {
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);

    std::cout << "x: " << x;
    std::cout << "\ny: " << y;
    std::cout << "\nz: " << z;

    x = y + z;
    std::cout << "\n\nx = y + z: " << x << " = " << y << " + " << z;

    x = y - z;
    std::cout << "\n\nx = y - z: " << x << " = " << y << " - " << z;

    x = y * z;
    std::cout << "\n\nx = y * z: " << x << " = " << y << " * " << z;

    std::cout << "\nEnter real and imaginary parts of new z: ";
    std::cin >> z;

    std::cout << "z = " << z << std::endl;

    return 0;
}
