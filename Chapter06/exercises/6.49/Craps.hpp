/*
 * =====================================================================================
 *
 *       Filename:  Craps.hpp
 *
 *    Description:  Exercise 6.49 - Craps Game Modification
 *
 *        Version:  1.0
 *        Created:  15/04/16 17:35:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>
#include <random>

class Craps {
 private:
    enum class Status { CONTINUE, WON, LOST, QUIT };

    Status _gameStatus;

    const int MIN = 1;
    const int MAX = 6;

    int _myPoint;
    int _bankBalance;
    int _wager;

    std::mt19937 gen;

    int rollDice();
    void setWager();
    void checkScore(int);
    void getStatus();
    int getRandomNumber();

 public:
    Craps();
    ~Craps();

    void run();
};
