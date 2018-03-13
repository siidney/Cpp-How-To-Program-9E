/*
 * =============================================================================
 *
 *       Filename:  DeckOfCards.cpp
 *
 *    Description:  Fig. 21.15: Member-function definitions for class DeckOfCards
 *                  that simulates the shuffling and dealing of a deck of
 *                  playing cards.
 *
 *        Version:  1.0
 *        Created:  26/02/18 09:55:08
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <iomanip>

#include "DeckOfCards.hpp"

// no argument constructor initialises the deck
DeckOfCards::DeckOfCards() : gen(rd()) {
    for (int i = 0; i < numberOfCards; ++i) {
        BitCard bc;

        bc.face = i % faces;  // faces in order
        bc.suit = i / faces;  // suits in order
        bc.color = i / (faces * colors);  // colors in order

        deck.push_back(bc);
    }
}  // end constructor DeckOfCards

/**
 * Shuffle cards in deck.
 */
void DeckOfCards::shuffle() {
    // shuffle cards randomly
    for (int i = 0; i < numberOfCards; ++i) {
        int j = std::uniform_int_distribution<int>{0, numberOfCards}(gen);

        BitCard temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}  // end method shuffle

// deal cards in deck
void DeckOfCards::deal() {
    for (int k1 = 0, k2 = k1 + numberOfCards / 2; k1 < numberOfCards / 2 - 1; ++k1, ++k2) {
        std::cout << "Card:" << std::setw(3) << deck[k1].face
                  << "  Suit:" << std::setw(2) << deck[k1].suit
                  << "  Color:" << std::setw(2) << deck[k1].color
                  << "   " << "Card:" << std::setw(3) << deck[k2].face
                  << "  Suit:" << std::setw(2) << deck[k2].suit
                  << "  Color:" << std::setw(2) << deck[k2].color << std::endl;
    }
}
