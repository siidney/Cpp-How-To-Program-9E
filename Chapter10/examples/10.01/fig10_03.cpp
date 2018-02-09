/*
 * =====================================================================================
 *
 *       Filename:  fig10_03.cpp
 *
 *    Description:  Fig. 10.3: Attempting to acces a const object with non-const
 *                  member functions
 *
 *        Version:  1.0
 *        Created:  17/06/16 19:40:23
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Time.hpp"

int main(int argc, const char *argv[]) {
    Time wakeUp(6, 45, 0);      // non-constant object
    const Time noon(12, 0, 0);  // constant object

    // OBJECT       // MEMBER FUNCTION
    wakeUp.setHour(18);  // non-const    non-const

    noon.setHour(12);  // const        non-const

    wakeUp.getHour();  // non-const    const

    noon.getMinute();       // const        const
    noon.printUniversal();  // const        const

    noon.printStandard();  // const        non-const
    return 0;
}
