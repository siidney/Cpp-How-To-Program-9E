/*
 * =====================================================================================
 *
 *       Filename:  Deck.hpp
 *
 *    Description:  Exercise 10.10: Card Shuffling and Dealing
 *
 *        Version:  1.0
 *        Created:  04/07/16 14:39:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <vector>
#include <random>

#include "Card.hpp"

class DeckOfCards {
 public:
    DeckOfCards();

    void shuffle();
    Card dealCard();
    bool moreCards() const;

 private:
    const int TOTAL_CARDS = 52;

    std::vector<Card> deck;

    int currentCard;

    std::mt19937 gen;

    int getRandomNumber();
};
