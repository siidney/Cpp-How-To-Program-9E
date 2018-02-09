/*
 * =====================================================================================
 *
 *       Filename:  Invoice.hpp
 *
 *    Description:  Exercise 3.13 - Invoice Class
 *
 *        Version:  1.0
 *        Created:  21/03/16 02:08:29
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

class Invoice {
 private:
    std::string partNumber;
    std::string partDescription;

    int itemQuantity;
    int pricePerItem;

 public:
    Invoice(const std::string &, const std::string &, int, int);

    // SETTERS
    void setPartNumber(const std::string &);
    void setPartDescription(const std::string &);
    void setItemQuantity(int);
    void setPricePerItem(int);

    // GETTERS
    std::string getPartNumber() const;
    std::string getPartDescription() const;
    int getItemQuantity() const;
    int getPricePerItem() const;

    int getInvoiceAmount() const;
};
