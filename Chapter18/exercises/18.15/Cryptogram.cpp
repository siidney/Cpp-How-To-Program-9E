/*
 * =====================================================================================
 *
 *       Filename:  Cryptogram.cpp
 *
 *    Description:  Exercise 18.15 - Solving Cryptograms
 *
 *        Version:  1.0
 *        Created:  17/02/17 12:01:48
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Cryptogram.hpp"

Cryptogram::Cryptogram() : userState(STATE::PLAY) {
    srand((int)time(0));

    if (!initialise()) {
        std::cerr << "Initialisation error." << std::endl;
        return;
    }
}
// initialises cryptogram
// opens phrase file populates phraseList
bool Cryptogram::initialise() {
    // open phrase file
    std::ifstream phraseFile(LIST_FILE.c_str(), std::ios::out);

    if (!phraseFile) {
        std::cerr << "Error could not open phraseFile" << std::endl;
        return false;
    }
    readPhraseList(phraseFile);

    phraseFile.close();

    return true;
}
// populate phraseList
void Cryptogram::readPhraseList(std::ifstream& phraseFile) {
    phraseFile.seekg(0, std::ios::beg);

    std::string phrase;

    while (std::getline(phraseFile, phrase)) phraseList.push_back(phrase);
}
// Entry Point
void Cryptogram::run() {
    while (userState != STATE::EXIT) {
        printMenu();
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                userState = STATE::PLAY;
                newGame();
                break;
            case 9:
                userState = STATE::EXIT;
                break;
            default:
                std::cout << "Incorrect Input" << std::endl;
                break;
        }
    }
}
// prints main menu
void Cryptogram::printMenu() {
    std::cout << "*** Let's Play Cryptograms ***"
              << "\n1 - New Game"
              << "\n9 - Exit\n> ";
}
// Game Loop
void Cryptogram::newGame() {
    createCypher();
    encPhrase = getPhrase();
    // print unecrypted cryptogram
    // std::cout << encPhrase << std::endl;
    encrypt(encPhrase);

    while (userState != STATE::WIN) {
        printMessage("\n" + encPhrase);
        printMessage("\n\nEnter Character in cryptogram to replace: ");
        char value = getInput();

        printMessage("Enter Replacement Guess: ");
        char key = getInput();

        if (makeGuess(key, value)) {
            if (isSolved()) {
                printMessage("\nCongratulations you solved the cryptogram\n");
                printMessage("\n" + encPhrase + "\n\n");
                userState = STATE::WIN;
            }
        } else {
            printMessage("\nIncorrect Guess\n");
        }
    }
}
// create the cryptogram cypher
// randomises alphabet and maps to original letters
void Cryptogram::createCypher() {
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string shuffled = alphabet;

    std::random_shuffle(shuffled.begin(), shuffled.end());

    std::string::iterator ait = alphabet.begin();
    std::string::iterator sit = shuffled.begin();

    while (ait != alphabet.end()) {
        cypher.insert(std::pair<char, char>(*(ait++), *(sit++)));
    }
}
// get random phrase from given text file
std::string Cryptogram::getPhrase() {
    int phrase = (rand() % phraseList.size()) + 1;

    return phraseList[phrase];
}
// cypherise the given string
void Cryptogram::encrypt(std::string& phrase) {
    std::string::iterator it = phrase.begin();

    while (it != phrase.end()) {
        if (*it != ' ') {
            if (std::isupper(*it)) *it = std::tolower(*it);

            *it = cypher.find(*(it++))->second;
        } else {
            ++it;
        }
    }
}
// prints generic messages
void Cryptogram::printMessage(const std::string& message) const {
    std::cout << message;
}
// get char input
char Cryptogram::getInput() {
    char input;
    std::cin >> input;
    return input;
}
// check if guess is correct and ammend encPhrase accordingly
// replaces encrypted char with correct uppercase version
bool Cryptogram::makeGuess(const char key, const char value) {
    // guess is correct
    if (cypher[key] == value) {
        size_t pos = encPhrase.find(value);

        while (pos != std::string::npos) {
            encPhrase[pos] = std::toupper(key);
            pos = encPhrase.find(value, pos + 1);
        }
        return true;
    }
    return false;
}
// check if cryptogram is solved (every char is uppercase)
bool Cryptogram::isSolved() {
    std::string::iterator it = encPhrase.begin();

    while (it != encPhrase.end()) {
        if (std::islower(*(it++))) return false;
    }
    return true;
}
