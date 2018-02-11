/*
 * =====================================================================================
 *
 *       Filename:  CAI.hpp
 *
 *    Description:  Exercise 6.56-60 - Computer-Assisted Instruction
 *
 *        Version:  1.0
 *        Created:  16/04/16 15:25:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <random>

#include "Question.hpp"

class CAI {
 private:
    Question<int> _intQuestion;        // integer questions
    Question<double> _doubleQuestion;  // double questions

    enum class QuizStates { INIT, PLAY, EXIT };
    enum class ProblemTypes { DIVISION, MULTIPLICATION, ADDITION, SUBTRACTION };

    const int MAX_QUESTIONS = 10;


    QuizStates _currentState;
    ProblemTypes _problemType;

    std::vector<std::string> _correctResponses;
    std::vector<std::string> _incorrectResponses;

    int _questionCount;
    int _correct;
    int _incorrect;
    int _difficulty;
    int _randomProblem;

    std::mt19937 gen;

    // template to check answer
    template <typename T>
    bool checkAnswer(T answer, T solution) {
        return answer == solution;
    }

    void initialise();         // populates vectors
    void setDifficulty();      // prints and sets the difficulty
    void chooseProblemType();  // prints and sets the problem type
    void setProblemType(int);
    void generateQuestion();   // generates random numbers for question
    void askQuestion();        // prints the question
    void printResponse(bool);  // prints random response
    void printReport();        // prints performance report
    void reset();
    int getRandomNumber(const int&, const int&);

 public:
    CAI()
        : _questionCount(0),
          _correct(0),
          _incorrect(0),
          _difficulty(0),
          _randomProblem(0),
         gen(std::random_device()()){
        initialise();
    }
    ~CAI() {
        _correctResponses.clear();
        _incorrectResponses.clear();
    }

    void run();
};
