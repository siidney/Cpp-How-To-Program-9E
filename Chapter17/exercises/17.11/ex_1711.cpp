/*
 * =====================================================================================
 *
 *       Filename:  ex_1711.cpp
 *
 *    Description:  Exercise 17.11 - Hardware Inventory
 *
 *        Version:  1.0
 *        Created:  02/02/17 17:17:51
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

struct Tool{
    int id;
    char name[20];
    int quantity;
    double cost;
};

void addRecord();
void deleteRecord();
void listRecords();

int main(int argc, const char* argv[]){
    Tool tool;
    tool.id = 0;
    tool.name[0] = '\0';
    tool.quantity = 0;
    tool.cost = 0.0f;

    std::fstream outHardware("hardware.dat", std::ios::in | std::ios::out | std::ios::binary);

    if(!outHardware){
        std::cerr << "hardware.dat could not be opened." << std::endl;
        return 1;
    }

    // initialise 100 empty records
    for(int i=0; i<100; ++i){
        outHardware.write(reinterpret_cast<const char *>(&tool), sizeof(Tool));
    }

    int choice = 0;

    while(choice != 9){
        std::cout << "1. Add record" << std::endl;
        std::cout << "2. Delete record" << std::endl;
        std::cout << "3. List records\n : ";

        std::cin >> choice;

        switch(choice){
            case 1:
                addRecord();
            break;
            case 2:
                listRecords();
                deleteRecord();
            break;
            case 3:
                listRecords();
            break;
        }
    }

    return 0;
}
// add a record
void addRecord(){
    std::cout << "Enter tool id, name, quantity, cost\n: ";

    std::string name;

    std::cin >> tool.id;
    std::cin >> name;
    std::cin >> tool.quantity;
    std::cin >> tool.cost;

    int length = name.size();
    length = (length < 20 ? length : 19);
    name.copy(tool.name, length);
    tool.name[length] = '\0';

    // seek position in file
    outHardware.seekp((tool.id - 1) * sizeof(Tool));

    // write information to file
    outHardware.write(reinterpret_cast<const char *>(&tool), sizeof(Tool));
}
// delete a record
void deleteRecord(){
    std::cout << "delete" << std::endl;
}
// list all records
void listRecords(){
    
}
