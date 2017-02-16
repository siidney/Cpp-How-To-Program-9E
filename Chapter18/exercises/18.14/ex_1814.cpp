/*
 * =====================================================================================
 *
 *       Filename:  ex_1814.cpp
 *
 *    Description:  Exercise 18.14 - Cryptograms
 *                  Made this so it randomises the cyper every run.
 *
 *        Version:  1.0
 *        Created:  15/02/17 17:21:55
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <ctime>

void initialise(std::map<char, char>&);
void encrypt(std::string&, std::map<char, char>&);
void print(const std::map<char, char>&);

int main(int argc, const char* argv[]){
    srand((int)time(0));

    std::map<char, char> cypher;

    initialise(cypher);

    std::string userStr;
    std::cout << "Enter a string to be cyphered: ";
    std::getline(std::cin, userStr);

    encrypt(userStr, cypher);

    std::cout << userStr << std::endl;

    //print(cypher);

    return 0;
}
// create the cryptogram cypher
// randomises alphabet and maps to original letters
void initialise(std::map<char, char>& cypher){
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string shuffled = alphabet;

    std::random_shuffle(shuffled.begin(), shuffled.end());

    std::string::iterator ait = alphabet.begin();
    std::string::iterator sit = shuffled.begin();

    while(ait != alphabet.end()){
        cypher.insert(std::pair<char, char>(*(ait++), *(sit++)));
    }
}
// cypherise the given string
void encrypt(std::string& userStr, std::map<char, char>& cypher){
    std::string::iterator it = userStr.begin();

    while(it != userStr.end()){
        if(*it != ' '){
            if(isupper(*it))
                *it = tolower(*it);

            *it = cypher.find(*(it++))->second;
        }
        else
            ++it;
    }
}
// print map contents
void print(const std::map<char, char>& cypher){
    for(auto elem : cypher){
        std::cout << elem.first << " " << elem.second << std::endl;
    }
}
