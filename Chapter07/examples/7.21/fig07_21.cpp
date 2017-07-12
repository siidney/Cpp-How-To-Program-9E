/*
 * =====================================================================================
 *
 *       Filename:  fig07_21.cpp
 *
 *    Description:  Fig. 7.21: Initialising multidimensional arrays.
 *
 *        Version:  1.0
 *        Created:  20/04/16 18:49:40
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

void printArray(const int[][3]);

const int rows = 2;
const int cols = 3;

int main(int argc, const char *argv[]) {
    int array1[rows][cols] = {{1, 2, 3}, {4, 5, 6}};
    int array2[rows][cols] = {1, 2, 3, 4, 5};
    int array3[rows][cols] = {{1, 2}, {4}};

    std::cout << "Values in array1 by row are:" << std::endl;
    printArray(array1);

    std::cout << "Values in array2 by row are:" << std::endl;
    printArray(array2);

    std::cout << "Values in array3 by row are:" << std::endl;
    printArray(array3);

    return 0;
}
// output array with two rows and three columns
void printArray(const int a[][cols]) {
    // loop through array's rows
    for (int i = 0; i < rows; ++i) {
        // loop through array's cols
        for (int j = 0; j < cols; ++j) {
            std::cout << a[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
