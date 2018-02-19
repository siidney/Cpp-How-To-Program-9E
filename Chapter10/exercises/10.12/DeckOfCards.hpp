/*
 * =====================================================================================
 *
 *       Filename:  Deck.hpp
 *
 *    Description:  Exercise 10.12: Card Shuffling and Dealing
 *
 *        Version:  1.1
 *        Created:  04/07/16 14:39:04
 *       Revision:  04/07/16 17:17:50
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

static std::random_device rd;
static std::mt19937 gen(rd());

class DeckOfCards {
 public:
    DeckOfCards();

    static void shuffle();
    Card dealCard();
    void dealHand();
    void sortHand();

    bool moreCards() const;

    void showHand() const;
    int cardsRemaining() const;

    // SCORING FUNCTIONS
    int getScore();
    void printScore() const;
    bool hasPair();
    bool hasTwoPair();
    bool hasThreeOfKind();
    bool hasFourOfKind();
    bool hasFlush();
    bool hasStraight();

 private:
    static const int TOTAL_CARDS = 52;
    static const int HAND_SIZE = 5;

    static std::vector<Card> deck;
    std::vector<Card> hand;

    static int currentCard;
    int score;

    bool isSorted;

    static int getRandomNumber();
};
