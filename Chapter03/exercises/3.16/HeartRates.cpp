/*
 * =====================================================================================
 *
 *       Filename:  HeartRates.cpp
 *
 *    Description:  Exercise 3.16 - Target-Heart-Rate Calculator
 *
 *        Version:  1.0
 *        Created:  23/03/16 18:56:21
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "HeartRates.h"

HeartRates::HeartRates(std::string fName, std::string lName, int m, int d,
                       int y) {
    setFirstName(fName);
    setLastName(lName);
    setDOB(m, d, y);
}

// SETTERS
void HeartRates::setFirstName(std::string fName) {
    firstName = (fName.length() > 0) ? fName : "FirstName";
}
void HeartRates::setLastName(std::string lName) {
    lastName = (lName.length() > 0) ? lName : "Surname";
}
void HeartRates::setDOB(int m, int d, int y) {
    setMonth(m);
    setDay(d);
    setYear(y);
    setAge();
}
void HeartRates::setMonth(int m) { month = (m > 0 && m <= 12) ? m : 1; }
void HeartRates::setDay(int d) { day = (d > 0 && d <= 31) ? d : 1; }
void HeartRates::setYear(int y) { year = y; }
void HeartRates::setAge() { ageInYears = getAge(); }
// GETTERS
std::string HeartRates::getFirstName() { return firstName; }
std::string HeartRates::getLastName() { return lastName; }
int HeartRates::getMonth() { return month; }
int HeartRates::getDay() { return day; }
int HeartRates::getYear() { return year; }
int HeartRates::getAge() {
    if (ageInYears > 0) return ageInYears;

    int cDay, cMonth, cYear;

    std::cout << "Enter the current date(mm dd yyyy): ";
    std::cin >> cMonth >> cDay >> cYear;

    if (cMonth < getMonth()) {
        return (cYear - getYear()) - 1;
    } else if (cMonth > getMonth()) {
        return cYear - getYear();
    } else {
        if (cDay < getDay()) {
            return (cYear - getYear()) - 1;
        } else {
            return cYear - getYear();
        }
    }
}
// returns a persons maximum heart rate in bpm
int HeartRates::getMaximumHeartRate() { return 220 - getAge(); }
// returns a persons target heart rate
void HeartRates::getTargetHeartRate() {
    std::cout << "Your Target Heart Rate: ";
    std::cout << 0.5 * getMaximumHeartRate() << " - "
              << 0.85 * getMaximumHeartRate() << std::endl;
}
// displays person information
void HeartRates::displayInformation() {
    std::cout << "\nName: " << getFirstName() << " " << getLastName()
              << std::endl;
    std::cout << "D.O.B: " << getMonth() << "/" << getDay() << "/" << getYear()
              << std::endl;
    std::cout << "Maximum Heart Rate: " << getMaximumHeartRate() << std::endl;
    getTargetHeartRate();
}
