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
#include <iostream>

/**
 * Returns the length of the given string.
 * @param const char*
 * @return size_t
 */
size_t strlen(const char* s) {
    int i = 0;

    if (!s) { return i; }

    for (; *s; ++s, ++i);

    return i;
} // end method strlen

/**
 * Locates the first occurance of char c in string s.
 * A pointer to c in s is return if found.
 * @param const char*
 * @param int
 * @return char*
 */
char* strchr(const char* s, int c) {
    if (!s) { return nullptr; }

    for (; *s; ++s) {
        if (*s == c) { return (char*)s; }
    }

    return nullptr;
}  // end method strchr

/**
 * Searches from the end of string s locating the last occurance of char c.
 * A pointer to c in s is return if found.
 * @param const char*
 * @param int
 * @return char*
 */
char* strrchr(const char* s, int c) {
    if (!s) { return nullptr; }

    s = s + (strlen(s) - 1);

    for (; *s; --s) {
        if (*s == c) { return (char*)s; }
    }

    return nullptr;

}  // end method strrchr

/**
 * Determines and returns the length of the initial segment of string s1
 * consisting only of characters contained in string s2.
 * @param const char*
 * @param const char*
 * @return size_t
 */
size_t strspn(const char* s1, const char* s2) {
    int i;
    int j;

    for (i = 0; s1[i]; ++i) {
        for (j = 0; s2[j]; ++j) {
            // match found check next char (outerloop)
            if (s1[i] == s2[j]) { break; }
        }
        // iterated until end of s2 == no more comparisons
        if (!s2[j]) { break; }
    }

    return i;
}  // end method strspn

/**
 * Locates the first occurance in string s1 of any char in string s2.
 * A pointer to the char is returned if found.
 * @param const char*
 * @param const char*
 * @return char*
 */
char* strpbrk(const char* s1, const char* s2) {
    if (!s1) { return nullptr; }

    for (; *s1; ++s1) {
        if (strchr(s2, *s1)) { return (char*)s1; }
    }

    return nullptr;
}  // end method strpbrk

/**
 * Determines and returns the length of the initial segment of string s1
 * consisting of characters not contained in string s2.
 * @param const char*
 * @param const char*
 * @return char*
 */
size_t strcspn(const char* s1, const char* s2) {
    int i;
    int j;

    for (i = 0; s1[i]; ++i) {
        for (j = 0; s2[j]; ++j) {
            if (s1[i] == s2[j]) { break; }
        }
        if (s2[j]) { break; }
    }

    return i;
}  // end method strpbrk

/**
 * Locates the first occurance in string s1 of string s2.
 * Returns a pointer to the string in s1 if found.
 * @param const char*
 * @param const char*
 * @return char*
 */
char* strstr(const char* s1, const char* s2) {
    if (!s1 || !s2) { return nullptr; }

    for (; *s1; ++s1) {
        if (*s1 == *s2) {
            const char* sa = s1;
            const char* sb = s2;

            // iterate over s2
            for (; *sb; ++sa, ++sb) {
                if (*sa != *sb) { break; }
            }

            // iterated until end of sb == match
            if (!*sb) { return (char*)s1; }
        }
    }

    return nullptr;
}  // end method strstr
