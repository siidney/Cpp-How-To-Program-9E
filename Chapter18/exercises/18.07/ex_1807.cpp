/*
 * =====================================================================================
 *
 *       Filename:  ex_1807.cpp
 *
 *    Description:  Exercise 18.07 - Simple Encryption
 *
 *        Version:  1.0
 *        Created:  10/02/17 14:01:46
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

int getChoice();
const std::string rot13(const std::string&);

int main(int argc, const char* argv[]) {
    int choice = 0;

    while ((choice = getChoice()) != 9) {
        switch (choice) {
            case 1: {
                std::cin.ignore();
                std::cout << "Enter a string to be encrypted with rot13: ";
                std::string base;
                std::getline(std::cin, base);

                std::cout << "ROT13 Encryption:\n" << rot13(base) << std::endl;
            } break;
            case 2: {
                std::cin.ignore();
                std::cout << "Enter encrypted string to be decrypted: ";
                std::string base;
                std::getline(std::cin, base);

                std::cout << "ROT13 decryption:\n" << rot13(base) << std::endl;
            } break;
            default:
                std::cout << "Incorrect input" << std::endl;
                break;
        }
    }

    return 0;
}
// menu option
int getChoice() {
    std::cout << "\n*** ROT13 Encryption Program ****"
              << "\n1 - Encrypt"
              << "\n2 - Decrypt"
              << "\n9 - Exit\n> ";
    int choice;
    std::cin >> choice;

    return choice;
}
// encrypt/decrypt rot13
// shift each character by 13 places (+/-)
const std::string rot13(const std::string& base) {
    std::string::const_iterator it = base.begin();
    std::string result = "";

    while (it != base.end()) {
        int ascii = *(it++);

        // first half upper/lower case
        if ((ascii >= 97 && ascii < 110) || (ascii >= 65 && ascii < 78)) {
            ascii = (ascii + 13);
        // second half
        } else if ((ascii >= 110 && ascii <= 122) || (ascii >= 78 && ascii <= 90)) {
            ascii = (ascii - 13);
        }

        result += ascii;
    }
    return result;
}
