/*
 * =====================================================================================
 *
 *       Filename:  fig07_08.cpp
 *
 *    Description:  Fig. 7.8: compute the sum of the elements of the array.
 *
 *        Version:  1.0
 *        Created:  18/04/16 19:39:22
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
    const int arraySize = 10;

    int a[arraySize] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    int total = 0;

    for (int i = 0; i < arraySize; ++i) {
        total += a[i];
    }

    std::cout << "Total of array elements: " << total << std::endl;
    return 0;
}
