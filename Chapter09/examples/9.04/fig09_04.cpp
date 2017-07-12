/*
 * =====================================================================================
 *
 *       Filename:  fig09_04.cpp
 *
 *    Description:  Fig. 9.4: Demonstraing the class member access operators .
 *                  and ->
 *
 *        Version:  1.0
 *        Created:  07/06/16 16:27:03
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

// class Count definition
class Count {
 private:
    int x;

 public:
    void setX(int value) { x = value; }
    void print() { std::cout << x << std::endl; }
};

int main(int argc, const char *argv[]) {
    Count counter;
    Count *counterPtr = &counter;
    Count &counterRef = counter;

    std::cout << "Set x to 1 and print using the object's name: ";
    counter.setX(1);
    counter.print();

    std::cout << "Set x to 2 and print using a reference to an object: ";
    counterRef.setX(2);
    counterRef.print();

    std::cout << "Set x to 3 and print using a pointer to an object: ";
    counterPtr->setX(3);
    counterPtr->print();

    return 0;
}
