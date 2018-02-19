/*
 * =====================================================================================
 *
 *       Filename:  DoubleScriptedArray.hpp
 *
 *    Description:  Exercise 11.7: Overloading the Parenthesis Operator
 *
 *        Version:  1.1
 *        Created:  11/07/16 16:32:02
 *       Revision:  14/07/16 17:43:40
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>

class DoubleScriptedArray {
    friend std::ostream& operator<<(std::ostream&, const DoubleScriptedArray&);
    friend std::istream& operator>>(std::istream&, DoubleScriptedArray&);

 public:
    explicit DoubleScriptedArray(int = 10, int = 0);           // default constructor
    DoubleScriptedArray(const DoubleScriptedArray&);  // copy constructor
    ~DoubleScriptedArray();

    int getSize() const;

    DoubleScriptedArray& operator=(const DoubleScriptedArray&);
    bool operator==(const DoubleScriptedArray&) const;

    // inequality operator; returns result of == operator
    bool operator!=(const DoubleScriptedArray& right) const {
        return !(*this == right);  // invokes DoubleScriptedArray::operator==
    }

    // subscript operator for non-const objects return modifiable lvalue
    int& operator()(unsigned int, unsigned int);

    // subscript operator for const objects returns rvalue
    int& operator()(unsigned int, unsigned int) const;

 private:
    size_t COLS;
    size_t ROWS;
    size_t size;

    int* arrPtr;  // pointer to first element of pointer based array
};
