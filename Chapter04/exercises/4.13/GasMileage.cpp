/*
 * =====================================================================================
 *
 *       Filename:  GasMileage.cpp
 *
 *    Description:  Exercise 4.13 - Gas Mileage
 *
 *        Version:  1.0
 *        Created:  27/03/16 00:25:22
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "GasMileage.hpp"

GasMileage::GasMileage() {}

// SETTERS
void GasMileage::setMilesDriven() {
    milesDriven = 0.0f;

    std::cout << "Enter miles driven (-1 to quit): ";
    std::cin >> milesDriven;
}
void GasMileage::setGallonsUsed() {
    gallonsUsed = 0.0f;

    std::cout << "Enter gallons used: ";
    std::cin >> gallonsUsed;
}
void GasMileage::setTripMPG() {
    tripMPG = 0.0f;

    tripMPG = (getMilesDriven() / getGallonsUsed());
}
void GasMileage::setTotalMPG() { totalMPG += getTripMPG(); }

// GETTERS
double GasMileage::getMilesDriven() const { return milesDriven; }
double GasMileage::getGallonsUsed() const { return gallonsUsed; }
double GasMileage::getTripMPG() const { return tripMPG; }
double GasMileage::getTotalMPG() const { return totalMPG; }

void GasMileage::run() {
    setMilesDriven();

    if (getMilesDriven() != -1) {
        setGallonsUsed();
        setTripMPG();
        setTotalMPG();

        std::cout << "MPG this trip: " << getTripMPG()
                  << "\nTotal MPG: " << getTotalMPG() << std::endl;
    }
}
