/*
 * =====================================================================================
 *
 *       Filename:  ex_1909.cpp
 *
 *    Description:  Exercise 19.09 - Recursive Binary Search
 *
 *        Version:  1.0
 *        Created:  10/03/17 17:12:41
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int recursiveBinarySearch(const std::vector<int>&, int, int, int);

// print a vector
template <typename T>
void print(const std::vector<T>& data) {
    for (T elem : data) std::cout << elem << " ";

    std::cout << std::endl;
}

int main(int argc, const char* argv[]) {
    std::srand(time(0));

    const size_t limit = 100;
    const size_t size = 100;
    std::vector<int> intVec;

    int searchKey = ((rand() % limit) + 1);

    for (size_t i = 0; i < size; ++i) intVec.push_back(((rand() % limit) + 1));

    std::sort(intVec.begin(), intVec.end());

    std::cout << "Searching for key " << searchKey << " in sorted vector:\n\n";
    print(intVec);

    int result = recursiveBinarySearch(intVec, searchKey, 0, intVec.size() - 1);

    if (result > -1)
        std::cout << "\n"
                  << searchKey << " found at location " << result << std::endl;
    else
        std::cout << "\n" << searchKey << " not found." << std::endl;

    return 0;
}
// recursive binary search
int recursiveBinarySearch(const std::vector<int>& intVec, int searchKey,
                          int low, int high) {
    int middle = (low + high + 1) / 2;

    if (low > high)
        return -1;

    if (searchKey == intVec[middle])
        return middle;

    if (searchKey < intVec[middle])
        return recursiveBinarySearch(intVec, searchKey, low, (middle - 1));
    else
        return recursiveBinarySearch(intVec, searchKey, (middle + 1), high);
}
