/*
 * =====================================================================================
 *
 *       Filename:  ex_315.cpp
 *
 *    Description:  Exercise 3.15 - Date Class
 *
 *        Version:  1.0
 *        Created:  23/03/16 18:09:41
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Date.hpp"

int main(int argc, const char *argv[]) {
    Date date1(12, 7, 1983);
    Date date2(14, 23, 1255);

    date1.displayDate();
    date2.displayDate();

    return 0;
}
