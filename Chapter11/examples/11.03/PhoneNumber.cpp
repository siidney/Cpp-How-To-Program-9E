/*
 * =====================================================================================
 *
 *       Filename:  PhoneNumber.cpp
 *
 *    Description:  Fig. 11.4: Overloaded stream insertion and stream extraction
 *                  operators for class PhoneNumber.
 *
 *        Version:  1.0
 *        Created:  07/07/16 18:24:54
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "PhoneNumber.hpp"

#include <iomanip>

// overloaded stream insertion operator; cannot be
// a member function if we would like to invoke it with
// std::cout << somePhoneNumber;
std::ostream& operator<<(std::ostream& out, const PhoneNumber& number) {
    out << "(" << number.areaCode << ") " << number.exchange << "-"
        << number.line;

    return out;
}
// overloaded stream extraction operator; cannot be
// a member function if we would like to invoke it with
// std::cin >> somePhoneNumber;
std::istream& operator>>(std::istream& in, PhoneNumber& number) {
    in.ignore();  // skip (
    in >> std::setw(3) >> number.areaCode;
    in.ignore(2);  // skip ) and space
    in >> std::setw(3) >> number.exchange;
    in.ignore();  // skip dash (-)
    in >> std::setw(4) >> number.line;

    return in;
}
