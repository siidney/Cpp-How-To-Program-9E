/*
 * =====================================================================================
 *
 *       Filename:  Maze.h
 *
 *    Description:  Exercise 8.16 - Maze Traversal
 *                  Represents a maze
 *
 *        Version:  1.0
 *        Created:  02/06/16 13:20:31
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
#include <fstream>
#include <string>

struct coord2D{
    int x;
    int y;

    coord2D(int X = 0, int Y = 0) : x(X), y(Y){}
    coord2D(const coord2D& coord){x = coord.x; y = coord.y;}
};

class Maze{
    private:
        int _COLS;
        int _ROWS;
        int _moves;

        coord2D _startCoords;
        coord2D _exitCoords;

        std::string _fname;

        char _WALL = '#';
        char _AGENT = '@';
        char _FREE = '.';
        char _EXIT = 'X';

        char* _maze = nullptr;

        std::ostream& print(std::ostream& out);
        std::istream& readFname(std::istream& in);

        bool add();

        void initialise();

        void mazeTraversal();
        bool mazeTraversalUtil(int, int);

        char getTile(int, int);
        bool isExit(int, int);

    public:
        Maze();
        Maze(std::string&);

        ~Maze();

        void print();       // prints the maze

        friend std::istream& operator>>(std::istream& in, Maze& m){
            return m.readFname(in);
        }

        friend std::ostream& operator<<(std::ostream& out, Maze& m){
            return m.print(out);
        }
};
