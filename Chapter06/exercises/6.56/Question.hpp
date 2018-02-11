/*
 * =====================================================================================
 *
 *       Filename:  Question.h
 *
 *    Description:  template question struct
 *
 *        Version:  1.0
 *        Created:  16/04/16 15:32:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

// represents a single question
template <typename T>

struct Question {
    T num1;
    T num2;

    void init(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T multiply() { return num1 * num2; }

    T add() { return num1 + num2; }

    T subtract() { return num1 - num2; }

    T divide() {
        // prevent divide by zero
        num1 = (num1 == 0 ? 1 : num1);
        num2 = (num2 == 0 ? 1 : num2);

        double scale = 0.01;
        return static_cast<int>((num1 / num2) / scale) * scale;
    }
};
