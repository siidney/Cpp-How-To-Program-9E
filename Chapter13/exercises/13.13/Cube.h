/*
 * =====================================================================================
 *
 *       Filename:  Cube.h
 *
 *    Description:  Exercise 13.13 - Shape Hierarchy
 *                  3D Cube
 *
 *        Version:  1.0
 *        Created:  17/08/16 18:01:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape{
    public:
        Cube(double = 0.0f, double = 0.0f, double = 0.0f);

        virtual double getArea() const;
        virtual double getVolume() const;
        virtual void print() const;

    private:
};
