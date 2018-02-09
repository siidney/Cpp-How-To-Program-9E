/*
 * =====================================================================================
 *
 *       Filename:  Card.cpp
 *
 *    Description:  Exercise 10.13: Card Shuffling and Dealing
 *
 *        Version:  1.0
 *        Created:  04/07/16 14:38:59
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Card.hpp"

std::string Card::suits[5] = {"", "clubs", "diamonds", "hearts", "spades"};
std::string Card::faces[14] = {"",     "ace",  "two",   "three", "four",
                               "five", "six",  "seven", "eight", "nine",
                               "ten",  "jack", "queen", "king"};

Card::Card(int f, int s) {
    face = f;
    suit = s;
}
std::string Card::toString() const {
    return faces[face] + " of " + suits[suit];
}
