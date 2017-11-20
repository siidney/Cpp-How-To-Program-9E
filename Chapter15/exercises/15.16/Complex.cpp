/*
 * =====================================================================================
 *
 *       Filename:  Complex.cpp
 *
 *    Description:  Exercise 15.16 - Complex Class
 *
 *        Version:  1.0
 *        Created:  24/10/16 20:22:05
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Complex.h"
using namespace std;

ostream &operator<<( ostream &output, const Complex &complex) 
{
    output << complex.real;
    output << showpos << complex.imaginary << noshowpos << 'i' << endl;
    return output;
}

istream &operator>>( istream &input, Complex &complex)
{    
    int a = 0;
    int b = 0;
    char c;

    cin >> a;
    
    if ( cin.peek() == 'i' ) //numbers without real part like '16i'
    {
        complex.real = 0;
        complex.imaginary = a;
        return input;
    }

    while ( cin.good() && ( c=cin.get() ) != '\n' )    
        if ( c == '+' || c == '-' )
        {
            cin >> b;
            if ( c == '-' )
                b *= -1;// for negative imaginary part
            break;
        }

    complex.real = a;
    complex.imaginary = b;

    return input;
}
