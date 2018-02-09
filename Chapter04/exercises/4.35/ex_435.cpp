/*
 * =====================================================================================
 *
 *       Filename:  ex_435.cpp
 *
 *    Description:  Exercise 4.35 - Enforcing Privacy with Cryptography
 *
 *        Version:  1.0
 *        Created:  29/03/16 08:17:45
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "EncryptionSystem.hpp"

int main(int argc, const char *argv[]) {
    EncryptionSystem es;

    int code = 0;

    std::cout << "Welcome to encryption/decryption system\n" << std::endl;
    std::cout << "Enter a 4 digit pass code to be encrypted: ";
    std::cin >> code;

    es.encrypt(code);

    std::cout << "\nEncrypted pass code: " << es.getEncPass() << "\n" << std::endl;

    std::cout << "Decrypted pass code: " << es.decrypt() << std::endl;

    return 0;
}
