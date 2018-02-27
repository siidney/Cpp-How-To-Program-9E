/*
 * =============================================================================
 *
 *       Filename:  fig21_04.cpp
 *
 *    Description:  Fig. 21.4: Card Shuffling and dealing program.
 *
 *        Version:  1.0
 *        Created:  21/02/18 12:33:37
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include "DeckOfCards.h"

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    DeckOfCards deckOfCards;    // create DeckOfCards object
    deckOfCards.shuffle();  // shuffle the cards in the deck
    deckOfCards.deal();     // deal the cards in the deck

    return 0;
}  // end method main
