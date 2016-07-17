/*
 * =====================================================================================
 *
 *       Filename:  GuessTheNumber.h
 *
 *    Description:  Exercise 6.34 - Guess-the-Number Games
 *
 *        Version:  1.0
 *        Created:  15/04/16 14:15:34
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
#include <ctime>

enum class GameStates{PLAY, EXIT, WON};

class GuessTheNumber{
    private:
        GameStates  _currentState;

        int     _randNumber;
        int     _playerGuess;
        char    _playerContinue;

        void initialise();
        void guess(int);

    public:
        GuessTheNumber(){initialise();}
        ~GuessTheNumber(){}

        void run(void);
};
