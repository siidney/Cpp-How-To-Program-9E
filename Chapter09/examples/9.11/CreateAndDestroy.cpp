/*
 * =====================================================================================
 *
 *       Filename:  CreateAndDestroy.cpp
 *
 *    Description:  Fig. 9.11: CreateAndDestroy class member-function
 *                  definitions.
 *
 *        Version:  1.0
 *        Created:  08/06/16 14:55:28
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "CreateAndDestroy.hpp"

CreateAndDestroy::CreateAndDestroy(int ID, std::string messageString) {
    objectID = ID;
    message = messageString;

    std::cout << "Object " << objectID << "  constructor runs  " << message
              << std::endl;
}
CreateAndDestroy::~CreateAndDestroy() {
    std::cout << (objectID == 1 || objectID == 6 ? "\n" : "");

    std::cout << "Object " << objectID << "  destructor runs  " << message
              << std::endl;
}
