/*
 * =====================================================================================
 *
 *       Filename:  BucketSort.cpp
 *
 *    Description:  Exercise 19.07 - Bucket Sort
 *                  NOTE: This is the best your getting because f*ck bucket
 *                  sort and the absolutely nonsensical explanation(s) of it.
 *                  Spent far too long on it.
 *
 *        Version:  1.0
 *        Created:  08/03/17 18:07:20
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "BucketSort.h"

void BucketSort::sort(std::vector<int>& intVec){
    //std::vector<int> row;
    //std::vector<std::vector<int>> bucket(10, row);
    std::vector<int> bucket;

    // assign values to bucket
        for(int elem : intVec)
            bucket.push_back(elem);

    // sort individual buckets
    std::sort(bucket.begin(), bucket.end());

    // reassign to original vector
    intVec.clear();

    for(int value : bucket)
        intVec.push_back(value);
}
