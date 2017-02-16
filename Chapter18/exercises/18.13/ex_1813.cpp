/*
 * =====================================================================================
 *
 *       Filename:  ex_1813.cpp
 *
 *    Description:  Exercise 18.13 - Alphabetising Animal Names
 *
 *        Version:  1.0
 *        Created:  15/02/17 10:16:45
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
#include <vector>
#include <fstream>

void readWordList(std::vector<std::string>&, std::istream&);
void sort(std::vector<std::string>&);
void print(std::vector<std::string>&);

int main(int argc, const char* argv[]){
    std::ifstream wordFile("animals.txt", std::ios::in);
    std::vector<std::string> wordList;

    if(!wordFile){
        std::cerr << "Could not open animal list file." << std::endl;
        return 1;
    }

    readWordList(wordList, wordFile);

    wordFile.close();

    std::cout << "\nBefore Sort:" << std::endl;
    print(wordList);
    sort(wordList);
    std::cout << "\nAfter Sort: " << std::endl;
    print(wordList);

    return 0;
}
// read word list into vector
void readWordList(std::vector<std::string>& wordList, std::istream& wordFile){
    wordFile.seekg(0, std::ios::beg);

    std::string word;

    while(std::getline(wordFile, word))
        wordList.push_back(word);
}
// bubble sort list of animal names
// only checking if first letter is capitalised. Not sorting on only capitalised
// letters as it doesn't produce required results.
void sort(std::vector<std::string>& wordList){
    for(unsigned int i=0; i<wordList.size(); ++i){
        for(unsigned int j=0; j<wordList.size() - 1; ++j){
            if((wordList[j][0] >= 65 && wordList[j][0] <= 90) &&
                    (wordList[j+1][0] >= 65 && wordList[j+1][0] <= 90)){
                if(wordList[j] > wordList[j+1]){
                    std::string tmp = wordList[j+1];
                    wordList[j+1] = wordList[j];
                    wordList[j] = tmp;
                }
            }
        }
    }
}
// print vector
void print(std::vector<std::string>& wordList){
    for(unsigned int i=0; i<wordList.size(); ++i){
        std::cout << wordList[i] << ' ';
    }
    std::cout << std::endl;
}
