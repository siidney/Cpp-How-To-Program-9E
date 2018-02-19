/*
 * =====================================================================================
 *
 *       Filename:  SMSDecoder.hpp
 *
 *    Description:  Exercise 18.30 - SMS Language
 *
 *        Version:  1.0
 *        Created:  05/03/17 19:34:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

enum MENU { DECODE = 1, EXIT = 9 };

class SMSDecoder {
 public:
    SMSDecoder();

    void run();

 private:
    std::map<std::string, std::string> abrvMap;
    std::string baseMsg;
    std::string decodedMsg;

    bool initialise();
    bool mapAbbreviations();

    void printMenu();
    int getInput(const std::string&);

    void decode();
    std::string getBase(const std::string&);
    std::string toUpperWord(const std::string&);
    std::string fixCase(const std::string&);
    std::string getTranslation(const std::string&);
};
