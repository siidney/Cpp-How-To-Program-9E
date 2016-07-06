/*
 * =====================================================================================
 *
 *       Filename:  Deck.h
 *
 *    Description:  Exercise 10.10: Card Shuffling and Dealing
 *
 *        Version:  1.0
 *        Created:  04/07/16 14:39:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
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

        void shuffle();
        Card dealCard();
        bool moreCards() const;

    private:
        const int TOTAL_CARDS = 52;

        std::vector<Card> deck;

        int currentCard;
};
