/*
 * =====================================================================================
 *
 *       Filename:  GuessTheNumber.hpp
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
#include <random>

enum class GameStates { PLAY, EXIT, WON };

class GuessTheNumber {
 private:
    GameStates _currentState;

    const int MIN = 0;
    const int MAX = 1000;

    int _randNumber;
    int _playerGuess;
    int _numGuesses;
    char _playerContinue;

    std::mt19937 gen;

    void initialise();
    GameStates guess(int);
    int getRandomNumber();

    void victoryMessage() const;

 public:
    GuessTheNumber();
    ~GuessTheNumber() {}

    void run();
};
