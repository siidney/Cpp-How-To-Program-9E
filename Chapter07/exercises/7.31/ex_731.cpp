/*
 * =====================================================================================
 *
 *       Filename:  ex_731.cpp
 *
 *    Description:  Exercise 7.31 - Selection Sort
 *
 *        Version:  1.0
 *        Created:  26/04/16 13:13:45
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <ctime>
#include <iostream>

void selectionSort(int[], int);

static const int LIMIT = 10;

int main(int argc, const char *argv[]) {
    int n[LIMIT];

    srand(time(0));

    for (int i = 0; i < LIMIT; ++i) {
        n[i] = rand() % 100 + 1;
    }

    // print unsorted array
    std::cout << "Before selectionSort: " << std::endl;

    for (int i = 0; i < LIMIT; ++i) {
        std::cout << n[i] << std::endl;
    }

    selectionSort(n, LIMIT);

    // print sorted array
    std::cout << "\nAfter selectionSort: " << std::endl;

    for (int i = 0; i < LIMIT; ++i) {
        std::cout << n[i] << std::endl;
    }

    return 0;
}
// selection sort recursive algorithm
void selectionSort(int n[], int LIMIT) {
    static int startIndex = 0;
    int minIndex = startIndex;

    // exit condition
    if (startIndex >= LIMIT - 1) return;

    // get the index of the smallest value
    for (int i = startIndex + 1; i < LIMIT; ++i) {
        if (n[i] < n[minIndex]) minIndex = i;
    }

    // swap with n[startIndex]
    int tmp = n[startIndex];
    n[startIndex] = n[minIndex];
    n[minIndex] = tmp;

    // increment startIndex
    ++startIndex;

    selectionSort(n, LIMIT);
}
