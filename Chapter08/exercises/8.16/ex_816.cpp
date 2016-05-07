/*
 * =====================================================================================
 *
 *       Filename:  ex_816.cpp
 *
 *    Description:  Exercise 8.16 - Maze Traversal
 *
 *        Version:  1.0
 *        Created:  02/06/16 13:08:56
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Maze.h"

int main(int argc, const char *argv[]){
    std::string fname = "level1";

    Maze maze(fname);

    std::cout << maze;

    Maze maze2;

    std::cout << "Enter File name: ";
    std::cin >> maze2;

    std::cout << maze2;

    return 0;
}
