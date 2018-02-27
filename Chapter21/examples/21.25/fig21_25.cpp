/*
 * =============================================================================
 *
 *       Filename:  fig21_25.cpp
 *
 *    Description:  Fig. 21.25: Using strtok to tokenize a string.
 *
 *        Version:  1.0
 *        Created:  27/02/18 11:01:31
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <cstring>  // prototype for strtok

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char sentence[] = "This is a sentence with 7 tokens";
    char *tokenPtr;

    std::cout << "The string to be tokenized is:\n" << sentence << "\n\nThe tokens are:\n\n";

    // begin tokenization of sentence
    tokenPtr = strtok(sentence, " ");

    // continue tokenizing sentence until tokenPtr becomes nullptr
    while (tokenPtr != nullptr) {
        std::cout << tokenPtr << '\n';

        tokenPtr = strtok(nullptr, " ");
    }

    std::cout << "\nAfter strtok, sentence = " << sentence << std::endl;

    return 0;
}  // end method main
