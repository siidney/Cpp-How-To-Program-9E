/*
 * =====================================================================================
 *
 *       Filename:  Craps.cpp
 *
 *    Description:  Exercise 6.49 - Craps Game Modification
 *
 *        Version:  1.0
 *        Created:  15/04/16 17:41:19
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Craps.h"

Craps::Craps() : _myPoint(0), _sumOfDice(0), _bankBalance(1000), _wager(0){
    srand(time(NULL));

    _gameStatus = Status::CONTINUE;
}
Craps::~Craps(){}

// rolls the dice
int Craps::rollDice(){
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;

    int sum = die1 + die2;

    std::cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << std::endl;

    return sum;
}
// sets the current turn wager
void Craps::setWager(){
    while(true){
        std::cout << "Enter a wager $0-$" << _bankBalance << ": ";
        std::cin >> _wager;

        if(_wager >= 0 && _wager <= _bankBalance){
            if(_wager == _bankBalance){
                std::cout << "\n*** Look at you going for broke. You brave little fella. ***\n"  << std::endl;
            }
            break;
        }
    }
}
// checks the game status
void Craps::checkScore(int sum){
    switch(sum){
        case 7:
            if(_myPoint > 0){
                _gameStatus = Status::LOST;
                break;
            }
            if(_myPoint > 0 && sum == _myPoint){
                _gameStatus = Status::WON;
                break;
            }
        case 11:
            _gameStatus = Status::WON;
            break;
        case 2:
        case 3:
        case 12:
            _gameStatus = Status::LOST;
            break;
        default:
            _gameStatus = Status::CONTINUE;
            _myPoint = sum;
            std::cout << "> Point is " << _myPoint << std::endl;
            break;
    }
}
// gets the game status
void Craps::getStatus(){
    if(_gameStatus == Status::WON){
        _bankBalance += _wager;

        std::cout << "\n*** Player wins ***" << std::endl;
    }
    if(_gameStatus == Status::LOST){
        _bankBalance -= _wager;

        std::cout << "\n*** Player loses ***" << std::endl;

        if(_bankBalance == 0){
            std::cout << "\n*** Sorry, You busted! ***\n" << std::endl;
        }
    }
    if(_bankBalance == 0){
        _gameStatus = Status::QUIT;
    }
    if(_gameStatus != Status::CONTINUE && _bankBalance > 0){
        std::cout << "Your balance is $" << _bankBalance << std::endl;

        char cont;

        std::cout << "\nContinue(y/n)? ";
        std::cin >> cont;

        if(cont == 'y'){
            _gameStatus = Status::CONTINUE;
            setWager();
        }else{
            _gameStatus = Status::QUIT;
        }
    }
}
// run one instance of a game
void Craps::run(){
    setWager();
    while(_gameStatus != Status::QUIT){
        checkScore(rollDice());

        getStatus();
    }
}
