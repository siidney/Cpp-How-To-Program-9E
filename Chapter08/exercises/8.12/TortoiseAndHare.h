/*
 * =====================================================================================
 *
 *       Filename:  TortoiseAndHare.h
 *
 *    Description:  Exercise 8.12 - Simulation: The Tortoise and the Hare
 *
 *        Version:  1.0
 *        Created:  06/05/16 17:49:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>
#include <string>
#include <ctime>

struct participant{
    std::string name;
    int position;

    participant() : position(1) {}
};

enum class GameStates{PLAY, EXIT};

class TortoiseAndHare{
    private:
        static const size_t COURSE_LIMIT = 70;

        participant _tortoise;
        participant _hare;

        GameStates  _gameState;

        void initialise();
        void moveTortoise(participant &);
        void moveHare(participant &);
        bool isWinner(participant &);
        void printProgress();
        void summarise();
        void reset();

    public:
        TortoiseAndHare(){}

        ~TortoiseAndHare(){}

        void go();
};
