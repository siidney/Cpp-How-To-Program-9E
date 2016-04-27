/*
 * =====================================================================================
 *
 *       Filename:  ex_730.cpp
 *
 *    Description:  Exercise 7.30 - Bucket Sort
 *                  NOTE: Not happy with this as it just doesn't feel right
 *                  as it works and I really didn't like doing this I'm leaving
 *                  it as is.
 *
 *        Version:  1.0
 *        Created:  25/04/16 16:50:13
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

static const int limit = 10;

void bucketSort(int[], int);
int getPlaces(int[], int);

int main(int argc, const char *argv[]){
    int n[limit];

    srand(time(0));

    for(int i=0; i<limit; ++i){
        n[i] = rand() % 1000 + 1;
    }

    std::cout << "\nUnsorted" << std::endl;
    for(int i=0; i<limit; ++i){
        std::cout << n[i] << std::endl;
    }

    bucketSort(n, limit);

    std::cout << "\nSorted:" << std::endl;

    for(int i=0; i<limit; ++i){
        std::cout << n[i] << std::endl;
    }

    return 0;
}
// bucket sort
void bucketSort(int n[], int limit){
    int places = getPlaces(n, limit);
    int place = 10;

    // create bucket
    int bucket[10][limit];

    while(places != 0){
        // reset counters and buckets every turn
        int counters[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for(int row=0; row<10; ++row){
            for(int col=0; col<limit; ++col){
                bucket[col][row] = 0;
            }
        }

        // 1 - place each array value into bucket
        for(int i=0, row=0; i<limit; ++i){
            row = n[i] % place;

            // adjust rows to be within range
            if(row > 9)
                row /= (place / 10);

            // account for single digits numbers
            // don't know why they don't automatically go into bucket 0
            if(n[i] < 9)
                row = 0;

            bucket[row][counters[row]] = n[i];

            ++counters[row];
        }

        // print bucket at each stage
        /*for(int row=0; row<10; ++row){
            std::cout << row << ": ";

            for(int col=0; col<limit; ++col){

                std::cout << bucket[row][col] << " ";
            }
            std::cout << std::endl;
        }*/

        // 2 - Copy values back into array
        for(int row=0, i=0; row<10; ++row){
            for(int col=0; col<limit; ++col){
                if(bucket[row][col] != 0){
                    n[i] = bucket[row][col];
                    ++i;
                }
            }
        }
        // 3 - Repeat for subsequent digit positions until limit reached
        place *= 10;
        --places;
    }
}
// returns number of places for maximum value
int getPlaces(int n[], int limit){
    int max = n[0];

    for(int i=1; i<limit; ++i){
        if(n[i] > max)
            max = n[i];
    }

    int count = 0;

    while(max != 0){
        max /= 10;
        ++count;
    }

    return count;
}
