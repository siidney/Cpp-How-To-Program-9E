/*
 * =====================================================================================
 *
 *       Filename:  ex_740.cpp
 *
 *    Description:  Exercise 7.40 - Find the Minimum Value in a vector
 *
 *        Version:  1.0
 *        Created:  26/04/16 14:33:30
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <ctime>
#include <vector>

int recursiveMinimum(const std::vector<int>&, int, int);

static const int limit = 10;

int main(int argc, const char *argv[]){
    std::cout << "Program to recursively find mimimum value in an array\n" << std::endl;

    std::vector<int> n(limit);

    srand(time(0));

    for(int i=0; i<limit; ++i){
        n[i] = rand() % limit + 1;

        std::cout << n[i] << std::endl;
    }

    std::cout << "\nMinimum : " << recursiveMinimum(n, 0, limit - 1) << std::endl;

    return 0;
}
// Returns the minimum value from an array recursively
int recursiveMinimum(const std::vector<int>& n, int start, int end){
    static int minimum = n[start];

    std::cout << minimum << std::endl;

    if(start == end)
        return minimum;

    if(minimum < n[start +1]){
        recursiveMinimum(n, ++start, end);
    }else{
        minimum = n[start +1];
        recursiveMinimum(n, ++start, end);
    }
}
