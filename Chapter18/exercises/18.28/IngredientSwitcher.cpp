/*
 * =====================================================================================
 *
 *       Filename:  IngredientSwitcher.cpp
 *
 *    Description:  Exercise 18.28 - Cooking with Healthier Ingredients
 *
 *        Version:  1.0
 *        Created:  03/03/17 16:40:41
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <vector>
#include <map>
#include <string>
#include <algorithm>

#include "IngredientSwitcher.hpp"

IngredientSwitcher::IngredientSwitcher() {}
IngredientSwitcher::~IngredientSwitcher() {
    for (auto elem : alternativesMap) { deleteNodes(&elem.second); }
}
// builds alternativesMap
// name amount measure
bool IngredientSwitcher::initialise() { return constructIngredients(); }
// build vector of ingredient linked lists from file
// add to alternativesMap
bool IngredientSwitcher::constructIngredients() {
    // open file for reading
    std::ifstream altfile("alternatives", std::ios::out);

    if (!altfile) {
        std::cerr << "Could not open alternatives file" << std::endl;
        return false;
    }

    std::string line;
    bool isHead = true;

    struct Node *head = nullptr;

    while (std::getline(altfile, line)) {
        // on empty line push head node node to alternativesMap
        if (line.empty()) {
            alternativesMap.emplace(head->name, *head);

            isHead = !isHead;
            continue;
        }

        // split line by delimiter
        std::istringstream ss(line);
        std::vector<std::string> values;
        std::string tmp;

        while (getline(ss, tmp, ';')) {
            values.push_back(tmp);
        }

        // new head node
        if (isHead) {
            delete head;
            head = new Node(values[0], std::stod(values[1]), values[2]);

            isHead = !isHead;
            // next node
        } else {
            addNode(head, new Node(values[0], std::stod(values[1]), values[2]));
        }
    }
    return true;
}
// main loop
void IngredientSwitcher::run() {
    if (!initialise()) {
        std::cerr << "Could not initialise application" << std::endl;
    } else {
        printMenu();
    }
}
// print main menu
void IngredientSwitcher::printMenu() {
    int choice;
    std::string msg =
        "1 - Search Alternatives\n2 - List all alternatives\n9 - Exit";

    while ((choice = getInt(msg)) != EXIT) {
        switch (choice) {
            case SEARCH:
                search();
                break;
            case LIST:
                listAll();
                break;
            default:
                std::cout << "Incorrect input" << std::endl;
                break;
        }
    }
}
// get main menu input
int IngredientSwitcher::getInt(const std::string &msg) {
    int choice;

    do {
        std::cout << msg << "\n> ";

        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            continue;
        }
    } while (choice < 1 || choice > 9);

    return choice;
}
// get ingredient to search for alternatives
std::string IngredientSwitcher::getString(const std::string &msg) {
    std::cin.ignore();
    std::string input;

    std::cout << msg << ": ";
    std::getline(std::cin, input);

    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    return input;
}
// performs the search for alternatives
void IngredientSwitcher::search() {
    std::string input = getString("Enter ingredient to search alternatives");

    if (hasAlternatives(input)) {
        struct Node head = getNode(input);
        printAlternatives(head);
    } else {
        std::cout << "\nUnable to find alternatives for " << input << "\n"
                  << std::endl;
    }
}
// check if alternatives exist in map
bool IngredientSwitcher::hasAlternatives(const std::string &ingredient) {
    std::map<std::string, struct Node>::iterator it =
        alternativesMap.find(ingredient);

    return (it != alternativesMap.end());
}
// return requested node
struct Node IngredientSwitcher::getNode(const std::string &ingredient) {
    return alternativesMap.find(ingredient)->second;
}
// list all known alternatives
void IngredientSwitcher::listAll() {
    for (auto elem : alternativesMap) { printAlternatives(elem.second); }
}
// LINKED LIST FUNCTIONS
// Follows and prints all next nodes
void IngredientSwitcher::printAlternatives(struct Node &head) {
    printHeader();
    printNode(&head);

    Node *cur = head.next;

    while (cur != nullptr) {
        printNode(cur);
        cur = cur->next;
    }
    std::cout << std::endl;
}
// prints header for alternatives
void IngredientSwitcher::printHeader() {
    std::cout << std::string(40, '-') << std::endl
              << std::setw(20) << std::left << "Ingredient" << std::setw(10)
              << "Amount" << std::setw(10) << "measure" << std::endl
              << std::string(40, '-') << std::endl;
}
// formats and prints single node
void IngredientSwitcher::printNode(struct Node *node) {
    std::cout << std::setw(20) << node->name << std::setw(10) << node->amount
              << std::setw(10) << node->measure << std::endl;
}
// add node
void IngredientSwitcher::addNode(struct Node *head, struct Node *alt) {
    Node *newNode = alt;

    Node *cur = head;

    while (cur) {
        if (cur->next == nullptr) {
            cur->next = newNode;

            return;
        }
        cur = cur->next;
    }
}
// deletes all child nodes
void IngredientSwitcher::deleteNodes(struct Node *head) {
    Node *cur = head->next;

    while (cur) {
        Node *old = cur;
        cur = cur->next;
        delete old;
    }
}
