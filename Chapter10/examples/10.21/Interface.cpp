/*
 * =====================================================================================
 *
 *       Filename:  Interface.cpp
 *
 *    Description:  Fig. 10.23; Implementation of class Interface--client
 *                  receives this file only as precompiled object code, keeping
 *                  the implementation hidden.
 *
 *        Version:  1.0
 *        Created:  22/06/16 17:42:39
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Interface.hpp"
#include "Implementation.hpp"

Interface::Interface(int v) : ptr(new Implementation(v)) {}
Interface::~Interface() { delete ptr; }

void Interface::setValue(int v) { ptr->setValue(v); }
int Interface::getValue() const { return ptr->getValue(); }
