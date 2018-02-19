/*
 * =====================================================================================
 *
 *       Filename:  Card.hpp
 *
 *    Description:  Exercise 10.11: Card Shuffling and Dealing
 *
 *        Version:  1.1
 *        Created:  04/07/16 14:38:45
 *       Revision:  04/07/16 17:58:56
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

    std::string getSuit() const { return suits[suit]; }

    int getFace() const { return face; }

 private:
    static std::string suits[];
    static std::string faces[];

    int face;
    int suit;
};
