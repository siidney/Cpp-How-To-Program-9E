/*
 * =====================================================================================
 *
 *       Filename:  TicTacToe.h
 *
 *    Description:  Exercise 9.15 - TicTacToe Class
 *                  Can handle arbitrary sized square boards
 *
 *        Version:  1.0
 *        Created:  15/06/16 12:44:37
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
#include <iomanip>
#include <string>

enum class GameState {RUN, EXIT, INIT};
enum class PlayerState {PLAY, WIN, LOSE, DRAW};

struct Player{
    PlayerState state = PlayerState::PLAY;
    int token;
    std::string name;
    bool human = true;  // human/ai player
};

class TicTacToe{
    public:
        TicTacToe(){
            _gameState = GameState::INIT;
        }
        ~TicTacToe(){}

        void go();


        // IO OPERATIONS
        friend std::ostream& operator<<(std::ostream& out, TicTacToe ttt){
            return ttt.printBoard(out);
        }

        std::ostream& printBoard(std::ostream&);

    private:

        static const size_t ROWS = 3;
        static const size_t COLS = 3;

        int _board[ROWS * COLS];    // _board[col + width*row]
        unsigned int _moves;

        GameState _gameState;

        Player _player1;
        Player _player2;

        bool initialise();              // initialises game variables
        int printMenu();
        void gameLoop();
        bool playerTurn(Player&);       // handles player move
        void aiMove(Player&);           // handles ai move
        void move(Player&, int, int);   // moves player
        void printSummary();

        // UTILITY FUNCTIONS
        void resetBoard();          // resets board
        bool isValidMove(unsigned int, unsigned int); // check if move is valid
        bool isWinner(Player&);     // check for win condition
        bool movesRemaining();      // checks for remaining moves
};
