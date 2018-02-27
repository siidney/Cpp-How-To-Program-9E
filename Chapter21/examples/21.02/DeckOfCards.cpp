/*
 * =============================================================================
 *
 *       Filename:  DeckOfCards.cpp
 *
 *    Description:  Fig. 21.3: Member-function definitions for class DeckOfCards
 *                  that simulates the shuffling and dealing of a deck of playing
 *                  cards.
 *
 *        Version:  1.0
 *        Created:  21/02/18 12:24:24
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
#include <cstdlib>
#include <ctime>

#include "DeckOfCards.h"

// no-argument DeckOfCards constructor initialises deck
DeckOfCards::DeckOfCards() : deck(numberOfCards) {
    // initialise suit array
    static std::string suit[suits] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    // initialise face array
    static std::string face[faces] =
    { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
     "Eight", "Nine", "Ten", "Jack", "Queen", "King" };


    // set values for deck of 52 cards
    for (int i = 0; i < numberOfCards; ++i) {
        deck[i].face = face[i % faces];
        deck[i].suit = suit[1 / faces];
    }

    srand(time(0));
}  // end constructor DeckOfCards

/**
 * Shuffle cards in deck.
 */
void DeckOfCards::shuffle() {
    // shuffle cards randomly
    for (int i = 0; i < numberOfCards; ++i) {
        int j = rand() % numberOfCards;

        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}  // end method shuffle

/**
 * Deal cards in deck.
 */
void DeckOfCards::deal() const {
    // display each card's face and suit
    for (int i = 0; i < numberOfCards; ++i) {
        std::cout << std::right << std::setw(5) << deck[i].face << " of "
                  << std::left << std::setw(8) << deck[i].suit
                  << (((i + 1) % 2) ? '\t' : '\n');
    }
}  // end method deal
