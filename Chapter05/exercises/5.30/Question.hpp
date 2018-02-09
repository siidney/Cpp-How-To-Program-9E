/*
 * =====================================================================================
 *
 *       Filename:  Question.hpp
 *
 *    Description:  Exercise 5.30 - Global Warming Facts Quiz (Without the
 *                  global warming facts)
 *                  Question Object - Represents a single question
 *
 *        Version:  1.0
 *        Created:  08/04/16 15:47:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <algorithm>  // shuffle
#include <chrono>     // system_clock
#include <iostream>
#include <random>  // random_engine
#include <string>
#include <vector>

class Question {
 private:
    std::string _q;
    std::string _a;
    std::string _b;
    std::string _c;
    std::string _d;

    std::vector<std::string> _answers;

    int _correct;

 public:
    Question() : _correct(0) { initialise(); }

    Question(const std::string& Q, const std::string& A, const std::string& B,
             const std::string& C, const std::string& D)
        : _q(Q), _a(A), _b(B), _c(C), _d(D), _correct(0) {
        initialise();
    }
    ~Question() { cleanup(); }

    void initialise();

    // SETTERS
    void setQuestion(const std::string&);
    void setA(const std::string&);
    void setB(const std::string&);
    void setC(const std::string&);
    void setD(const std::string&);

    // GETTERS
    void getQuestion() const;

    // answer the question - Letter or numerical answer
    bool answer(char&);
    bool answer(int);

    // check if answered correctly
    bool isCorrect() { return _correct == 1; }

    void cleanup() { _answers.clear(); }
};
