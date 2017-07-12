/*
 * =====================================================================================
 *
 *       Filename:  fig10_13.cpp
 *
 *    Description:  Fig. 10.13: Friends can access private members of a class
 *
 *        Version:  1.0
 *        Created:  22/06/16 14:18:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

class Count {
    friend void setX(Count &, int);

 public:
    Count() : x(0) {}
    ~Count() {}

    // output x
    void print() const { std::cout << x << std::endl; }

 private:
    int x;
};
// function setX can modify private data of Count
// because setX is declared as a friend of Count
void setX(Count &c, int val) { c.x = val; }

int main(int argc, const char *argv[]) {
    Count counter;

    std::cout << "counter.x after instantiation: ";
    counter.print();

    setX(counter, 8);
    std::cout << "counter.x after call to setX friend function: ";
    counter.print();

    return 0;
}
