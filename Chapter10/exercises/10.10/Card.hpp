/*
 * =====================================================================================
 *
 *       Filename:  Card.hpp
 *
 *    Description:  Exercise 10.10: Card Shuffling and Dealing
 *
 *        Version:  1.0
 *        Created:  04/07/16 14:38:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <string>

class Card {
 public:
    Card(int, int);

    std::string toString() const;

 private:
    static std::string suits[];
    static std::string faces[];

    int face;
    int suit;
};
