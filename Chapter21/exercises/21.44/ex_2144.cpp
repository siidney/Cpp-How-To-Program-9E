/*
 * =============================================================================
 *
 *       Filename:  ex_2144.cpp
 *
 *    Description:  Exercise 21.44 - Word Processing
 *
 *        Version:  1.0
 *        Created:  14/05/18 18:14:01
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>

/**
 * Prints the given string in the type justified format.
 * 8.5 inch wide paper.
 * 10 chars to horizonal inch.
 * 1 inch margin left and right sides.
 * 6.5 inches of text (65 chars)
 */
void printText(const char* str) {
    const int LIMIT = 65;
    const int MARGIN = 10;

    while (static_cast<bool>(*str)) {
        static unsigned int char_count = 0;

        // first line
        if (char_count == 0) { printf("%*s", MARGIN, " "); }

        if (char_count >= LIMIT) {
            printf("\n%*s", MARGIN, " ");
            char_count = 0;
        }

        // prevent word cutoff on LIMIT
        // count upcoming word
        if ((char_count < LIMIT) && (*str == ' ')) {
            unsigned int word_length = 0;

            const char* word_ptr = str + 1;

            while (static_cast<bool>(*word_ptr) && (*word_ptr != ' ')) {
                ++word_ptr;
                ++word_length;
            }

            if ((char_count + word_length) >= LIMIT) {
                char_count += word_length;
                continue;
            }
        }

        // avoid leading space
        if ((*str == ' ') && (char_count == 0)) { str++; }

        printf("%c", *(str++));
        char_count++;
    }

    printf("\n");
}  // end method printText

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const size_t LIMIT = 255;

    // char input[LIMIT];
    // printf("Enter a string: ");
    // std::cin.getline(input, LIMIT);

    char input[LIMIT] = "This is a test. Let's see if this can successfully snip the string and make it look like it's supposed to. We should make it even longer to try and test if this actually works or if it is just a fluke.";

    printText(input);

    return 0;
}  // end method main
