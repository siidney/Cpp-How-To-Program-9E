/*
 * =============================================================================
 *
 *       Filename:  Cryptograms.hpp
 *
 *    Description:  Exercise 18.15 - Solving Cryptograms
 *
 *        Version:  1.0
 *        Created:  19/02/18 09:55:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#pragma once

#include <string>
#include <vector>
#include <map>
#include <random>

class Cryptograms {
 public:
        Cryptograms() : gen(rd()) {};
        ~Cryptograms() {}

        bool play();

 private:
        const std::string ALPHABET = "abcdefghijklmnopqrstuvwxyz";

        std::vector<std::string> phraseList;
        std::map<char, char> cypher;

        std::random_device rd;
        std::mt19937 gen;

        std::string currentPhrase;
        std::string currentCryptogram;

        bool loadPhrases(const std::string&);

        void newGame();

        void createCypher();
        void encryptPhrase();
        std::string newPhrase();

        bool solved();

        std::tuple<char, char> userGuess();
        bool processGuess(char&, char&);
};  // end class Cryptograms
