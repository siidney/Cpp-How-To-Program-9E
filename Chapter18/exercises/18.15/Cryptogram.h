/*
 * =====================================================================================
 *
 *       Filename:  Cryptogram.h
 *
 *    Description:  Exercise 18.15 - Solving Cryptograms
 *
 *        Version:  1.0
 *        Created:  17/02/17 12:01:36
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
#include <string>
#include <map>
#include <algorithm>
#include <ctime>
#include <fstream>
#include <vector>

enum class STATE {PLAY, WIN, EXIT = 9};

class Cryptogram{
    public:
        Cryptogram();

        void run();

    private:
        std::map<char, char> cypher;
        std::vector<std::string> phraseList;
        std::string encPhrase;

        STATE userState;

        const std::string LIST_FILE = "phrases.txt";

        bool initialise();
        void readPhraseList(std::ifstream&);
        void printMenu();
        void newGame();
        void createCypher();
        std::string getPhrase();
        void encrypt(std::string&);
        void printMessage(const std::string&) const;
        char getInput();

        bool makeGuess(const char, const char);
        bool isSolved();
};
