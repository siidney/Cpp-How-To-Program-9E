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
#include <iostream>
#include <string>
#include <fstream>

std::string getWord();
bool guess(char&);
char getInput(std::string&);
int getInput();

enum STATE {PLAY, WIN, LOSE, EXIT};

int main(int argc, const char* argv[]){
    int choice;

    while((choice = getInput()))

    return 0;
}
