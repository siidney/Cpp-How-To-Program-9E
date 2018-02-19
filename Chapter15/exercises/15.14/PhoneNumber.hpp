/*
 * =====================================================================================
 *
 *       Filename:  PhoneNumber.hpp
 *
 *    Description:  fig. 11.3: Phone Number class definition
 *
 *        Version:  1.0
 *        Created:  07/07/16 18:22:37
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
#include <string>

class PhoneNumber {
 public:
    friend std::ostream& operator<<(std::ostream&, const PhoneNumber&);
    friend std::istream& operator>>(std::istream&, PhoneNumber&);

 private:
    char pNumber[15] = {};
    std::string areaCode;
    std::string exchange;
    std::string line;
};
