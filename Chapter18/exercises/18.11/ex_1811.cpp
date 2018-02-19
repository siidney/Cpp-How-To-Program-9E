/*
 * =============================================================================
 *
 *       Filename:  ex_1811.cpp
 *
 *    Description:  Exercise 18.11 - Hangman Game
 *
 *        Version:  1.0
 *        Created:  18/02/18 22:39:19
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <random>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

bool play();
std::vector<std::string> loadWords(const std::string&);
char getInput(const std::string&);
void newGame(const std::vector<std::string>&);
std::string getWord(const std::vector<std::string>&);
bool makeGuess(const std::string&, std::string&, std::vector<char>&);
void hangman(const unsigned int);

std::random_device rd;
std::mt19937 gen(rd());

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    if (!play()) { std::cout << "There was some kind of problem" << std::endl; }

    return 0;
}  // end method main

/**
 * Entry point
 * @return bool
 */
bool play() {
    std::vector<std::string> wordList = loadWords("words.txt");

    if (wordList.empty()) { return false; }

    while (true) {
        std::cout << "\n--------------------------" << std::endl
                  << std::endl
                  << "     Welcome to Hangman " << std::endl
                  << "\t1. New Game" << std::endl
                  << "\t2. Exit" << std::endl
                  << std::endl
                  << "--------------------------\n> ";
        unsigned int input = 0;

        do {
            std::cin >> input;
        } while (input < 1 || input > 2);

        if (input == 2) { return true; }

        newGame(wordList);
    }

    return true;
}  // end method play

/**
 * Loads the word list into a vector<string>
 * @param string
 * @return vector<string>
 */
std::vector<std::string> loadWords(const std::string& fname) {
    std::ifstream file(fname, std::ios::in | std::ios::binary);

    if (!file.is_open()) { std::cout << "Error Opening File: " << fname << std::endl; }

    std::vector<std::string> wordList;

    if (file.good()) {
        std::string line;
        while (std::getline(file, line)) {
            wordList.emplace_back(line);
        }
    }

    file.close();

    return wordList;
}  // end method loadWords

/**
 * Gets and returns the user guess.
 * @return char
 */
char getInput(const std::string& msg) {
    char c;

    std::cout << msg;
    std::cin >> c;

    return c;
}  // end method getGuess

/**
 * Plays a single game of hangman.
 * @param vector<string>
 */
void newGame(const std::vector<std::string>& wordList) {
    std::string word = getWord(wordList);

    // ensure word is lowercase
    for (auto &c : word) { c = std::tolower(c); }

    std::string hashedWord(word.length(), '#');
    std::vector<char> guessList;

    unsigned int incorrect = 0;

    while (incorrect < 7 && hashedWord != word) {
        std::cout << "Previous Guesses: ";

        for (auto &c : guessList) { std::cout << c << ' '; }

        if (!makeGuess(word, hashedWord, guessList)) { hangman(++incorrect); }
    }

    std::cout << "The word was: " << word << std::endl;
    if (hashedWord == word) { std::cout << "Congratulations!! You guessed my word" << std::endl; }
}  // end method newGame

/**
 * Gets a random word from the given vector.
 * @param vector<string>
 * @return string
 */
std::string getWord(const std::vector<std::string> &wordList) {
    std::uniform_int_distribution<int> dist(0, wordList.size() - 1);

    return wordList[dist(gen)];
}  // end method getWord

/**
 * Makes the guess from the user.
 * @param word
 * @param char
 * @return bool
 */
bool makeGuess(const std::string& word, std::string &hashedWord, std::vector<char> &guessList) {
    std::cout << "\nGuess the word:\t" << hashedWord << std::endl;

    char guess = getInput("\nMake a guess\n> ");

    while (!isalpha(guess)) {
        std::cout << "Incorrect input. Enter a char a-z" << std::endl;
        guess = getInput("\nMake a guess\n> ");
    }


    if (std::find(guessList.begin(), guessList.end(), guess) != guessList.end()) {
        std::cout << "Already Guessed " << guess << ". Try again." << std::endl;
        return true;
    }

    guessList.emplace_back(guess);

    bool exists = false;
    // make getting every occurance of char easier
    for (size_t i = 0; i < word.length(); ++i) {
        if (word[i] == guess) {
            hashedWord[i] = guess;
            exists = true;
        }
    }

    return exists;
}  // end method make

/**
 * Prints the hanged man.
 * @param unsigned int
 */
void hangman(const unsigned int incorrect) {
    switch (incorrect) {
        case 1:
            std::cout << "\t 0" << std::endl;
        break;
        case 2:
            std::cout << "\t O" << std::endl;
            std::cout << "\t/";
        break;
        case 3:
            std::cout << "\t O" << std::endl;
            std::cout << "\t/|";
        break;
        case 4:
            std::cout << "\t O" << std::endl;
            std::cout << "\t/|\\";
        break;
        case 5:
            std::cout << "\t O" << std::endl;
            std::cout << "\t/|\\" << std::endl;
            std::cout << "\t |" << std::endl;
        break;
        case 6:
            std::cout << "\t O" << std::endl;
            std::cout << "\t/|\\" << std::endl;
            std::cout << "\t |" << std::endl;
            std::cout << "\t/";
        break;
        case 7:
            std::cout << "\t O" << std::endl;
            std::cout << "\t/|\\" << std::endl;
            std::cout << "\t |" << std::endl;
            std::cout << "\t/ \\";
        break;
        default:
            std::cout << std::endl;
        break;
    }

    std::cout << std::endl;
}  // end method hangman
