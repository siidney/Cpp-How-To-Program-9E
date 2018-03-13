/*
 * =============================================================================
 *
 *       Filename:  ex_2104.cpp
 *
 *    Description:  Exercise 21.04 - Defining Structures.
 *
 *        Version:  1.0
 *        Created:  27/02/18 12:11:01
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */

// A: Inventory
struct Inventory {
    char partName[30];
    int partNumber;
    double price;
    int stock;
    int reorder;
}; // end struct Inventory

// B: Address
struct Address {
    char streetAddress[25];
    char city[20];
    char state[3];
    char zipCode[6];
}; // end struct Address

// C: Student
struct Student {
    char firstName[15];
    char lastName[15];

    Address homeAddress;
}; // end struct Student

// D: Test
struct Test {
    unsigned a = 1;
    unsigned b = 1;
    unsigned c = 1;
    unsigned d = 1;
    unsigned e = 1;
    unsigned f = 1;
    unsigned g = 1;
    unsigned h = 1;
    unsigned i = 1;
    unsigned j = 1;
    unsigned k = 1;
    unsigned l = 1;
    unsigned m = 1;
    unsigned n = 1;
    unsigned o = 1;
    unsigned p = 1;
}; // end struct Test
