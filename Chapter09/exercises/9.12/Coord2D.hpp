/*
 * =====================================================================================
 *
 *       Filename:  Coord2D.hpp
 *
 *    Description:  Exercise 9.12 - 2D Coordinate Representation
 *
 *        Version:  1.0
 *        Created:  09/06/16 18:28:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

class Coord2D {
 public:
    explicit Coord2D(int X = 0, int Y = 0) {
        setX(X);
        setY(Y);
    }

    // SETTERS
    void setX(int X) { x = X; }
    void setY(int Y) { y = Y; }

    // GETTERS
    int getX() { return x; }
    int getY() { return y; }

 private:
    int x;
    int y;
};
