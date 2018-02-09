/*
 * =====================================================================================
 *
 *       Filename:  ex_1826.cpp
 *
 *    Description:  Exercise 18.26 - Sorting Strings
 *
 *        Version:  1.0
 *        Created:  28/02/17 12:44:35
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

void selectionSort(std::string[], const size_t,
                   bool (*)(std::string&, std::string&));
void swap(std::string* const, std::string* const);
bool ascending(std::string&, std::string&);
bool descending(std::string&, std::string&);

int main(int argc, const char* argv[]) {
    const size_t arraySize = 10;

    int order;  // 1 ascending, 2 descending
    std::string a[arraySize] = {
        "test", "avacado",  "ascending", "zebra", "cellphone",
        "feet", "elephant", "nunchucks", "brian", "messi.hpp"};

    std::cout << "1 - Ascending\n"
              << "2 - Descending\n> ";
    std::cin >> order;

    // output original array
    std::cout << "\nData items in original order\n";

    for (size_t i = 0; i < arraySize; ++i) {
        std::cout << a[i] << " ";
    }

    if (order == 1) {
        selectionSort(a, arraySize, ascending);
        std::cout << "\nData items in ascending order\n";
    } else {
        selectionSort(a, arraySize, descending);
        std::cout << "\nData items in descending order\n";
    }

    // output sorted array
    for (size_t i = 0; i < arraySize; ++i) {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
// selection sort of strings
void selectionSort(std::string a[], const size_t size,
                   bool (*compare)(std::string&, std::string&)) {
    for (size_t i = 0; i < size - 1; ++i) {
        size_t smallestOrLargest = i;

        for (size_t index = i + 1; index < size; ++index) {
            if (!(*compare)(a[smallestOrLargest], a[index])) {
                smallestOrLargest = index;
            }
        }
        swap(&a[smallestOrLargest], &a[i]);
    }
}
// swap values at memory locations to which element1Ptr and element2Ptr point
void swap(std::string* const element1Ptr, std::string* const element2Ptr) {
    std::string hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
// ascending order sort
bool ascending(const std::string& a, const std::string& b) {
    return a < b;
}
// descending order sort
bool descending(const std::string& a, const std::string& b) {
    return a > b;
}
