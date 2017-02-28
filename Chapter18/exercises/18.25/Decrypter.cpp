/*
 * =====================================================================================
 *
 *       Filename:  Decrypter.cpp
 *
 *    Description:  Exercise 18.25 - Simple Decryption
 *                  TODO: Finish this. Took too long messing about with it and
 *                  rage quit more than its worth.
 *
 *        Version:  1.0
 *        Created:  22/02/17 10:25:15
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Decrypter.h"

Decrypter::Decrypter(){
    resultsFile.open("results.txt", std::ios::out);

    if(!resultsFile){
        std::cerr << "Could not create results file" << std::endl;
        return;
    }

    resultsFile.close();
}
void Decrypter::decrypt(std::string& base){
    decryptedBase = base;
    mapFrequencies(base);
    orderFrequencies();

    std::cout << decryptedBase << std::endl << std::endl;

    substituteSingle(sortedFrequencies[0].first, frequencySingles[0]);
    substituteSingle(sortedFrequencies[1].first, frequencySingles[1]);

    //while(!isDecrypted()){
    for(size_t j=0; j<SINGLES_SIZE; ++j){
        static size_t i = 0;

        if(!isDecrypted(frequencySingles[i])){
            if(validate(sortedFrequencies[i].first, frequencySingles[i]))
                substituteSingle(sortedFrequencies[i].first, frequencySingles[i]);
        }

        ++i;
    }

    std::cout << decryptedBase << std::endl << std::endl;
    writeToFile();
}
// counts frequency of each character in cypher
void Decrypter::mapFrequencies(const std::string& base){
    std::string::const_iterator it = base.begin();

    while(it != base.end()){
        char c = *(it++);

        if(!isalpha(c))
            continue;

        // find in map and update frequency or add to map
        std::unordered_map<char, unsigned int>::iterator mit = frequencyMap.find(c);

        if(mit != frequencyMap.end()){
            mit->second++;
        }else{
            frequencyMap.insert(std::pair<char, unsigned int>(c, 1));
        }
    }
}
// orders the frequency map by value
void Decrypter::orderFrequencies(){
    // copy frequency information to vector
    for(auto it = frequencyMap.cbegin(); it != frequencyMap.cend(); ++it){
        sortedFrequencies.push_back(*it);
    }

    // sort vector using custom comparison function
    std::sort(sortedFrequencies.begin(), sortedFrequencies.end(), comparePair);
}
// custom comparison helper function
bool Decrypter::comparePair(const std::pair<char, unsigned int>& firstElem,
        const std::pair<char, unsigned int>& secondElem){
    return firstElem.second > secondElem.second;
}
// SUBSTITUTIONS
// validate substitution
// sf = sorted frequency - char to replace
// fs = frequency single - replacement char
bool Decrypter::validate(char &sf, const char &fs){
    // Ensure substitution results in valid double and triple frequencies

    std::stringstream ss(decryptedBase);
    std::string word;
    bool valid = false;

    // validate word letter groups
    while(ss){
        // static to prevent resets on multiple matches
        static bool unique = false;
        ss >> word;

        size_t found = word.find_first_of(sf);

        // check if replacement == valid word
        if(word.length() == 2 && found != std::string::npos){
            if(validateDouble(word, fs))
                unique = !unique;

        // triple letter words
        }else if(word.length() == 3 && found != std::string::npos){
            if(validateTriple(word, fs))
                unique = !unique;

        // check groups of 2 and 3
        }else{
        }

        valid = unique;
    }
    return valid;
}
// validate word
bool Decrypter::validateWord(std::string& word, const char& fs){
    for(size_t i=1; i<word.size(); ++i){
        if(!isalpha(word[i]) || !isalpha(word[i-1]) || !isalpha(word[i-2]))
            continue;

        // check double
        std::string tmp;
        tmp += word[i - 1];
        tmp += word[i];

        // validate double
        if(validateDouble(tmp, fs)){
            return true;
        }
        // check triple
        if(i > 2){
            tmp += word[i - 2];

            if(validateTriple(tmp, fs))
                return true;
        }
    }
    return false;
}
// validate double char string
// returns true if replacement is unique
bool Decrypter::validateDouble(std::string& word, const char& fs){
    // build tmp string, replacing encrypted char with fs
    bool encrypted = false;
    std::string tmp;

    for(char &c : word){
        if(islower(c))
            tmp += c;
        else{
            encrypted = !encrypted;
            tmp += fs;
        }
    }

    // encrypted word found
    // compare to each in frequencyDoubles
    if(encrypted){
        for(size_t i=0; i<DOUBLES_SIZE; ++i){
            // valid replacement
            if(tmp == frequencyDoubles[i])
                return true;
        }
    }
    return false;
}
// validate triple char string
// return true if replacement is unique
bool Decrypter::validateTriple(std::string& word, const char& fs){
    // count number of encrypted chars
    int count = 0;
    for(char &c : word){
        if(isupper(c)){
            ++count;
        }
    }
    // 1 encrypted char build tmp string
    if(count == 1){
        std::string tmp;

        // replace encrypted char with fs
        for(char &c : word){
            if(islower(c))
                tmp += c;
            else
                tmp += fs;
        }

        // find valid word in frequencyTriples
        for(size_t i=0; i<TRIPLES_SIZE; ++i){
            // valid replacement
            if(tmp == frequencyTriples[i])
                return true;
        }
    }
    return false;
}
// substitute single chars
// Iterate over decryptedBase. Assign given frequencySingle to found
// sortedFrequency char.
void Decrypter::substituteSingle(char &sf, const char &fs){
    for(char &c : decryptedBase){
        if(tolower(c) == tolower(sf)){
            c = fs;
            decryptedChars.insert(c);
        }
    }
}
// Checks if given char is decrypted
bool Decrypter::isDecrypted(const char& c) const{
    std::set<char>::iterator sit = decryptedChars.find(c);

    // given char not decrypted
    if(sit == decryptedChars.end()){
        return false;
    }

    return true;
}
// writes current decryption to file
void Decrypter::writeToFile(){
    resultsFile.open("results.txt", std::ios::in | std::ios::app);

    if(!resultsFile){
        std::cerr << "Could not open results file" << std::endl;
        return;
    }

    resultsFile << decryptedBase;

    resultsFile.close();
}
