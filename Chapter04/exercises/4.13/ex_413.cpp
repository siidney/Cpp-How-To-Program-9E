/*
 * =====================================================================================
 *
 *       Filename:  ex_413.cpp
 *
 *    Description:  Exercise 4.13 - Gas Mileage
 *
 *        Version:  1.0
 *        Created:  27/03/16 00:33:47
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "GasMileage.hpp"

static const int QUIT = -1;

int main(int argc, const char *argv[]) {
    GasMileage gm;

    while (gm.getMilesDriven() != QUIT) {
        gm.run();
    }

    return 0;
}
