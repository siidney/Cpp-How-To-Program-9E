/*
 * =====================================================================================
 *
 *       Filename:  SMSDecoder.cpp
 *
 *    Description:  Exercise 18.30 - SMS Language
 *
 *        Version:  1.0
 *        Created:  05/03/17 19:34:57
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <map>
#include <string>

#include "SMSDecoder.hpp"

SMSDecoder::SMSDecoder() {}
// main program entry point
void SMSDecoder::run() {
    if (!initialise()) {
        std::cerr << "Could not initialise SMSDecoder" << std::endl;
        return;
    }
    printMenu();
}
// initialise
bool SMSDecoder::initialise() { return mapAbbreviations(); }
// read abbreviations file, map values to abbreviations
bool SMSDecoder::mapAbbreviations() {
    std::ifstream abrfile("abbreviations", std::ios::out);

    if (!abrfile) {
        std::cerr << "Could not open abbreviations file" << std::endl;
        return false;
    }

    std::string line;

    while (std::getline(abrfile, line)) {
        // split line by delimiter and add to map
        std::istringstream ss(line);
        std::string values[2];
        std::string tmp;
        int i = 0;

        while (std::getline(ss, tmp, ';')) {
            values[i++] = tmp;
        }

        abrvMap.emplace(values[0], values[1]);
    }
    return true;
}
// main loop
void SMSDecoder::printMenu() {
    int choice;
    std::string menu = "1 - Decode new SMS\n9 - Exit";

    while ((choice = getInput(menu)) != EXIT) {
        switch (choice) {
            case DECODE:
                decode();
                break;
            default:
                std::cerr << "Incorect Input" << std::endl;
                break;
        }
    }
}
// get user main menu input
int SMSDecoder::getInput(const std::string& msg) {
    int choice = 0;

    do {
        std::cout << msg << "\n> ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            continue;
        }
    } while (choice < 1 || choice > 9);

    return choice;
}
// get and decode user defined message
void SMSDecoder::decode() {
    baseMsg = getBase("Enter SMS to be decoded");
    decodedMsg = "";

    // tokenize base message
    // uppercase each word, check against map
    // add original or replaced word to decodedMsg
    std::string word;
    std::string sp = " ";
    std::stringstream ss(baseMsg);

    while (ss >> word) {
        std::string sanitised = word;
        std::string punct = "";
        // strip, save and reinsert punctuation (only from end of word)
        for (std::string::reverse_iterator rit = word.rbegin();
             rit != word.rend(); ++rit) {
            if (std::ispunct(*rit)) {
                punct += *rit;
            } else {
                break;
            }
        }
        if (punct != "") { sanitised = word.substr(0, word.find(punct)); }

        decodedMsg += getTranslation(toUpperWord(sanitised));
        decodedMsg += punct;
        decodedMsg += sp;
    }

    std::cout << baseMsg << std::endl << std::endl;
    std::cout << decodedMsg << std::endl;
}
// get SMS from user
std::string SMSDecoder::getBase(const std::string& msg) {
    std::cin.ignore();
    std::cout << msg << "\n> ";

    std::string sms;

    std::getline(std::cin, sms);

    // TODO(me): validate input
    return sms;
}
std::string SMSDecoder::toUpperWord(const std::string& word) {
    std::string upper;

    for (std::string::const_iterator it = word.begin(); it != word.end();
         ++it) {
        upper += ((std::isalpha(*it)) ? std::toupper(*it) : *it);
    }
    return upper;
}
// upper/lower case word
std::string SMSDecoder::fixCase(const std::string& word) {
    std::string fixed;

    for (std::string::const_iterator it = word.begin(); it != word.end();
         ++it) {
        if (std::isalpha(*it)) {
            fixed +=
                ((std::isupper(*it)) ? std::tolower(*it) : std::toupper(*it));
        } else {
            fixed += *it;
        }
    }
    return fixed;
}
// Checks for given word in map
// if found returns translation, else returns original word
std::string SMSDecoder::getTranslation(const std::string& word) {
    std::map<std::string, std::string>::iterator it = abrvMap.find(word);

    // case already good
    if (it != abrvMap.end()) { return it->second; }

    // revert word to original case
    return fixCase(word);
}
