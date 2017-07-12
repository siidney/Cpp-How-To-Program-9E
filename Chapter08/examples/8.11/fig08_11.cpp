/*
 * =====================================================================================
 *
 *       Filename:  fig08_11.cpp
 *
 *    Description:  Fig. 8.11: Constant Pointer to Nonconstant Data
 *                  Attempting to modify a constant pointer to nonconstant data.
 *
 *        Version:  1.0
 *        Created:  04/05/16 19:12:15
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */

int main(int argc, const char* argv[]) {
    int x, y;

    // ptr is a constant pointer to an integer that can be modified through ptr,
    // but ptr always points to the same memory location.
    int* const ptr = &x;

    *ptr = 7;  // allowed: *ptr is not const
    ptr = &y;  // error: ptr is const; cannot assign it to a new address
    return 0;
}
