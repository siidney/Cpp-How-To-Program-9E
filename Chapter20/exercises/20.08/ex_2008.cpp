/*
 * =====================================================================================
 *
 *       Filename:  ex_2008.cpp
 *
 *    Description:  Exercise 20.08 - Summing Average Elements in a List
 *
 *        Version:  1.0
 *        Created:  12/06/17 18:28:27
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "List.h"

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int main(int argc, const char* argv[]) {
    List<int> intList;
    std::vector<int> data;  // for sorting the data

    const int RAND_LIMIT = 100;
    const int LIST_SIZE = 25;

    std::srand(std::time(0));

    // generate the random numbers
    for (int i = 0; i < LIST_SIZE; ++i) {
        data.push_back((rand() % RAND_LIMIT));
    }

    // sort the data
    std::sort(data.begin(), data.end());

    // build the list
    for (unsigned int i = 0; i < data.size(); ++i) {
        intList.insertAtBack(data[i]);
    }

    // calculate sum of elements
    long sum = 0;

    ListNode<int>* iter = intList.begin();

    do {
        sum += iter->getData();
        iter = iter->next();

        if (iter->getData() == intList.end()->getData()) sum += iter->getData();
    } while (iter != intList.end());

    std::cout << "sum: " << sum << " average: " << (sum / LIST_SIZE)
              << std::endl;

    intList.print();
    std::cout << std::endl;

    return 0;
}
