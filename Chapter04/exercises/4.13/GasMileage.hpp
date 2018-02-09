/*
 * =====================================================================================
 *
 *       Filename:  GasMileage.hpp
 *
 *    Description:  Exercise 4.13 - Gas Mileage
 *
 *        Version:  1.0
 *        Created:  27/03/16 00:14:50
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

class GasMileage {
 private:
    double milesDriven = 0.0f;
    double gallonsUsed = 0.0f;
    double tripMPG = 0.0f;
    double totalMPG = 0.0f;

 public:
    GasMileage();

    // SETTERS
    void setMilesDriven();
    void setGallonsUsed();
    void setTripMPG();
    void setTotalMPG();

    // GETTERS
    double getMilesDriven() const;
    double getGallonsUsed() const;
    double getTripMPG() const;
    double getTotalMPG() const;

    void run();
};
