/*
 * =====================================================================================
 *
 *       Filename:  TortoiseAndHare.hpp
 *
 *    Description:  Exercise 8.12 - Simulation: The Tortoise and the Hare
 *
 *        Version:  1.1
 *        Created:  06/05/16 17:49:08
 *       Revision:  13/02/18 03:33:01
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>
#include <string>
#include <random>

struct participant {
    std::string name;
    unsigned int position;

    participant() : position(1) {}
};

enum class GameStates { PLAY, EXIT };

class TortoiseAndHare {
 private:
    static const size_t COURSE_LIMIT = 70;

    participant _tortoise;
    participant _hare;

    GameStates _gameState;

    std::mt19937 gen;

    void initialise();
    void moveTortoise(participant &);
    void moveHare(participant &);
    bool isWinner(participant &);
    void printProgress();
    void summarise();
    void reset();
    int getRandomNumber();

 public:
    TortoiseAndHare() : _gameState(GameStates::PLAY), gen(std::random_device()()) {}

    ~TortoiseAndHare() {}

    void go();
};
