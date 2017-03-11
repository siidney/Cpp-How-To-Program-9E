/*
 * =====================================================================================
 *
 *       Filename:  ex_1908.cpp
 *
 *    Description:  Exercise 19.08 - Recursive Linear Search
 *
 *        Version:  1.0
 *        Created:  10/03/17 16:52:30
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <cstdlib>

// print a vector
template<typename T>
void printVector(const std::vector<T>& data){
    for(T elem : data)
        std::cout << elem << " ";

    std::cout << std::endl;
}

int recursiveLinearSearch(const std::vector<int>&, int, size_t);

int main(int argc, const char* argv[]){
    std::srand(time(0));

    const size_t limit = 100;
    const size_t size = 100;
    std::vector<int> intVec;

    int searchKey = ((rand() % limit) + 1);

    for(size_t i=0; i<size; ++i)
        intVec.push_back(((rand() % limit) + 1));

    std::cout << "Searching for " << searchKey << " in vector: " << std::endl;
    printVector(intVec);
    std::cout << std::endl;

    int element = recursiveLinearSearch(intVec, searchKey, 0);

    if(element != -1)
        std::cout << searchKey << " found in element " << element << std::endl;
    else
        std::cout << searchKey << " not found." << std::endl;

    return 0;
}
// recursively compare searchKey to every vector element until location is found
// or end of vector; return subscript of element if key is found or -1 otherwise
int recursiveLinearSearch(const std::vector<int>& intVec, int searchKey, size_t i){
    if(i == intVec.size() - 1)
        return -1;

    if(intVec[i] == searchKey)
        return i;

    return recursiveLinearSearch(intVec, searchKey, ++i);
}
