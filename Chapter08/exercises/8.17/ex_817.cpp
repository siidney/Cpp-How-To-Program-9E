/*
 * =============================================================================
 *
 *       Filename:  ex_817.cpp
 *
 *    Description:  Exercise 8.17 - Generating Mazes Randomly
 *
 *        Version:  1.0
 *        Created:  16/02/18 16:47:55
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include "Maze.hpp"

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    Maze maze;

    maze.generate(12, 12);

    return 0;
}  // end method main
