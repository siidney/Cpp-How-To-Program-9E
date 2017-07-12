/*
 * =====================================================================================
 *
 *       Filename:  HealthProfile.h
 *
 *    Description:  Exercise 3.17 - Computerisation of Health Records
 *
 *        Version:  1.0
 *        Created:  24/03/16 00:38:14
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

class HealthProfile {
 private:
    std::string firstName;
    std::string lastName;
    std::string gender;
    int month, day, year;
    double height, weight;
    int ageInYears = 0;

 public:
    HealthProfile(std::string, std::string, std::string, int, int, int, double,
                  double);

    // SETTERS
    void setFirstName(std::string);
    void setLastName(std::string);
    void setGender(std::string);
    void setDOB(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void setAge();
    void setHeight(int);
    void setWeight(int);

    // GETTERS
    std::string getFirstName();
    std::string getLastName();
    std::string getGender();
    int getMonth();
    int getDay();
    int getYear();
    void getDOB();
    int getAge();
    double getHeight();
    double getWeight();

    double getBMI();
    void getTargetHeartRate();
    int getMaxHeartRate();

    void showHealthProfile();
    void printBMIInfo();
};
