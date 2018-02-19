/*
 * =====================================================================================
 *
 *       Filename:  ex_1011.cpp
 *
 *    Description:  Exercise 10.11: Card Shuffling and Dealing
 *
 *        Version:  1.0
 *        Created:  04/07/16 17:18:01
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "DeckOfCards.hpp"

int main(int argc, const char *argv[]) {
    DeckOfCards deck;

    deck.shuffle();

    deck.dealHand();
    deck.sortHand();

    deck.showHand();

    deck.getScore();

    return 0;
}
