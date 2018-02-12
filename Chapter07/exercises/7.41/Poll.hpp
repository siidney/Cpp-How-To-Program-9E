/*
 * =====================================================================================
 *
 *       Filename:  Poll.hpp
 *
 *    Description:  Exercise 7.41 - Polling
 *
 *        Version:  1.0
 *        Created:  26/04/16 16:28:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iomanip>
#include <iostream>
#include <string>

class Poll {
 private:
    static const size_t TOPICS = 5;
    static const size_t RESPONSES = 10;

    std::string topics[TOPICS];
    int responses[TOPICS][RESPONSES];

 public:
    Poll();
    ~Poll() {}

    void initialise();
    void go();
    void askPoll();
    void printResults();
};
