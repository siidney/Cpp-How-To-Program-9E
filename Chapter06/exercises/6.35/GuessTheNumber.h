/*
 * =====================================================================================
 *
 *       Filename:  GuessTheNumber.h
 *
 *    Description:  Exercise 6.35 - Guess-the-Number Game Modification
 *
 *        Version:  1.1
 *        Created:  15/04/16 14:15:34
 *       Revision:  15/04/16 14:53:30
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
        int     _numGuesses;
        char    _playerContinue;

        void initialise();
        void guess(int);
        void victoryMessage();

    public:
        GuessTheNumber(){initialise();}
        ~GuessTheNumber(){}

        void run(void);
};
