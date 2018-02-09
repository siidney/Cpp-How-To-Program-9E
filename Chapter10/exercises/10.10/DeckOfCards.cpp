/*
 * =====================================================================================
 *
 *       Filename:  Deck.cpp
 *
 *    Description:  Exercise 10.10: Card Shuffling and Dealing
 *
 *        Version:  1.0
 *        Created:  04/07/16 14:39:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "DeckOfCards.hpp"

#include <algorithm>
#include <ctime>
#include <stdexcept>

DeckOfCards::DeckOfCards() : currentCard(0) {
    std::srand(std::time(0));

    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 13; ++j) {
            deck.push_back(Card(j, i));
        }
    }
}
void DeckOfCards::shuffle() {
    for (int i = 0, r1 = 0, r2 = 0; i < TOTAL_CARDS; ++i) {
        r1 = rand() % TOTAL_CARDS;
        r2 = rand() % TOTAL_CARDS;

        std::iter_swap(deck.begin() + r1, deck.begin() + r2);
    }
}
Card DeckOfCards::dealCard() {
    if (moreCards())
        return deck[currentCard++];
    else
        throw std::invalid_argument("end of deck reached");
}
bool DeckOfCards::moreCards() const { return currentCard < TOTAL_CARDS; }
