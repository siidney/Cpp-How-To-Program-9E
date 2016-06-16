/*
 * =====================================================================================
 *
 *       Filename:  TicTacToe.cpp
 *
 *    Description:  Exercise 9.15 - TicTacToe Class
 *                  Can handle arbitrary sized square boards
 *
 *        Version:  1.0
 *        Created:  15/06/16 12:44:45
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "TicTacToe.h"

// Initialise board and players to default values
bool TicTacToe::initialise(){
    int choice = printMenu();

    if(choice == 0){
        return false;
    }

    _player1.state = PlayerState::PLAY;
    _player1.token = 1;
    _player1.name = "Player1";

    _player2.state = PlayerState::PLAY;
    _player2.token = 2;
    _player2.name = "Player2;";

    _player2.human = (choice == 1);

    resetBoard();
    _moves = 0;

    _gameState = GameState::RUN;

    return true;
}
void TicTacToe::go(){
    while(initialise()){
        gameLoop();
    }
}
void TicTacToe::gameLoop(){
    while(_gameState == GameState::RUN && movesRemaining()){
        if(playerTurn(_player1)){
            std::cout << "WINNER" << std::endl;
            _player1.state = PlayerState::WIN;
            _player2.state = PlayerState::LOSE;

            _gameState = GameState::EXIT;
        }
        if(_gameState == GameState::RUN){
            if(movesRemaining()){
                if(playerTurn(_player2)){
                    _player2.state = PlayerState::WIN;
                    _player1.state = PlayerState::LOSE;

                    _gameState = GameState::EXIT;
                }
            }else{
                _gameState = GameState::EXIT;

                _player1.state = PlayerState::DRAW;
                _player2.state = PlayerState::DRAW;
            }
        }
    }
    printSummary();
}
// prints menu
int TicTacToe::printMenu(){
    int choice = 0;
    std::cout << "\n***** Welcome to TicTacToe *****\n"
              << "1. Player vs Player\n"
              << "2. Player vs Computer\n"
              << "0. Exit\n"
              << "> ";

    std::cin >> choice;

    return choice;

}
// Processes player turn
// returns win condition (if any)
bool TicTacToe::playerTurn(Player& pl){
    ++_moves;

    std::cout << *(this);

    if(pl.human){
        unsigned int x = -99;
        unsigned int y = -99;

        while(!isValidMove(x, y)){
            std::cout << "\nMove " << _moves << ". "
                      << pl.name << " enter Row & Col number to move: ";

            if(std::cin >> y){
                // account for no space between coords
                if(y > 9){
                    x = y%10;
                    y /=10;
                }else{
                    std::cin >> x;
                }
            }else{
                std::cin.clear();
                std::cin.ignore(80, '\n');

                continue;
            }
        }

        move(pl, x, y);
    }else{
        aiMove(pl);
    }

    return isWinner(pl);
}
// handles ai move
void TicTacToe::aiMove(Player& pl){

}
// adds the specified token to the game board
// position needs validating before function call
void TicTacToe::move(Player& pl, int x, int y){
    _board[x + COLS*y] = pl.token;
}
// IO OPERATIONS
// prints game results
void TicTacToe::printSummary(){
    std::cout << "\n******** GAME OVER ********\n"
              << "\nMOVES: " << _moves
              << "\nRESULT: ";
    if(_player1.state == PlayerState::DRAW){
        std::cout << "It's a DRAW!!!!!\n\n";
    }else{
        std::cout << ((_player1.state == PlayerState::WIN) ? "Player1 " : "Player2 ") << "WON!!!!!\n\n";
    }

    // print the board
    std::cout << *(this) << std::endl;
}
std::ostream& TicTacToe::printBoard(std::ostream& out){
    // print headers
    out << "   ";

    for(unsigned int i=0; i<COLS; ++i){
        out << i << " ";
    }
    out << "\n   " << std::setfill('-') << std::setw(COLS*2) << "" ;
    out << std::setw(0) << "\n";

    for(unsigned int row=0; row<ROWS; ++row){
        out << row << "| ";
        for(unsigned int col=0; col<COLS; ++col){
            if(_board[col + COLS*row] == 0){
                out << "  ";
            }else{
                out << ((_board[col + COLS*row] == 1) ? "X " : "O ");
            }
        }
        out << "\n";
    }
    return out;
}
// UTILITY FUNCTIONS
// resets board to default values
void TicTacToe::resetBoard(){
    for(unsigned int i=0; i<ROWS*COLS; ++i){
        _board[i] = 0;
    }
}
// check for valid move
bool TicTacToe::isValidMove(unsigned int x, unsigned int y){
    if((x >= 0 && x < COLS) && (y >= 0 && y < ROWS)){
        return _board[x + COLS*y] == 0;
    }
    return false;
}
// checks for win condition
// col + WIDTH*row
bool TicTacToe::isWinner(Player& pl){
    // ROWS AND COLS
    // row count counts rows[col]
    // col count counts cols[row]
    for(unsigned int row=0, rCount=0; row<ROWS; ++row, rCount=0){
        for(unsigned int col=0; col<COLS; ++col){
            if(_board[col + COLS*row] == pl.token){
                ++rCount;

                // only iterate if token is present on first row
                // iterate rows for col win
                if(row == 0){
                    for(unsigned int wRow=1, cCount=1; wRow<ROWS; ++wRow){
                        if(_board[col + COLS*wRow] == pl.token){
                            ++cCount;
                        }
                        if(cCount == ROWS){
                            return true;
                        }
                    }
                }
            }
        }
        if(rCount == COLS){
            return true;
        }
    }
    // DIAGONALS
    // left to right
    if(_board[0 + COLS*0] == pl.token){
        for(unsigned int row=0, dCount=0; row<ROWS; ++row){
            if(_board[row + COLS*row] == pl.token){
                ++dCount;
            }else{
                break;
            }
            if(dCount == COLS){
                return true;
            }
        }
    }
    // right to left
    if(_board[COLS-1 + COLS*0] == pl.token){
        // increment row whilst decrementing col
        for(unsigned int col=COLS-1, dCount=0, row=0; col>=0; --col, ++row){
            if(_board[col + COLS*row] == pl.token){
                ++dCount;
            }else{
                break;
            }
            if(dCount == COLS){
                return true;
            }
        }
    }
    return false;
}
// check for remaining moves
bool TicTacToe::movesRemaining(){
    return (_moves < (ROWS * COLS));
}
