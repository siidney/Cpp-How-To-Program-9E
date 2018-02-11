/*
 * =====================================================================================
 *
 *       Filename:  GuessTheNumber.hpp
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
#include <random>

enum class GameStates { PLAY, EXIT, WON };

class GuessTheNumber {
 private:
    GameStates _currentState;

    const int MIN = 0;
    const int MAX = 1000;

    int _randNumber;
    int _playerGuess;
    char _playerContinue;

    std::mt19937 gen;

    void initialise();
    GameStates guess(int) const;
    int getRandomNumber();

 public:
    GuessTheNumber();
    ~GuessTheNumber() {}

    void run();
};
