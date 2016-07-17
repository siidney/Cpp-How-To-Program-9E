/*
 * =====================================================================================
 *
 *       Filename:  GuessTheNumber.cpp
 *
 *    Description:  Exercise 6.35 - Guess-the-Number Game Modification
 *
 *        Version:  1.0
 *        Created:  15/04/16 14:27:45
 *       Revision:  15/04/16 14:53:39
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "GuessTheNumber.h"

// initialises and resets member variables
void GuessTheNumber::initialise(){
    _currentState = GameStates::PLAY;

    srand(static_cast<int>(time(0)));

    _randNumber = 1 + rand() % 1000;

    _numGuesses = 0;
    _playerGuess = 0;

    // print here so as to avoid having it print ever turn
    std::cout << "I have a number between 1 and 1000." << std::endl;
}
// takes the player guess and compares to number
void GuessTheNumber::guess(int playerGuess){

    _numGuesses++;

    if(playerGuess == _randNumber){
        std::cout << "Excellent! You guessed the number!" << std::endl;
        _currentState = GameStates::WON;
    }else{
        std::cout << "Too " << ((playerGuess < _randNumber) ? "low. " : "high. ")
                  << "Try again." << std::endl;
    }
}
// main game loop
void GuessTheNumber::run(void){
    while(_currentState != GameStates::EXIT){
        if(_currentState == GameStates::PLAY){
            std::cout << "\nCan you guess my number?" << std::endl;

            std::cout << "Please type your guess: ";
            std::cin >> _playerGuess;

            if(_playerGuess < 1 || _playerGuess > 1000){
                std::cout << "\nInvalid guess. Your number needs to be between 1 and 1000" << std::endl;
                continue;
            }

            guess(_playerGuess);
        }
        if(_currentState == GameStates::WON){
            victoryMessage();

            std::cout << "\nWould you like to play again (y or n)? ";
            std::cin >> _playerContinue;

            if(_playerContinue == 'y'){
                initialise();
            }else{
                _currentState = GameStates::EXIT;
            }
        }
    }
}
// victory message
void GuessTheNumber::victoryMessage(){
    if(_numGuesses <= 10){
        std::cout << "\nGuesses: " << _numGuesses
                  << "\nEither you know the secret or you got lucky!" << std::endl;
    }
    if(_numGuesses == 10){
        std::cout << "\nGuesses: " << _numGuesses
                  << "\nAhah! You know the secret!" << std::endl;
    }
    if(_numGuesses > 10){
        std::cout << "\nGuesses: " << _numGuesses
                  << "\nYou should be able to do better!" << std::endl;
    }
}
