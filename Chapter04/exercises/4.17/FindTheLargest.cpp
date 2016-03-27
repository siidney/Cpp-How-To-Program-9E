/*
 * =====================================================================================
 *
 *       Filename:  FindTheLargest.cpp
 *
 *    Description:  Exercise 4.17 - Find the Largest
 *
 *        Version:  1.0
 *        Created:  27/03/16 01:55:33
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "FindTheLargest.h"

FindTheLargest::FindTheLargest(){}
FindTheLargest::~FindTheLargest(){}

// SETTERS
void FindTheLargest::setLargest(double l){
    largest = l;
}
// GETTERS
double FindTheLargest::getLargest(){
    return largest;
}

void FindTheLargest::run(){
    std::cout << "Program to find the largest of 10 numbers\n" << std::endl;

    while(counter < 10){
        std::cout << "Enter number: (" << (10 - counter) << " remaining): ";
        std::cin >> number;

        if(number > getLargest()){
            setLargest(number);
        }

        counter++;
    }

    std::cout << "Largest Number is: " << getLargest() << std::endl;
}

