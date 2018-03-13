/*
 * =============================================================================
 *
 *       Filename:  ex_2105.cpp
 *
 *    Description:  Exercise 21.05 - Card Shuffling and Dealing.
 *
 *        Version:  1.0
 *        Created:  27/02/18 12:17:04
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include "DeckOfCards.hpp"

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    DeckOfCards deck;

    deck.shuffle();
    deck.deal();

    return 0;
}  // end method main
