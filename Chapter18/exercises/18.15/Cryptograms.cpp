/*
 * =============================================================================
 *
 *       Filename:  Cryptograms.cpp
 *
 *    Description:  Exercise 18.15 - Solving Cryptograms
 *
 *        Version:  1.0
 *        Created:  19/02/18 10:05:48
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <utility>
#include <tuple>

#include "Cryptograms.hpp"

/**
 * Entry point.
 * @return bool
 */
bool Cryptograms::play() {
    if (!loadPhrases("phrases.txt")) { return false; }

    while (true) {
        std::cout << "\n--------------------------" << std::endl
                  << std::endl
                  << "   Welcome to Cryptograms " << std::endl
                  << "\t1. New Game" << std::endl
                  << "\t2. Exit" << std::endl
                  << std::endl
                  << "--------------------------\n> ";
        unsigned int input = 0;

        do {
            std::cin >> input;
        } while (input < 1 || input > 2);

        if (input == 2) { return true; }

        newGame();
    }
}  // end method play

/**
 * Loads the given phrase list into vector of phrases.
 * @param string
 * @return bool
 */
bool Cryptograms::loadPhrases(const std::string& fname) {
    std::ifstream file(fname, std::ios::in | std::ios::binary);

    if (!file.is_open()) { return false; }

    if (file.good()) {
        std::string line;
        while (std::getline(file, line)) {
            phraseList.emplace_back(line);
        }
    }

    file.close();

    if (phraseList.empty()) { return false; }

    return true;
}  // end method loadPhrases

/**
 * Plays a single game of Cryptograms.
 */
void Cryptograms::newGame() {
    createCypher();
    encryptPhrase();

    while (!solved()) {
        std::cout << '\t' << currentCryptogram << std::endl;

        char scrambled;
        char replacement;

        std::tie(scrambled, replacement) = userGuess();

        processGuess(scrambled, replacement);
    }

    std::cout << "\n----------------------------------------" << std::endl
              << "\nCongratulation you solved the cryptogram:" << std::endl
              << "\t" << currentPhrase << std::endl
              << "\n----------------------------------------" << std::endl;
}  // end method newGame

/**
 * Creates the cryptogram cypher.
 */
void Cryptograms::createCypher() {
    std::string shuffled = ALPHABET;

    std::shuffle(shuffled.begin(), shuffled.end(), rd);

    auto ait = ALPHABET.begin();
    auto sit = shuffled.begin();

    // reset cypher
    if (!cypher.empty()) { cypher.clear(); }

    while (ait != ALPHABET.end()) {
        cypher.insert(std::pair<char, char>(*(ait++), *(sit++)));
    }
}  // end method createCypher

/**
 * Encrypts the currently active phrase.
 */
void Cryptograms::encryptPhrase() {
    currentPhrase = newPhrase();
    currentCryptogram = currentPhrase;

    for (auto &c : currentCryptogram) {
        if (isalpha(c)) {
            if (isupper(c)) { c = tolower(c); }

            c = cypher.find(c)->second;
        }
    }
}  // end method encryptPhrase

/**
 * Gets a random phrase from the phraseList vector.
 * @return string
 */
std::string Cryptograms::newPhrase() {
    std::uniform_int_distribution<int> dist(0, phraseList.size() - 1);

    return phraseList[dist(gen)];
}  // end method getPhrase

/**
 * Checks whether currentCryptogram is solved; uppercase
 * @return bool
 */
bool Cryptograms::solved() {
    for (auto &c : currentCryptogram) {
        if (std::islower(c)) { return false; }
    }

    return true;
}  // end method solved

/**
 * Processes user guess.
 * @return pair<char, char>
 */
std::tuple<char, char> Cryptograms::userGuess() {
    char scrambled = ' ';
    char replacement = ' ';

    while (!isalpha(scrambled) && !isalpha(replacement)) {
        std::cout << currentPhrase << std::endl;
        std::cout << "Enter letter in cryptogram and replacement\n> ";

        std::cin >> scrambled;
        std::cin >> replacement;

        if (!isalpha(scrambled) || !isalpha(replacement)) {
            std::cout << "Invalid input" << std::endl;
        }
    }

    return std::make_tuple(scrambled, replacement);
}  // end method userGuess

/**
 * Processes the user guess.
 * @param char
 * @param char
 * @return bool
 */
bool Cryptograms::processGuess(char& scrambled, char& replacement) {
    auto it = cypher.find(replacement);

    if (it != cypher.end()) {
        if (it->second == scrambled) {
            std::replace(currentCryptogram.begin(), currentCryptogram.end(), scrambled,
                    static_cast<char>(std::toupper(replacement)));
            return true;
        }
    }
    return false;
}  // end method processGuess
