/*
 * =====================================================================================
 *
 *       Filename:  ex_1012.cpp
 *
 *    Description:  Exercise 10.12: Card Shuffling and Dealing
 *
 *        Version:  1.1
 *        Created:  04/07/16 17:18:01
 *       Revision:  04/07/16 21:47:15
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "DeckOfCards.hpp"

#include <iostream>

int main(int argc, const char *argv[]) {
    DeckOfCards player1;
    DeckOfCards player2;

    DeckOfCards::shuffle();

    std::cout << "Player1:\n";
    player1.dealHand();
    player1.sortHand();
    player1.showHand();
    printf("\n");

    std::cout << "Player2:\n";
    player2.dealHand();
    player2.sortHand();
    player2.showHand();
    printf("\n");

    int player1Score = player1.getScore();
    int player2Score = player2.getScore();

    std::cout << "Player1: ";
    player1.printScore();

    std::cout << "\nPlayer2: ";
    player2.printScore();

    if (player1Score > player2Score) {
        std::cout << "\nPlayer 1 wins\n";
    } else if (player2Score > player1Score) {
        std::cout << "\nPlayer 2 wins\n";
    } else {
        std::cout << "\nIt's a draw";
    }

    std::cout << std::endl;

    return 0;
}
