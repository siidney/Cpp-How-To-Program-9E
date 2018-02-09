/*
 * =====================================================================================
 *
 *       Filename:  DivideByZeroException.h
 *
 *    Description:  Fig. 16.1: Class DivideByZeroException Definition.
 *
 *        Version:  1.0
 *        Created:  25/10/16 18:08:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <stdexcept>  // stdexcept header contains runtime_error

// DivideByZeroException objects should be thrown by functions
// upon detecting division-by-zero exceptions
class DivideByZeroException : public std::runtime_error {
 public:
    // constructor specifies default error message
    DivideByZeroException()
        : std::runtime_error("attempted to divide by zero") {}
};
