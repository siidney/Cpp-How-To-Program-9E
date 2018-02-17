/*
 * =====================================================================================
 *
 *       Filename:  ex_815.cpp
 *
 *    Description:  Exercise 8.15 - QuickSort
 *                  NOTE: Not my original solution. Taken from the interwebs.
 *                  I don't fully understand this yet.
 *
 *        Version:  1.0
 *        Created:  06/05/16 19:51:54
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>
#include <utility>

void quickSort(int[], int, int);
int partition(int[], int, int);
void swap(int*, int*);
void printArray(int[], int);

int main(int argc, const char* argv[]) {
    const int limit = 10;

    int a[limit] = {32, 2, 6, 4, 89, 8, 10, 12, 68, 45};

    std::cout << "Unsorted Array:" << std::endl;

    printArray(a, limit);

    quickSort(a, 0, limit - 1);

    std::cout << "\nSorted Array:" << std::endl;

    printArray(a, limit);

    return 0;
}

// recursive quickSort
void quickSort(int a[], int start, int end) {
    // base case
    if (start < end) {
        // middle = subscript of sorted element
        int pivot = partition(a, start, end);

        // sort beginning
        quickSort(a, start, pivot - 1);
        // sort end
        quickSort(a, pivot + 1, end);
    }
}

// takes first element as pivot, sorts array around it's value
// Returns subscript of sorted element.
int partition(int a[], int start, int end) {
    int pivot = a[start];  // value of pivot
    int wi = start;        // working index ()

    // loop through unsorted array
    for (int j = start + 1; j <= end; ++j) {
        if (a[j] <= pivot) {
            ++wi;
            swap(&a[j], &a[wi]);
        }
    }
    swap(&a[wi], &a[start]);

    return wi;
}

// utility function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// utility function to print array
void printArray(int a[], int limit) {
    for (int i = 0; i < limit; ++i) {
        std::cout << std::setw(4) << a[i];
    }

    std::cout << std::endl;
}
