/*
 * =============================================================================
 *
 *       Filename:  custcopycatptr.hpp
 *
 *    Description:  Exercise 21.40 - Write Your Own String Copy and Concatenation
 *                  Functions. [Pointers]
 *
 *        Version:  1.0
 *        Created:  26/03/18 13:19:32
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#pragma once

#include <stddef.h> // size_t - Stops the linter throwing error

/**
 * Determines the length of string s.
 * The number of characters preceeding the terminating null character is returned.
 * @param const char*
 * @return size_t
 */
size_t strlen(const char* s) {
    size_t i = 0;

    if (!s) { return i; }

    for (; *s; ++s, ++i);

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

    char* ptr = s1;

    while ((*ptr++ = *s2++));

    return ptr;
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

    char* ptr = s1;

    while (n-- && (*ptr++ = *s2++));

    while (n--) { *ptr = '\0'; }

    *ptr = '\0';

    return ptr;
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

    char* ptr = s1;

    for (; *ptr;  ++ptr);

    while (*s2 && (*ptr++ = *s2++));

    *ptr = '\0'; // null terminate s1

    return ptr;
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

    char* ptr = s1;

    for (; *ptr; ++ptr);

    while (n-- && (*ptr++ = *s2++));

    *ptr = '\0'; // null terminate s1

    return ptr;
}  // end method strncat

/**
 * Compares the string s1 with the string s2.
 * Returns 0 if s1 == s2, < 0 if s1 < s2, > 0 if s1 > s2.
 * @param const char*
 * @param const char*
 * @return int
 */
int strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1++ == *s2++));

    return (*(unsigned char*)s1 - *(unsigned char*)s2);
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
    while (--n && *s1 && (*s1++ == *s2++));

    return (*(unsigned char*)s1 - *(unsigned char*)s2);
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
