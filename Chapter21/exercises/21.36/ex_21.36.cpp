/*
 * =============================================================================
 *
 *       Filename:  ex_21.36.cpp
 *
 *    Description:  Exercise 21.36 - Pig Latin
 *
 *        Version:  1.0
 *        Created:  20/03/18 10:58:43
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>
#include <cctype>

/**
 * Checks if given char is vowel. Aa, Ee, Ii, Oo, Uu
 * @param char
 * @return bool
 */
bool isVowel(char c) {
    const char VOWELS[6] = "aeiou";

    return static_cast<bool>(strchr(VOWELS, tolower(c)));
}  // end method isVowel

/**
 * Forms words beginning with consonants.
 * @param const char*
 * @return char*
 */
char* formConsonant(const char* str) {
    static const char SUFFIXCON[3] = "ay";
    int n = 0;

    char* pigStr = reinterpret_cast<char*>(calloc(1, sizeof(str) + sizeof(SUFFIXCON) + 1));

    // pointer to beginning
    char* original = (char*)str;

    // check for trailing punctuation
    bool tpunct = static_cast<bool>(ispunct(str[strlen(str) - 1]));

    size_t lenStr = ((tpunct) ? strlen(str) - 1 : strlen(str));

    for (; *str; ++str, ++n) {
        if (isVowel(str[0])) { break; }
    }

    // str points to vowel - beginning of pigStr
    memmove(pigStr, str, lenStr - n);

    // preserve beginning as upper
    if (static_cast<bool>(isupper(original[0]))) {
        pigStr[0] = toupper(pigStr[0]);
        original[0] = tolower(original[0]);
    }

    // append consonant cluster
    memmove(pigStr + strlen(pigStr), original, n);

    // append suffix
    memmove(pigStr + strlen(pigStr), SUFFIXCON, strlen(SUFFIXCON));

    // append trailing punctuation
    if (tpunct) { memmove(pigStr + strlen(pigStr), &str[strlen(str) - 1], 1); }

    return pigStr;
}  // end method formConsonant

/**
 * Forms words beginning with vowels
 * @param const char*
 * @return char*
 */
char* formVowel(const char* str) {
    static const char* SUFFIXVOWEL = "yay";

    char* pigStr = reinterpret_cast<char*>(calloc(1, sizeof(str) + sizeof(SUFFIXVOWEL) + 1));

    // check for, and strip trailing punctuation
    bool tpunct = static_cast<bool>(ispunct(str[strlen(str) - 1]));

    size_t lenStr = ((tpunct) ? strlen(str) - 1 : strlen(str));

    // move original string
    memmove(pigStr, str, lenStr);

    // append suffix
    memmove(pigStr + strlen(pigStr), SUFFIXVOWEL, strlen(SUFFIXVOWEL));

    // append trailing punctuation
    if (tpunct) { memmove(pigStr + strlen(pigStr), &str[strlen(str) - 1], 1); }

    return pigStr;
}  // end method formVowel

/**
 * Converts the given word into pig latin. Rules taken from:
 * https://www.wikihow.com/Speak-Pig-Latin
 * @param const char*
 * @return char*
 */
char* createLatinWord(const char* str) {
    // word starts with puntuation
    int i = (static_cast<bool>(ispunct(str[0])) ? 1 : 0);

    if (isVowel(str[i])) {
        return formVowel(str);
    }
    if (!isVowel(str[i])) {
        return formConsonant(str);
    }
}  // end method createLatinWord

/**
 * Converts, and prints, the given word into its pig latin equivalent.
 * @param const char*
 */
void printLatinWord(const char* str) {
    char* pigWord = createLatinWord(str);

    printf("%s ", pigWord);

    // free memory
    free(pigWord);
}  // end method printLatinWord

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char sentence[255];
    const char delim[2] = " ";

    std::cout << "Enter a sentence for pig latin conversion: ";
    std::cin.getline(sentence, 255);

    char* token = strtok(sentence, delim);

    while (token != nullptr) {
        printLatinWord(token);

        token = strtok(nullptr, delim);
    }

    std::cout << std::endl;

    return 0;
}  // end method main
