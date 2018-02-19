/*
 * =====================================================================================
 *
 *       Filename:  ex_1010.cpp
 *
 *    Description:  Exercise 10.10: Card Shuffling and Dealing
 *
 *        Version:  1.0
 *        Created:  04/07/16 14:39:28
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
    DeckOfCards deck1;

    deck1.shuffle();

    while (deck1.moreCards()) {
        std::cout << deck1.dealCard().toString() << std::endl;
    }
    return 0;
}
