/*
 * =====================================================================================
 *
 *       Filename:  Deck.h
 *
 *    Description:  Exercise 10.13: Card Shuffling and Dealing
 *
 *        Version:  1.2
 *        Created:  04/07/16 14:39:04
 *       Revision:  04/07/16 22:26:27
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "Card.h"

#include <vector>

class DeckOfCards{
    public:
        DeckOfCards();

        static void reset();

        static void shuffle();

        static unsigned int cardsRemaining();

    protected:
        static const unsigned int TOTAL_CARDS = 52;

        static std::vector<Card> deck;

        static unsigned int currentCard;
};
