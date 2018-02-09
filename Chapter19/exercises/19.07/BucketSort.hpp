/*
 * =====================================================================================
 *
 *       Filename:  BucketSort.h
 *
 *    Description:  Exercise 19.07 - Bucket Sort
 *
 *        Version:  1.0
 *        Created:  08/03/17 18:07:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

class BucketSort {
 public:
    void sort(std::vector<int>&);

    // print a vector
    template <typename T>
    void printVector(const std::vector<T>& data) {
        for (T elem : data) std::cout << elem << " ";

        std::cout << std::endl;
    }

 private:
};
