/*
 * =============================================================================
 *
 *       Filename:  ex_2137.cpp
 *
 *    Description:  Exercise 21.37 - Tokenizing Phone Numbers.
 *
 *        Version:  1.0
 *        Created:  22/03/18 11:45:46
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
 * Creates a phone number in the form 5555555555 from (555) 555-5555
 * Assumes raw is correct.
 * @param char*
 * @return char*
 */
char* tokenizePhoneNumber(char* raw) {
    const char delim[5] = "()- ";

    char* processed = reinterpret_cast<char*>(calloc(1, 8));

    char* token = strtok(raw, delim);

    while (token != nullptr) {
        memmove(processed + strlen(processed), token, strlen(token));

        token = strtok(nullptr, delim);
    }

    return processed;
}  // end method tokenizePhoneNumber

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    char raw[15];

    std::cout << "Enter phone number in the form (555) 555-5555: ";
    std::cin.getline(raw, 15);

    // assumes raw is correct
    char* processed = tokenizePhoneNumber(raw);

    std::cout << processed << std::endl;

    free(processed);

    return 0;
}  // end method main
