/*
 * =====================================================================================
 *
 *       Filename:  ex_643.cpp
 *
 *    Description:  Exercise 6.43 - Distance Between Points
 *
 *        Version:  1.0
 *        Created:  15/04/16 17:14:36
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cmath>
#include <iostream>

struct Points {
    Points(double X, double Y) {
        x = X;
        y = Y;
    }

    double x;
    double y;
};

double distance(Points, Points);

int main(int argc, const char *argv[]) {
    Points pointA(1, 5);
    Points pointB(2, 6);

    std::cout << "Program to print the distance between two points" << std::endl;

    std::cout << "Distance between (" << pointA.x << "," << pointA.y << ")("
              << pointB.x << "," << pointB.y
              << ") = " << distance(pointA, pointB) << std::endl;

    return 0;
}
// calculate and return the distance between two points
double distance(Points pointA, Points pointB) {
    double diffX = pointA.x - pointB.x;
    double diffY = pointA.y - pointB.y;

    return sqrt((diffY * diffY) + (diffX * diffX));
}
