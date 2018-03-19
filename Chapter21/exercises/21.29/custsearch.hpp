/*
 * =============================================================================
 *
 *       Filename:  custsearch.hpp
 *
 *    Description:  Exercise 21.29 - Write Your Own String Searching Functions.
 *
 *        Version:  1.0
 *        Created:  17/03/18 09:38:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#pragma once
#include <cstring>

/**
 * Locates the first occurance of char c in string s.
 * A pointer to c in s is return if found.
 * @param const char*
 * @param int
 * @return char*
 */
char* strchr(const char* s, int c) {
    while (*s && *s != c) { ++s; }

    return (char*)(((*s == c) ? s : nullptr));
}  // end method strchr

/**
 * Searches from the end of string s locating the last occurance of char c.
 * A pointer to c in s is return if found.
 * @param const char*
 * @param int
 * @return char*
 */
char* strrchr(const char* s, int c) {
    const char* base = s + strlen(s);

    while (*base && base != s) { --base; }

    s = base;

    return (char*)((*s == c) ? s : nullptr);

}  // end method strrchr

/**
 * Determines and returns the length of the initial segment of string s1
 * consisting only of characters contained in string s2.
 * @param const char*
 * @param const char*
 * @return size_t
 */
size_t strspn(const char* s1, const char* s2) {
    
}  // end method strspn

/**
 * Locates the first occurance in string s1 of any char in string s2.
 * A pointer to the char is returned if found.
 * @param const char*
 * @param const char*
 * @return char*
 */
char* strpbrk(const char* s1, const char* s2) {
    
}  // end method strpbrk

/**
 * Determines and returns the length of the initial segment of string s1
 * consisting of characters not contained in string s2.
 * @param const char*
 * @param const char*
 * @return char*
 */
size_t strcspn(const char* s1, const char* s2) {
    
}  // end method strpbrk

/**
 * Locates the first occurance in string s1 of string s2.
 * Returns a pointer to the string in s1 if found.
 * @param const char*
 * @param const char*
 * @return char*
 */
char* strstr(const char* s1, const char* s2) {
    
}  // end method strstr
