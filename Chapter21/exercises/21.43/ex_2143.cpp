/*
 * =============================================================================
 *
 *       Filename:  ex_2143.cpp
 *
 *    Description:  Exercise 21.43 - Text Analysis A
 *
 *        Version:  1.0
 *        Created:  11/04/18 13:14:23
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <map>
#include <utility>
#include <string>
#include <vector>

/**
 * Prints the number of occurances of each letter in the given string.
 * @param const char*
 */
void countChars(const char* str) {
    if (str == nullptr) { return; }

    const size_t ALPHA_SZ = 26;

    int frequency[ALPHA_SZ] = { 0 };

    while (static_cast<bool>(*str++)) {
        if (static_cast<bool>(isalpha(*str))) { frequency[toupper(*str) - 65]++; }
    }

    for (size_t i = 0; i < ALPHA_SZ / 2; ++i) {
        std::cout << static_cast<char>(i + 65) << "  " << frequency[i] << "   "
                  << static_cast<char>((i + 13) + 65) << "   " << frequency[i + 13] << std::endl;
    }
}  // end method countChars

/**
 * Prints the number of n letter words for the given string.
 * @param char*
 */
void countLengths(char* str) {
    if (str == nullptr) { return; }

    std::vector<int> frequency;
    size_t VEC_SZ = frequency.size();
    size_t STR_LEN = strlen(str);

    char* savePtr = reinterpret_cast<char*>(calloc(STR_LEN + 1, sizeof(char)));
    strncpy(savePtr, str, STR_LEN + 1);
    char* token;

    while (static_cast<bool>(token = strtok_r(savePtr, ",.;: ", &savePtr))) {
        size_t len = strlen(token);

        if (len > VEC_SZ) {
            frequency.resize(len, 0);

            VEC_SZ = frequency.size();
        }
        frequency[len - 1]++;
    }

    savePtr = nullptr;
    free(savePtr);

    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        static int i = 0;

        ++i;

        if (*it > 0) { std::cout << i << "\t" << *it << std::endl; }
    }
}  // end method countLengths

/**
 * Prints the frequency each words occurs in the given string
 * @param char*
 */
void countWords(char* str) {
    if (str == nullptr) { return; }

    size_t STR_LEN = strlen(str);

    char* savePtr = reinterpret_cast<char*>(calloc(STR_LEN + 1, sizeof(char)));
    strncpy(savePtr, str, STR_LEN + 1);
    char* token;

    std::map <std::string, int> frequencyMap;

    while (static_cast<bool>(token = strtok_r(savePtr, ",.;: ", &savePtr))) {
        token[0] = tolower(token[0]);

        auto search = frequencyMap.find(token);

        if (search != frequencyMap.end()) {
            search->second++;
        } else {
            frequencyMap.emplace(std::pair<std::string, int>(token, 1));
        }
    }

    savePtr = nullptr;
    free(savePtr);

    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        std::cout << std::left << std::setw(20) << it->first << "\t" << it->second << std::endl;
    }
}  // end method countWords

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const size_t LIMIT = 255;

    char input[LIMIT];
    printf("Enter a string: ");
    std::cin.getline(input, LIMIT);

    printf("Information about \"%s\":\n", input);

    // A - Number of occurances of each letter
    printf("\nFrequency of chars:\n");
    countChars(input);

    // B - Number of n letter words
    printf("\nFrequency of n lettered words:\n");
    countLengths(input);

    // C - Frequency of words
    printf("\nFrequency of word occurances:\n");
    countWords(input);

    return 0;
}  // end method main
