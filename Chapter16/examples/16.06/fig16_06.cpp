/*
 * =====================================================================================
 *
 *       Filename:  fig16_06.cpp
 *
 *    Description:  Fig. 16.6: Demonstrating set_new_handler
 *
 *        Version:  1.0
 *        Created:  25/10/16 21:57:20
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <iostream>
#include <new>

// handle memory allocation failure
void customNewHandler() {
    std::cerr << "customNewHandler was called";
    abort();
}

int main(int argc, const char *argv[]) {
    double *ptr[50];

    // specify that customNewHandler should be called on
    // memory allocation failure
    std::set_new_handler(customNewHandler);

    // aim each ptr[i] at a big block of memory; customNewHandler will be
    // called on failed memory allocation
    for (int i = 0; i < 50; ++i) {
        ptr[i] = new double[50000000];
        std::cout << "ptr[" << i << "] points to 50,000,000 new doubles\n";
    }

    return 0;
}
