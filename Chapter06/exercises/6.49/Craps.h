/*
 * =====================================================================================
 *
 *       Filename:  Craps.h
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
#include <cstdlib>
#include <ctime>

class Craps{
    private:
        enum class Status{CONTINUE, WON, LOST, QUIT};

        int _myPoint;
        int _sumOfDice;
        int _bankBalance;
        int _wager;

        Status _gameStatus;

        int rollDice();
        void setWager();
        void checkScore(int);
        void getStatus();

    public:
        Craps();
        ~Craps();

        void run();
};
