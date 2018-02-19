/*
 * =====================================================================================
 *
 *       Filename:  ex_1814.cpp
 *
 *    Description:  Exercise 18.14 - Cryptograms
 *
 *        Version:  1.1
 *        Created:  15/02/17 17:21:55
 *       Revision:  19/02/18 01:44:08
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <random>

void initialise(std::map<char, char>&);
void encrypt(std::string&, const std::map<char, char>&);

int main(int argc, const char* argv[]) {
    std::map<char, char> cypher;

    initialise(cypher);

    std::string userStr;
    std::cout << "Enter a string to be cyphered: ";
    std::getline(std::cin, userStr);

    encrypt(userStr, cypher);

    std::cout << userStr << std::endl;

    return 0;
}

/*
 * Create the cryptogram cypher.
 * Randomises alphabet and maps to original letters.
 * @input map<char, char>
 */
void initialise(std::map<char, char>& cypher) {
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string shuffled = alphabet;

    std::random_device rd;

    std::shuffle(shuffled.begin(), shuffled.end(), rd);

    auto ait = alphabet.begin();
    auto sit = shuffled.begin();

    while (ait != alphabet.end()) {
        cypher.insert(std::pair<char, char>(*(ait++), *(sit++)));
    }
}

/*
 * Swaps the userStr chars for the mapped values in cypher.
 * @input string
 * @input map<char, char>
 */
void encrypt(std::string& userStr, const std::map<char, char>& cypher) {
    for (auto &c : userStr) {
        if (c != ' ') {
            if (isupper(c)) { c = tolower(c); }

            c = cypher.find(c)->second;
        }
    }
}
