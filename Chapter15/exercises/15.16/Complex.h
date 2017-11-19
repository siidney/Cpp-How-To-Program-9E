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
using namespace std;


class Complex {
 friend ostream &operator<<( ostream &, const Complex & );
 friend istream &operator>>( istream &, Complex & );


 private:
    int real;
    int imaginary;
};
