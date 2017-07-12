/*
 * =====================================================================================
 *
 *       Filename:  ex_1907.cpp
 *
 *    Description:  Exercise 19.07 - Bucket Sort
 *
 *        Version:  1.0
 *        Created:  08/03/17 17:58:47
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "BucketSort.h"

#include <cstdlib>
#include <iostream>
#include <vector>

int main(int argc, const char* argv[]) {
    std::srand(time(0));

    const size_t limit = 100;
    const size_t size = 20;
    std::vector<int> intVec;

    for (size_t i = 0; i < size; ++i) intVec.push_back(((rand() % limit) + 1));

    BucketSort bs;

    std::cout << "\nUnsorted Vector:" << std::endl;
    bs.printVector(intVec);

    std::cout << std::endl;

    bs.sort(intVec);

    std::cout << "\nSorted Vector:" << std::endl;
    bs.printVector(intVec);

    return 0;
}
