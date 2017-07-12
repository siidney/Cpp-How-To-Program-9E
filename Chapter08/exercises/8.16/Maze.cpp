/*
 * =====================================================================================
 *
 *       Filename:  Maze.cpp
 *
 *    Description:  Exercise 8.16 - Maze Traversal
 *                  Uses 1d array in place of 2d array as is easier to pass to
 *                  functions. Even though it transpired passing was not needed.
 *
 *        Version:  1.1
 *        Created:  02/06/16 13:40:11
 *       Revision:  03/06/16 16:23:35
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Maze.h"

Maze::Maze() : _moves(0) {}
Maze::Maze(std::string& fname) : _moves(0),_fname(fname)  { initialise(); }
Maze::~Maze() {
    if (_maze != nullptr) {
        delete _maze;
    }
}
// initialise the maze
void Maze::initialise() {
    if (!add()) {
        std::cout << "ERROR: Invalid maze file" << std::endl;
        return;
    }

    _moves = 0;
    mazeTraversal();
}
// reads in maze from file
bool Maze::add() {
    std::ifstream f;

    f.open(_fname, std::ios::out | std::ios::binary);

    if (!f.is_open()) {
        return false;
    }

    f >> _ROWS >> _COLS;

    _maze = new char[(_ROWS * _COLS) + 1];

    char c;
    int i = 0;

    while (f.get(c)) {
        if (c == '\n') {
            continue;
        }
        *(_maze + i) = c;
        i++;
    }

    _maze[(_ROWS * _COLS) + 1] = '\0';

    f.close();

    return true;
}
// get maze name from istream
std::istream& Maze::readFname(std::istream& in) {
    in >> _fname;
    initialise();
}
// prints the maze
void Maze::print() {
    for (int row = 0; row < _ROWS; ++row) {
        for (int col = 0; col < _COLS; ++col) {
            std::cout << *(_maze + (row * _ROWS + col));
        }
        std::cout << std::endl;
    }
}
// prints the maze from ostream
std::ostream& Maze::print(std::ostream& out) { print(); }
// traverse the maze
void Maze::mazeTraversal() {
    // get starting pos

    for (int row = 0; row < _ROWS; ++row) {
        for (int col = 0; col < _COLS; ++col) {
            if (*(_maze + (row * _ROWS + col)) == _AGENT) {
                _startCoords.y = row;
                _startCoords.x = col;
                continue;
            }
            if (*(_maze + (row * _ROWS + col)) == _EXIT) {
                _exitCoords.y = row;
                _exitCoords.x = col;
                continue;
            }
        }
    }

    // traverse the maze
    if (mazeTraversalUtil(_startCoords.y, _startCoords.x)) {
        std::cout << "Traversal Succeeded" << std::endl;
        std::cout << _moves << " moves" << std::endl;
    } else {
        std::cout << "Traversal Failed." << std::endl;
    }
}
// maze traversal utility function
bool Maze::mazeTraversalUtil(int x, int y) {
    *(_maze + (x * _ROWS + y)) = _AGENT;

    _moves++;

    // found exit
    if (isExit(x, y)) {
        return true;
    }

    if (((x > 0 && getTile(x - 1, y)) == _FREE || isExit(x - 1, y)) &&
        mazeTraversalUtil(x - 1, y)) {
        return true;
    }
    if (((x < _COLS && getTile(x + 1, y)) == _FREE || isExit(x + 1, y)) &&
        mazeTraversalUtil(x + 1, y)) {
        return true;
    }
    if (((y > 0 && getTile(x, y - 1)) == _FREE || isExit(x, y - 1)) &&
        mazeTraversalUtil(x, y - 1)) {
        return true;
    }
    if (((y < _ROWS && getTile(x, y + 1)) == _FREE || isExit(x, y + 1)) &&
        mazeTraversalUtil(x, y + 1)) {
        return true;
    }

    *(_maze + (x * _ROWS + y)) = _FREE;
    _moves--;

    return false;
}
// utility function
char Maze::getTile(int x, int y) { return *(_maze + (x * _ROWS + y)); }
// utility function
bool Maze::isExit(int x, int y) {
    return (x == _exitCoords.y && y == _exitCoords.x);
}
