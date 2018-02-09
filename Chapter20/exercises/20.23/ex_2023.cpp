/*
 * =============================================================================
 *
 *       Filename:  ex_2023.cpp
 *
 *    Description:  Exercise 20.23 - Binary Tree Search
 *
 *        Version:  1.0
 *        Created:  07/02/18 18:58:04
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include "Tree.hpp"

#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

static const int HEIGHT = 30;
static const int LIMIT = 100;

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    Tree<int> intTree;

    unsigned int seed = static_cast<int>(std::time(nullptr));

    for (int i = 0; i < HEIGHT; ++i) {
        intTree.insertNode(rand_r(&seed) % LIMIT);
    }

    intTree.inOrderTraversal();

    std::cout << "Depth: " << Tree<int>.depth(intTree) << std::endl;

    int query = rand_r(&seed) % LIMIT;

    TreeNode<int>* result = intTree.binaryTreeSearch(query);

    if (result == nullptr) {
        std::printf("%d not found.\n", query);
    }

    if (result != nullptr) {
        std::printf("%d found in tree.\n", query);
    }

    return 0;
}  // end method main
