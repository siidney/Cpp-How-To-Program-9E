/*
 * =====================================================================================
 *
 *       Filename:  CreateAndDestroy.h
 *
 *    Description:  Fig. 9.11: CreateAndDestroy class definition.
 *
 *        Version:  1.0
 *        Created:  08/06/16 14:54:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>
#include <string>

class CreateAndDestroy {
 private:
    int objectID;
    std::string message;

 public:
    CreateAndDestroy(int, std::string);
    ~CreateAndDestroy();
};
