/*
 * =====================================================================================
 *
 *       Filename:  Complex.h
 *
 *    Description:  Exercise 15.16 - Complex Class
 *
 *        Version:  1.0
 *        Created:  24/10/16 20:19:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>

class Complex{
    public:
        friend std::ostream& operator<<(std::ostream&, const Complex&);
        friend std::istream& operator>>(std::istream&, Complex&);

    private:
        int real;
        int imaginary;
};
