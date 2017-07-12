/*
 * =====================================================================================
 *
 *       Filename:  IngredientSwitcher.h
 *
 *    Description:  Exercise 18.28 - Cooking with Healthier Ingredients
 *
 *        Version:  1.0
 *        Created:  03/03/17 16:40:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

struct Node {
    std::string name;
    double amount;
    std::string measure;

    Node* next = nullptr;

    Node() {}

    Node(const std::string& n, double a, const std::string& m)
        : name(n), amount(a), measure(m) {}
};

enum Menu { SEARCH = 1, LIST = 2, EXIT = 9 };

class IngredientSwitcher {
 public:
    IngredientSwitcher();
    ~IngredientSwitcher();

    void run();

 private:
    std::map<std::string, struct Node> alternativesMap;

    bool initialise();
    bool constructIngredients();

    void printMenu();
    int getInt(const std::string&);
    std::string getString(const std::string&);
    void search();
    bool hasAlternatives(const std::string&);
    struct Node getNode(const std::string&);
    void listAll();

    void printAlternatives(struct Node&);
    void printHeader();
    void printNode(struct Node*);
    void addNode(struct Node*, struct Node*);
    void deleteNodes(struct Node*);
};
