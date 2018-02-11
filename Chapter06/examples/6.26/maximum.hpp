/*
 * =====================================================================================
 *
 *       Filename:  maximum.hpp
 *
 *    Description:  Fig. 6.26: Definition of function type maximum
 *
 *        Version:  1.0
 *        Created:  11/04/16 16:40:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

template <typename T>

T maximum(T value1, T value2, T value3) {
    T maximumValue = value1;

    if (value2 > maximumValue) {
        maximumValue = value2;
    }

    if (value3 > maximumValue) {
        maximumValue = value3;
    }

    return maximumValue;
}
