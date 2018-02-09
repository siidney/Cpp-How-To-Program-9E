/*
 * =====================================================================================
 *
 *       Filename:  ex_418.cpp
 *
 *    Description:  Exercise 4.18 - Tabular Output
 *
 *        Version:  1.0
 *        Created:  27/03/16 02:03:43
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    int counter = 0;

    printf("N\t10*N\t100*N\t1000*N\n\n");

    while (counter < 5) {
        counter++;

        printf("%d\t%d\t%d\t%d\n", counter, counter * 10, counter * 100, counter * 1000);
    }
    return 0;
}
