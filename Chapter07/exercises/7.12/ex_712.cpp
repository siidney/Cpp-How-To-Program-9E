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
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>

void printArray(int [], int);

const int limit = 10;

int main(int argc, const char *argv[]){
    std::cout << "Optimised bubble sort to for an integer array" << std::endl;

//    srand(time(0));

    int n[limit] = {};

    // randomise elements of n
    for(int i=0; i<limit; ++i){
        n[i] = rand() % 100;
    }

    std::cout << "Unsorted array n: " << std::endl;
    // print unsorted array
    printArray(n, limit);

    // BUBBLE SORT
    for(int i=0, swaps=0; i<limit; swaps=0, ++i){
        // inner loop limit can decrease by i as the last value on each pass
        // will be in the correct order
        for(int j=0; j<limit - i; ++j){
            // swap values if needed
            if(n[j] > n[j + 1]){
                int temp = n[j];

                n[j] = n[j + 1];
                n[j + 1] = temp;

                ++swaps;
            }
        }
        // if no swaps made no need to make another pass
        if(swaps == 0){
            break;
        }
    }

    std::cout << "\nSorted array n: " << std::endl;

    // print sorted array
    printArray(n, limit);

    return 0;
}
// prints array
void printArray(int n[], int sizeOfN){
    for(int i=0; i<sizeOfN; ++i){
        std::cout << n[i] << std::endl;
    }
}
