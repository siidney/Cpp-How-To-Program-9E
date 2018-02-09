/*
 * =====================================================================================
 *
 *       Filename:  Package.h
 *
 *    Description:  Exercise 12.9: Package Inheritance Hierarchy
 *
 *        Version:  1.0
 *        Created:  19/07/16 17:59:31
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "Utility.hpp"

#include <iostream>
#include <string>

class Package {
 public:
    Package(const Person&, const Person&, double, double);

    double calculateCost() { return getWeight() * getCostPerOunce(); }

    double getWeight() const { return weight; }
    double getCostPerOunce() const { return costPerOunce; }

    void printDetails() const;

 private:
    Person sender;
    Person recipient;

    double weight;
    double costPerOunce;

    void setWeight(double);
    void setCostPerOunce(double);
};
