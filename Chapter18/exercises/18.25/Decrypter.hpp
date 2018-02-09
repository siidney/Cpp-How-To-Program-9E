/*
 * =====================================================================================
 *
 *       Filename:  Decrypter.h
 *
 *    Description:  Exercise 18.25 - Simple Decryption
 *
 *        Version:  1.0
 *        Created:  22/02/17 10:24:47
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
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <utility>

class Decrypter {
 public:
    Decrypter();

    void decrypt(std::string&);

 private:
    static const size_t SINGLES_SIZE = 27;
    static const size_t DOUBLES_SIZE = 21;
    static const size_t TRIPLES_SIZE = 7;

    const char frequencySingles[SINGLES_SIZE] = {
        'e', 't', 'a', 'o', 'i', 'n', 's', 'h', 'r', 'd', 'l', 'u', 'c',
        'm', 'w', 'f', 'y', 'g', 'p', 'b', 'u', 'k', 'x', 'j', 'q', 'z'};
    const std::string frequencyDoubles[DOUBLES_SIZE] = {
        ".hpp", "ea", "of", "to", "in", "it", "is", "be", "as", "at", "so",
        "we", "he", "by", "or", "on", "do", "if", "me", "my", "up"};
    const std::string frequencyTriples[TRIPLES_SIZE] = {
        "the", "est", "for", "and", "his", "ent", "tha"};

    std::unordered_map<char, unsigned int> frequencyMap;
    std::vector<std::pair<char, unsigned int>> sortedFrequencies;
    std::string decryptedBase;
    std::fstream resultsFile;
    std::set<char> decryptedChars;

    void mapFrequencies(const std::string&);
    void orderFrequencies();
    bool validate(char&, const char&);
    bool validateWord(std::string&, const char&);
    bool validateDouble(std::string&, const char&);
    bool validateTriple(std::string&, const char&);
    void substituteSingle(char&, const char&);
    void writeToFile();

    // utility functions
    bool isDecrypted(const char&) const;
    static bool comparePair(const std::pair<char, unsigned int>& firstElem,
                            const std::pair<char, unsigned int>& secondElem);
};
