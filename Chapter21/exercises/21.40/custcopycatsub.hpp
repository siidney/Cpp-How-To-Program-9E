/*
 * =============================================================================
 *
 *       Filename:  custcopycatsub.hpp
 *
 *    Description:  Exercise 21.40 - Write Your Own String Copy and Concatenation
 *                  Functions. [Array Subscripting]
 *
 *        Version:  1.0
 *        Created:  10/04/18 11:26:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#pragma once

#include <stddef.h> // size_t - Stops the linter throwing error
#include <iostream>

/**
 * Determines the length of string s.
 * The number of characters preceeding the terminating null character is returned.
 * @param const char*
 * @return size_t
 */
size_t strlen(const char* s) {
    size_t i = 0;

    if (!s) { return i; }

    for (; s[i] != '\0'; ++i);

    return i;
}  // end method strlen

/**
 * Copies the string s2 into the character array s1.
 * The value of s1 is returned.
 * @param char*
 * @param char*
 * @return char*
 */
char* strcpy(char* s1, const char* s2) {
    if (!s1 || !s2) { return s1; }

    for (size_t i = 0; s2[i] != '\0'; ++i) {
        s1[i] = s2[i];
    }

    return s1;
} // end method strcpy

/**
 * Copies at most n chars of the string s2 into the char array s1.
 * The value of s1 is returned.
 * @param char*
 * @param const char*
 * @param size_t
 * @return char*
 */
char* strncpy(char* s1, const char* s2, size_t n) {
    if (!s1 || !s2) { return s1; }

    for (size_t i = 0; n > 0; ++i, --n) {
        s1[i] = s2[i];
    }

    return s1;
}  // end method strncpy

/**
 * Appends the string s2 to s1.
 * The first char of s2 overwrites the terminating null char of s1.
 * The value of s1 is returned.
 * @param char*
 * @param const char*
 * @return char*
 */
char* strcat(char* s1, const char* s2) {
    if (!s1 || !s2) { return s1; }

    size_t i = 0;
    size_t n = strlen(s1);

    while (s2[i] != '\0') {
        s1[n++] = s2[i++];
    }

    s1[n] = '\0'; // add null terminator

    return s1;
}  // end method strcat

/**
 * Appends at most n chars of string s2 to string s1.
 * The first char of s2 overwrites the terminating null char of s1.
 * The value of s1 is returned.
 * @param char*
 * @param const char*
 * @param size_t
 * @return char*
 */
char* strncat(char* s1, const char* s2, size_t n) {
    if (!s1 || !s2) { return s1; }

    size_t l = strlen(s1);

    for (size_t i = 0; n > 0; ++i, --n, ++l) {
        s1[l] = s2[i];
    }

    s1[l] = '\0';

    return s1;
}  // end method strncat

/**
 * Compares the string s1 with the string s2.
 * Returns 0 if s1 == s2, < 0 if s1 < s2, > 0 if s1 > s2.
 * @param const char*
 * @param const char*
 * @return int
 */
int strcmp(const char* s1, const char* s2) {
    size_t i = 0;

    while (s1[i] != '\0' && (s1[i] == s2[i])) { ++i; }

    return (s1[i] - s2[i]);
}  // end method strcmp

/**
 * Compares up to n chars of s1 with string s2.
 * Returns 0 if s1 == s2, < 0 if s1 < s2, > 0 if s1 > s2.
 * @param const char*
 * @param const char*
 * @param size_t
 * @return int
 */
int strncmp(const char* s1, const char* s2, size_t n) {
    size_t i = 0;

    while ((n > 0 && s1[i] != '\0') && (s1[i] == s2[i])) { ++i, --n; }

    return (s1[i] - s2[i]);
}  // end method strncmp

/**
 * A sequence of calls to strtok breaks s1 into tokens.
 * The string is tokenised based upong the chars in s2.
 * Returns only one token at a time.
 * First calls contains s1 as first argument, subsequent calls contain NULL.
 * A pointer to the current token is returned by each call.
 * If there are no more tokens NULL is returned.
 * @param char*
 * @param const char*
 * @return char*
 */
char* strtok(char* s1, const char* s2) {

}  // end method strtok
