/*
 * =====================================================================================
 *
 *       Filename:  ex_2022.cpp
 *
 *    Description:  Exercise 20.22 - Binary Tree Delete
 *
 *        Version:  1.0
 *        Created:  12/09/17 15:20:18
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Tree.h"

#include <random>

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    static const size_t UPPER = 100;
    static const int EXIT = -9999;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<float> dist(1, UPPER);

    Tree<int> intTree;

    for (unsigned int i = 0; i < 20; ++i) {
        intTree.insertNode(dist(mt));
    }

    intTree.inOrderTraversal();
    std::cout << std::endl;

    int value = 0;

    while (value != EXIT) {
        std::cout << "Enter node to delete: (" << EXIT << " to exit): ";
        std::cin >> value;

        if (value != EXIT) {
            intTree.deleteNode(value);
            intTree.inOrderTraversal();
            std::cout << std::endl;
        }
    }


    return 0;
}  // end method main
