/*
 * =====================================================================================
 *
 *       Filename:  ex_1813.cpp
 *
 *    Description:  Exercise 18.13 - Alphabetising Animal Names
 *
 *        Version:  1.1
 *        Created:  15/02/17 10:16:45
 *       Revision:  19/02/18 01:26:11
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void readWordList(std::vector<std::string>&, std::istream&);
void sort(std::vector<std::string>&);
void alphabetise(std::vector<std::string>&);
void print(const std::vector<std::string>&);

int main(int argc, const char* argv[]) {
    std::ifstream wordFile("animals.txt", std::ios::in);
    std::vector<std::string> wordList;

    if (!wordFile) {
        std::cerr << "Could not open animal list file." << std::endl;
        return 1;
    }

    readWordList(wordList, wordFile);

    wordFile.close();

    std::cout << "\nBefore Alphabetise:" << std::endl;
    print(wordList);
    alphabetise(wordList);
    std::cout << "\nAfter Alphabetise: " << std::endl;
    print(wordList);

    return 0;
}
// read word list into vector
void readWordList(std::vector<std::string>& wordList, std::istream& wordFile) {
    wordFile.seekg(0, std::ios::beg);

    std::string word;

    while (std::getline(wordFile, word)) { wordList.emplace_back(word); }
}

/**
 * Alphabetises the given vector of strings.
 * @param vector<string>
 */
void alphabetise(std::vector<std::string> &wordList) {
    for (auto &str : wordList) { str[0] = std::toupper(str[0]); }
}  // end method alphabetise

/**
 * Prints the given vector
 */
void print(const std::vector<std::string> &wordList) {
    for (auto &str : wordList) { std::cout << str << ' '; }

    std::cout << std::endl;
}  // end method print
