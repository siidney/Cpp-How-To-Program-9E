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
#include "Invoice.h"

// Constructor
Invoice::Invoice(std::string number, std::string description, int quantity, int price){
    setPartNumber(number);
    setPartDescription(description);
    setItemQuantity(quantity);
    setPricePerItem(price);
}
// SETTERS
void Invoice::setPartNumber(std::string number){
    partNumber = number;
}
void Invoice::setPartDescription(std::string description){
    partDescription = description;
}
void Invoice::setItemQuantity(int quantity){
    itemQuantity = (quantity > 0) ? quantity : 0;
}
void Invoice::setPricePerItem(int price){
    pricePerItem = (price > 0) ? price : 0;
}
// GETTERS
std::string Invoice::getPartNumber(){
    return partNumber;
}
std::string Invoice::getPartDescription(){
    return partDescription;
}
int Invoice::getItemQuantity(){
    return itemQuantity;
}
int Invoice::getPricePerItem(){
    return pricePerItem;
}
// calcualates the invoice amount
int Invoice::getInvoiceAmount(){
    return itemQuantity * pricePerItem;
}
