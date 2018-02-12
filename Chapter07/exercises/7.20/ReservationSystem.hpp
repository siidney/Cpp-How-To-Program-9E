/*
 * =====================================================================================
 *
 *       Filename:  ReservationSystem.hpp
 *
 *    Description:  Exercise 7.20 - Airline Reservation System
 *
 *        Version:  1.0
 *        Created:  22/04/16 14:49:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>

const int capacity = 11;

enum class Availability { BOTH, FIRST, SECOND, FULL };

class ReservationSystem {
 private:
    bool _plane[capacity] = {};

    Availability _availability;

 public:
    ReservationSystem();

    void go();
    void printMenu();
    void printSeatingPlan();
    bool isSeatAvailable(int);
    int bookSeat(int);
    void checkCapacity();
    void printBoardingPass(int);
};
