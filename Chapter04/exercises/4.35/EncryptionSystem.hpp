/*
 * =====================================================================================
 *
 *       Filename:  EncryptionSystem.hpp
 *
 *    Description:  Exercise 4.35 - Enforcing Privacy with Cryptography
 *
 *        Version:  1.0
 *        Created:  28/03/16 17:29:32
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

class EncryptionSystem {
 private:
    int plainPassCode = 0;
    int encPassCode = 0;

    // SETTERS
    bool setPlainPass(int);
    void setEncPass(int);

    bool validatePlainPass(int);

    int swapDigits(int);
    void clearPlainPass();
    void clearEncPass();

 public:
    EncryptionSystem();
    ~EncryptionSystem();

    // GETTERS
    int getPlainPass();
    int getEncPass();

    bool encrypt(int);
    int decrypt(int = 0);
};
