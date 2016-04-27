/*
 * =====================================================================================
 *
 *       Filename:  ex_735.cpp
 *
 *    Description:  Exercise 7.35 - Print an Array
 *
 *        Version:  1.0
 *        Created:  26/04/16 14:08:26
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <ctime>

void printArray(const int[], int, int);

static const int limit = 20;

int main(int argc, const char *argv[]){
    std::cout << "Program to recursively print an array" << std::endl;

    srand(time(0));

    int n[limit];

    for(int i=0; i<limit; ++i){
        n[i] = rand() % 100 + 1;
    }

    printArray(n, 0, limit);

    return 0;
}
// recursively print an array
void printArray(const int n[], int start, int end){
    if(start >= end)
        return;

    std::cout << n[start] << std::endl;

    printArray(n, ++start, end);
}
