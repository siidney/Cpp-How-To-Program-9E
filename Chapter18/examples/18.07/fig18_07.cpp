/*
 * =====================================================================================
 *
 *       Filename:  fig18_07.cpp
 *
 *    Description:  Fig. 18.07 - Demonstrating string member functions erase and
 *                  replace
 *
 *        Version:  1.0
 *        Created:  09/02/17 16:58:02
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

int main(int argc, const char* argv[]) {
    // compiler concatenates all parts into one string
    std::string string1(
        "The values in any left subtree"
        "\nare less than the value in the"
        "\nparent node and the values in"
        "\nany right subtree are greater"
        "\nthan the value in the parent node");

    std::cout << "Original string is:\n" << string1 << std::endl << std::endl;

    // remove all characters from (and including) location 62
    // through the end of string1
    string1.erase(62);

    // output new string
    std::cout << "Original string after erase:\n"
              << string1 << "\n\nAfter first replacement:\n";

    unsigned int position = string1.find(" ");  // find first space

    // replace all spaces with periods
    while (position != std::string::npos) {
        string1.replace(position, 1, ".");
        position = string1.find(" ", position + 1);
    }

    std::cout << string1 << "\n\nAfter second replacement:\n";

    position = string1.find(".");  // find first period

    // replace all period with two semicolons
    // NOTE: this will overwrite characters
    while (position != std::string::npos) {
        string1.replace(position, 2, "xxxxx;;yyy", 5, 2);
        position = string1.find(".", position + 1);
    }

    std::cout << string1 << std::endl;

    return 0;
}
