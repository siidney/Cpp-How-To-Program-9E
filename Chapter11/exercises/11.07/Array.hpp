/*
 * =====================================================================================
 *
 *       Filename:  Array.hpp
 *
 *    Description:  Fig. 11.10: Array class definition with overloaded
 *                  operators.
 *
 *        Version:  1.0
 *        Created:  11/07/16 16:32:02
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

class Array {
    friend std::ostream& operator<<(std::ostream&, const Array&);
    friend std::istream& operator>>(std::istream&, Array&);

 public:
    explicit Array(int = 10);      // default constructor
    Array(const Array&);  // copy constructor
    ~Array();

    int getSize() const;

    Array& operator=(const Array&);
    bool operator==(const Array&) const;

    // inequality operator; returns result of == operator
    bool operator!=(const Array& right) const {
        return !(*this == right);  // invokes Array::operator==
    }

    // subscript operator for non-const objects return modifiable lvalue
    int& operator[](int);

    // subscript operator for const objects returns rvalue
    int& operator[](int) const;

 private:
    int size;
    int* ptr;  // pointer to first element of pointer based array
};
