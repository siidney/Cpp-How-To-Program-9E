/*
 * =====================================================================================
 *
 *       Filename:  ex_1706.cpp
 *
 *    Description:  Exercise 17.06 - File Matching
 *
 *        Version:  1.0
 *        Created:  01/02/17 12:24:35
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
#include <string>

int main(int argc, const char* argv[]){
    // open oldmast.dat for input
    std::ifstream inOldMaster("oldmast.dat", std::ios::in);

    if(!inOldMaster){
        std::cerr << "oldmast.dat could not be opened" << std::endl;
        return 0;
    }
    // open transaction file for input
    std::ifstream inTransaction("trans.dat", std::ios::in);

    if(!inTransaction){
        std::cerr << "trans.dat could not be opened" << std::endl;
        return 0;
    }
    // open newmast.dat for output (and creation)
    std::ofstream outNewMaster("newmast.dat", std::ios::out);

    if(!outNewMaster){
        std::cerr << "newmast.dat could not be opened" << std::endl;
        return 0;
    }

    int transAccountNum = 0;
    int mastAccountNum = 0;
    double transDollarAmount;
    double mastDollarAmount;
    std::string fName;
    std::string lName;

    // process changes
    while(!inOldMaster.eof() && !inTransaction.eof()){
        inOldMaster >> mastAccountNum >> fName >> lName >> mastDollarAmount;
        // ensure mastAccountNum !exceed transAccountNum
        if(transAccountNum < mastAccountNum)
            inTransaction >> transAccountNum >> transDollarAmount;

        // update total on account number match
        if(mastAccountNum == transAccountNum){
            mastDollarAmount += transDollarAmount;
        }else if(((mastAccountNum > transAccountNum) && !inTransaction.eof()) || inOldMaster.eof()){
            std::cout << "Unmatched transaction record for account number: " << transAccountNum << std::endl;
        }

        // only update if not at eof
        // ensures transAccountNum's > the last record in the old master file
        // are properly handled logged.
        if(!inOldMaster.eof())
            outNewMaster << mastAccountNum << " " << fName << " " << lName << " " << mastDollarAmount << std::endl;
    };
    return 0;
}
