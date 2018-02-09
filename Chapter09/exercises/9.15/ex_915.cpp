/*
 * =====================================================================================
 *
 *       Filename:  ex_915.cpp
 *
 *    Description:  Exercise 9.15 - TicTacToe Class
 *
 *        Version:  1.0
 *        Created:  15/06/16 12:43:28
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "TicTacToe.hpp"

int main(int argc, const char *argv[]) {
    TicTacToe ttt(3, 3);

    ttt.go();

    return 0;
}
