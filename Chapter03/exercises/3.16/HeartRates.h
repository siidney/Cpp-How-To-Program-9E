/*
 * =====================================================================================
 *
 *       Filename:  HeartRates.h
 *
 *    Description:  Exercise 3.16 - Target-Heart-Rate Calculator
 *
 *        Version:  1.0
 *        Created:  23/03/16 18:50:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <string>

class HeartRates {
 private:
    std::string firstName;
    std::string lastName;
    int month = 1;
    int day = 1;
    int year = 1900;
    int ageInYears = 0;

 public:
    HeartRates(std::string, std::string, int, int, int);

    // SETTERS
    void setFirstName(std::string);
    void setLastName(std::string);
    void setDOB(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void setAge();

    // GETTERS
    std::string getFirstName();
    std::string getLastName();
    int getMonth();
    int getDay();
    int getYear();
    int getAge();
    int getMaximumHeartRate();
    void getTargetHeartRate();

    void displayInformation();
};
