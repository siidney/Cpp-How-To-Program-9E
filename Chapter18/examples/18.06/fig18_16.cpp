/*
 * =====================================================================================
 *
 *       Filename:  fig18_16.cpp
 *
 *    Description:  Fig. 18.06 - Demonstrating the string find member function
 *
 *        Version:  1.0
 *        Created:  09/02/17 16:41:42
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
    std::string string1("noon is 12pm; midnight is not.");
    int location;

    // find "is" at location 5 and 24
    std::cout << "Original string:\n"
              << string1
              << "\n\n(find) \"is\" was found at: " << string1.find("is")
              << "\n(rfind) \"is\" was found at: " << string1.rfind("is");

    // find 'o' at location 1
    location = string1.find_first_of("misop");
    std::cout << "\n\n(find_first_of) found '" << string1[location]
              << "' from the group \"msop\" at: " << location;

    // find 'o' at location 29
    location = string1.find_last_of("misop");
    std::cout << "\n\n(find_last_of) found '" << string1[location]
              << "' from the group \"misop\" at: " << location;

    // find '1' at location 8
    location = string1.find_first_not_of("noi spm");
    std::cout << "\n\n(find_first_not_of) '" << string1[location]
              << "' is not contained in \"noi spm\" and was found at: "
              << location;

    // find '.' at location 12
    location = string1.find_first_not_of("12noi spm");
    std::cout << "\n\n(find_first_not_of) '" << string1[location]
              << "' is not contained in \"12noi spm\" and was "
              << "found at: " << location << std::endl;

    // search for characters not in string1
    location = string1.find_first_not_of("noon is 12 pm; midnight is not.");
    std::cout << "\nfind_first_not_of(\"noon is 12 pm; midnight is not.\")"
              << " returned: " << location << std::endl;

    return 0;
}
