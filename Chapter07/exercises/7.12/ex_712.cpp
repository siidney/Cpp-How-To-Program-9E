/*
 * =====================================================================================
 *
 *       Filename:  ex_712.cpp
 *
 *    Description:  Exercise 7.12 - Bubble Sort Enhancements
 *
 *        Version:  1.0
 *        Created:  21/04/16 18:15:10
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <random>

void printArray(int[], int);
void swap(int*, int*);

const int limit = 10;

int main(int argc, const char *argv[]) {
    std::cout << "Optimised bubble sort to for an integer array" << std::endl;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 100);

    int n[limit] = {};

    // randomise elements of n
    for (int i = 0; i < limit; ++i) {
        n[i] = dis(gen);
    }

    std::cout << "Unsorted array n: " << std::endl;
    // print unsorted array
    printArray(n, limit);

    // BUBBLE SORT
    for (int i = 0, swapped = 0; i < limit - 1; swapped = 0, ++i) {
        for (int j = 0; j < limit - i - 1; ++j) {
            if (n[j] > n[j + 1]) {
                swap(&n[j], &n[j + 1]);
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }

    std::cout << "\nSorted array n: " << std::endl;

    // print sorted array
    printArray(n, limit);

    return 0;
}

// prints array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }
}

/**
 * Swaps the given elements
 * @param int*
 * @param int*
 */
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}  // end method swap
