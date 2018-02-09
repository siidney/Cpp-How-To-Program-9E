/*
 * =====================================================================================
 *
 *       Filename:  ex_1811.cpp
 *
 *    Description:  Exercise 18.11 - Hangman Game
 *
 *        Version:  1.0
 *        Created:  10/02/17 16:56:13
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void readWordList(std::vector<std::string>&, std::istream&);
int getChoice();
void play(std::vector<std::string>&);
std::string getNewWord(const std::vector<std::string>&);
char getGuess();
void hangman(int);
void printGuesses(const std::vector<char>&);

int main(int argc, const char* argv[]) {
    srand((int)time(0));

    std::vector<std::string> wordList;
    std::ifstream wordFile("words.txt", std::ios::in);

    if (!wordFile) {
        std::cerr << "ERROR: Wordlist not found." << std::endl;
        return 1;
    }

    readWordList(wordList, wordFile);

    wordFile.close();

    std::cout << wordList.size() << std::endl;
    std::cout << (rand() % wordList.size()) + 1 << std::endl;

    unsigned int r = 0;
    while ((r = rand() % wordList.size()) != wordList.size() - 1) {
        std::cout << r << " ";
    }

/*
    int choice;

    while ((choice = getChoice()) != 9) {
        switch (choice) {
            case 1:
                play(wordList);
                break;
            default:
                std::cerr << "Incorrect input" << std::endl;
                break;
        }
    }
*/
    return 0;
}
// read word list into vector
void readWordList(std::vector<std::string>& wordList, std::istream& wordFile) {
    wordFile.seekg(0, std::ios::beg);

    std::string word;

    while (std::getline(wordFile, word)) wordList.push_back(word);
}
// menu option
int getChoice() {
    std::cout << "\n*** Hangman ****"
              << "\n1 - New Game"
              << "\n9 - Exit\n> ";
    int choice;
    std::cin >> choice;

    return choice;
}
// begin a new game
void play(std::vector<std::string>& wordList) {
    std::vector<char> guessList;
    int incorrect = 7;
    std::string word = getNewWord(wordList);
    std::string obscuredWord(word.length(), 'X');

    while (incorrect > 0) {
        std::cout << obscuredWord << std::endl;

        guessList.push_back(getGuess());

        size_t pos = word.find(guessList.back());

        if (pos == std::string::npos) hangman(incorrect--);

        while (pos != std::string::npos) {
            obscuredWord[pos] = guessList.back();
            pos = word.find(guessList.back(), pos + 1);
        }

        printGuesses(guessList);

        if (obscuredWord == word) {
            std::cout << "Congratulations. You guessed my word." << std::endl;
            break;
        }
    }

    std::cout << word << std::endl;
}
// generate random word from the file
std::string getNewWord(const std::vector<std::string>& wordList) {
    int word = (rand() % wordList.size()) + 1;

    return wordList[word];
}
// get user guess
char getGuess() {
    char c;

    std::cout << "Enter guess: ";
    std::cin >> c;

    return c;
}
// print the hangman
// TODO(me): find a more efficient way of doing this (remove the repetition)
void hangman(int incorrect) {
    switch (incorrect) {
        case 7:
            std::cout << " O" << std::endl;
            break;
        case 6:
            std::cout << " O" << std::endl;
            std::cout << "/";
            break;
        case 5:
            std::cout << " O" << std::endl;
            std::cout << "/|";
            break;
        case 4:
            std::cout << " O" << std::endl;
            std::cout << "/|\\";
            break;
        case 3:
            std::cout << " O" << std::endl;
            std::cout << "/|\\" << std::endl;
            std::cout << " |" << std::endl;
            break;
        case 2:
            std::cout << " O" << std::endl;
            std::cout << "/|\\" << std::endl;
            std::cout << " |" << std::endl;
            std::cout << "/";
            break;
        case 1:
            std::cout << " O" << std::endl;
            std::cout << "/|\\" << std::endl;
            std::cout << " |" << std::endl;
            std::cout << "/\\";
    }

    std::cout << std::endl;
}
// print guessList
void printGuesses(const std::vector<char>& guessList) {
    for (unsigned int i = 0; i < guessList.size(); ++i) {
        std::cout << guessList[i];
    }

    std::cout << std::endl;
}
