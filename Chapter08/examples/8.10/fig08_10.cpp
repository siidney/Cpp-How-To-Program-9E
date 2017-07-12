/*
 * =====================================================================================
 *
 *       Filename:  fig08_10.cpp
 *
 *    Description:  Fig. 8.10: Nonconstant Pointer to Constant Data.
 *                  Attempting to modify data through a nonconstant pointer
 *                  to constant data.
 *
 *        Version:  1.0
 *        Created:  04/05/16 19:02:49
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
void f(const int *);

int main(int argc, const char *argv[]) {
    int y;

    f(&y);

    return 0;
}
// xPtr cannot modify the value of constant variable to which it points
void f(const int *xPtr) {
    *xPtr = 100;  // error: cannot modify a const object
}
