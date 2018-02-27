/*
 * =============================================================================
 *
 *       Filename:  DeckOfCards.h
 *
 *    Description:  Fig. 21.14: Definition of class DeckOfCards that represents
 *                  a deck of playing cards.
 *
 *        Version:  1.0
 *        Created:  26/02/18 09:47:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#pragma once

#include <vector>

// BitCard structure definition with bit fields.
struct BitCard {
    unsigned face : 4;  // 4 bits: 0-15
    unsigned suit : 2;  // 2 bits: 0-3
    unsigned color : 1;  // 1 bit: 0-1
}; // end struct BitCard

// DeckOfCards class definition
class DeckOfCards {
 public:
        static const int faces = 13;
        static const int colors = 2;  // black and red
        static const int numberOfCards = 52;

        DeckOfCards();  // constructor initialises deck
        void deal();    // deals cards in deck

 private:
        std::vector<BitCard> deck;  // represents a deck of cards
};  // end class DeckOfCards
