/*
 * =============================================================================
 *
 *       Filename:  Maze.hpp
 *
 *    Description:  Exercise 8.17 - Generating Mazes Randomly.
 *
 *        Version:  1.0
 *        Created:  16/02/18 16:50:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#pragma once

#include <vector>

class Maze {
 public:
        Maze();
        ~Maze();

        std::vector<char> generate(int, int);
 private:
        const char START = 'X';
        const char EXIT = '@';
        const char WALL = '#';
        const char PATH = '.';
        const char VISITED = 'O';

        int WIDTH;
        int HEIGHT;

        std::vector<char> maze;
};  // end class Maze
