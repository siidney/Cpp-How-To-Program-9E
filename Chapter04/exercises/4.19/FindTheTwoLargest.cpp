/*
 * =====================================================================================
 *
 *       Filename:  FindTheTwoLargest.cpp
 *
 *    Description:  Exercise 4.19 - Find the Two Largest Numbers.
 *
 *        Version:  1.0
 *        Created:  27/03/16 02:12:38
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "FindTheTwoLargest.h"

FindTheTwoLargest::FindTheTwoLargest(){}
FindTheTwoLargest::~FindTheTwoLargest(){}

// SETTERS
void FindTheTwoLargest::set1STLargest(double num){
    fLargest = num;
}
void FindTheTwoLargest::set2NDLargest(double num){
    sLargest = num;
}

// GETTERS
double FindTheTwoLargest::get1STLargest(){
    return fLargest;
}
double FindTheTwoLargest::get2NDLargest(){
    return sLargest;
}

void FindTheTwoLargest::run(){
    std::cout << "Find the two largest numbers from 10" << std::endl;

    while(counter < 10){
        std::cout << "Enter number (" << 10 - counter << " remaining): ";
        std::cin >> number;

        if(number > get1STLargest()){
            set2NDLargest(get1STLargest());
            set1STLargest(number);
        }

        counter++;
    }

    std::cout << "First Largest: " << get1STLargest() << std::endl;
    std::cout << "Second Largest: " << get2NDLargest() << std::endl;
}
