/*
 * =============================================================================
 *
 *       Filename:  DeckOfCards.h
 *
 *    Description:  Fig. 21.2: Definition of class DeckOfCards that represents
 *                  a deck of playing cards.
 *
 *        Version:  1.0
 *        Created:  21/02/18 12:04:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#pragma once

#include <string>
#include <vector>

// Card structure definition
struct Card {
    public:
        std::string face;
        std::string suit;
};

// DeckOfCards class definition
class DeckOfCards {
 public:
        static const int numberOfCards = 52;
        static const int faces = 13;
        static const int suits = 4;

        DeckOfCards();  // constructor initialises deck
        void shuffle();  // shuffles cards in deck
        void deal() const;  // deals cards in deck

 private:
        std::vector<Card> deck;  // represents a deck of cards
};  // end class DeckOfCards

// set filetype=cpp
