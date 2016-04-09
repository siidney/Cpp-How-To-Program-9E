/*
 * =====================================================================================
 *
 *       Filename:  ex_510.cpp
 *
 *    Description:  Exercise 5.10 - Factorials.
 *
 *        Version:  1.0
 *        Created:  04/04/16 18:11:57
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int factorial(int);

int main(int argc, const char *argv[]){
    std::cout << "Factorials of 1 to 5\n" << std::endl;

    for(int i=1; i<=5; i++){
        printf("%d\t%d\n",
                i, factorial(i));
    }
    return 0;
}
// n! = n * (n-1) * (n-2) * (n-3) * ... * 1
int factorial(int n){
    int factorial = 1;

    for(int i=1; i<=n; i++){
        factorial *= n;
    }

    return factorial;
}
