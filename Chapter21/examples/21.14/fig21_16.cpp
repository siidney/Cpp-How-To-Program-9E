/*
 * =============================================================================
 *
 *       Filename:  fig21_16.cpp
 *
 *    Description:  Fig. 21.16: Card shuffling and dealing program.
 *
 *        Version:  1.0
 *        Created:  26/02/18 10:02:16
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
    DeckOfCards deckOfCards;  // create DeckOfCards object
    deckOfCards.deal();

    return 0;
}  // end method main
