/*
 * =====================================================================================
 *
 *       Filename:  fig06_11.cpp
 *
 *    Description:  Fig. 6.11: Craps simulation
 *
 *        Version:  1.0
 *        Created:  11/04/16 11:39:25
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <ctime>
#include <iostream>

int rollDice();

int main(int argc, const char *argv[]) {
    enum Status { CONTINUE, WON, LOST };

    int myPoint;
    Status gameStatus;

    // randomize random number generator using current time
    srand(time(0));

    int sumOfDice = rollDice();

    // determine game status and point (if needed) based on first roll
    switch (sumOfDice) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            myPoint = sumOfDice;
            std::cout << "Point is " << myPoint << std::endl;
            break;
    }

    while (gameStatus == CONTINUE) {
        sumOfDice = rollDice();

        if (sumOfDice == myPoint) {
            gameStatus = WON;
        } else {
            if (sumOfDice == 7) {
                gameStatus = LOST;
            }
        }
    }

    if (gameStatus == WON) {
        std::cout << "Player wins" << std::endl;
    } else {
        std::cout << "Player loses" << std::endl;
    }

    return 0;
}
int rollDice() {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;

    int sum = die1 + die2;

    std::cout << "Player rolled " << die1 << " + " << die2 << " = " << sum
              << std::endl;

    return sum;
}
