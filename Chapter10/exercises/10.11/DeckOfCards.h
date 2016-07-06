/*
 * =====================================================================================
 *
 *       Filename:  Deck.h
 *
 *    Description:  Exercise 10.11: Card Shuffling and Dealing
 *
 *        Version:  1.1
 *        Created:  04/07/16 14:39:04
 *       Revision:  04/07/16 17:17:50
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
        void dealHand();
        void sortHand();

        bool moreCards() const;

        void showHand() const;

        // SCORING FUNCTIONS
        void getScore();
        bool hasPair();
        bool hasTwoPair();
        bool hasThreeOfKind();
        bool hasFourOfKind();
        bool hasFlush();
        bool hasStraight();

    private:
        const int TOTAL_CARDS = 52;
        const int HAND_SIZE = 5;


        std::vector<Card> deck;
        std::vector<Card> hand;

        int currentCard;

        bool isSorted;

};
