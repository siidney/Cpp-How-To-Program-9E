/*
 * =====================================================================================
 *
 *       Filename:  Invoice.cpp
 *
 *    Description:  Exercise 3.13 - Invoice Class.
 *
 *        Version:  1.0
 *        Created:  21/03/16 02:12:15
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <string>

#include "Invoice.hpp"

// Constructor
Invoice::Invoice(const std::string &number,
                 const std::string &description,
                 int quantity,
                 int price) {
    setPartNumber(number);
    setPartDescription(description);
    setItemQuantity(quantity);
    setPricePerItem(price);
}
// SETTERS
void Invoice::setPartNumber(const std::string &number) { partNumber = number; }
void Invoice::setPartDescription(const std::string &description) {
    partDescription = description;
}
void Invoice::setItemQuantity(int quantity) {
    itemQuantity = (quantity > 0) ? quantity : 0;
}
void Invoice::setPricePerItem(int price) {
    pricePerItem = (price > 0) ? price : 0;
}
// GETTERS
std::string Invoice::getPartNumber() const { return partNumber; }
std::string Invoice::getPartDescription() const { return partDescription; }
int Invoice::getItemQuantity() const { return itemQuantity; }
int Invoice::getPricePerItem() const { return pricePerItem; }

// calcualates the invoice amount
int Invoice::getInvoiceAmount() const { return (getItemQuantity() * getPricePerItem()); }
