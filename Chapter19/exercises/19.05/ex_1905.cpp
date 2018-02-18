/*
 * =====================================================================================
 *
 *       Filename:  ex_1905.cpp
 *
 *    Description:  Exercise 19.05 - Bubble Sort
 *
 *        Version:  1.0
 *        Created:  08/03/17 17:31:58
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <iostream>
#include <vector>

// print a vector
template <typename T>
void printVector(const std::vector<T>& data) {
    for (T elem : data) std::cout << elem << " ";

    std::cout << std::endl;
}

void bubbleSort(std::vector<int>&);

int main(int argc, const char* argv[]) {
    std::srand(time(0));

    const size_t limit = 100;
    const size_t vecSize = 20;
    std::vector<int> intVec;

    // randomise elements of intVec
    for (size_t i = 0; i < vecSize; ++i) intVec.push_back((rand() % limit));

    std::cout << "\nBefore sorting:" << std::endl;
    printVector(intVec);

    bubbleSort(intVec);

    std::cout << "\nAfter Sorting:" << std::endl;
    printVector(intVec);

    return 0;
}
// bubble sort vector
void bubbleSort(std::vector<int>& intVec) {
    size_t size = intVec.size();

    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - 1; ++j) {
            if (intVec[j] > intVec[j + 1]) {
                int tmp = intVec[j];

                intVec[j] = intVec[j + 1];
                intVec[j + 1] = tmp;
            }
        }
    }
}
