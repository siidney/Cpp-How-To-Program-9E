/*
 * =============================================================================
 *
 *       Filename:  ex_2134.cpp
 *
 *    Description:  Exercise 21.34 - Randomly Creating Sentences.
 *
 *        Version:  1.0
 *        Created:  19/03/18 15:55:03
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include <iostream>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());

const static int SIZE = 5;

/**
 * Returns a randomly generated number in the range 0 - n
 * @param int
 * @return int
 */
int getRandomNumber(int n) {
    return std::uniform_int_distribution<int>{0, n}(gen);
}  // end method getRandomNumber

/**
 * Returns a randomly generated word from the given array.
 * @param const char*[]
 * @return char*
 */
char* getRandomWord(const char* str[]) {
    return (char*)str[getRandomNumber(SIZE - 1)];
}  // end method getRandomWord

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    const char* article[] = { "the", "a", "one", "some", "any" };
    const char* noun[] = { "boy", "girl", "dog", "town", "car" };
    const char* verb[] = { "drove", "jumped", "ran", "walked", "skipped" };
    const char* preposition[] = { "to", "from", "over", "under", "on" };

    for (int i = 0; i < 20; ++i) {
        char* art = getRandomWord(article);

        printf("%c%s %s %s %s %s %s.\n",
                toupper(art[0]), art + 1,
                getRandomWord(noun),
                getRandomWord(verb),
                getRandomWord(preposition),
                getRandomWord(article),
                getRandomWord(noun));
    }


    return 0;
}  // end method main
