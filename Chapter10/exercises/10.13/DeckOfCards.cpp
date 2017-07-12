/*
 * =====================================================================================
 *
 *       Filename:  Deck.cpp
 *
 *    Description:  Exercise 10.13: Card Shuffling and Dealing
 *
 *        Version:  1.2
 *        Created:  04/07/16 14:39:16
 *       Revision:  04/07/16 22:25:59
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "DeckOfCards.h"

#include <ctime>

unsigned int DeckOfCards::currentCard = 0;
std::vector<Card> DeckOfCards::deck;

DeckOfCards::DeckOfCards() { reset(); }
void DeckOfCards::reset() {
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 13; ++j) {
            deck.push_back(Card(j, i));
        }
    }
    currentCard = 0;
    shuffle();
}
void DeckOfCards::shuffle() {
    std::srand(std::time(0));

    for (unsigned int i = 0, r1 = 0, r2 = 0; i < TOTAL_CARDS; ++i) {
        r1 = rand() % TOTAL_CARDS;
        r2 = rand() % TOTAL_CARDS;

        std::iter_swap(deck.begin() + r1, deck.begin() + r2);
    }
}
// returns the number of cards remaning in the deck
unsigned int DeckOfCards::cardsRemaining() { return TOTAL_CARDS - currentCard; }
