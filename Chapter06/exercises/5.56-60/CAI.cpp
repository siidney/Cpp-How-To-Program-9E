/*
 * =====================================================================================
 *
 *       Filename:  CAI.cpp
 *
 *    Description:  Exercise 5.56-60 - Computer-Assisted Instruction
 *
 *        Version:  1.0
 *        Created:  16/04/16 15:25:59
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "CAI.h"

// INITIALISATION
void CAI::initialise(){
    _currentState = QuizStates::INIT;

    // build response vectors
    _correctResponses.push_back("\\(^-^)/ Very good!");
    _correctResponses.push_back("Excellent!");
    _correctResponses.push_back("Nice work!");
    _correctResponses.push_back("Keep up the good work!");
    _incorrectResponses.push_back("No. Please try again.");
    _incorrectResponses.push_back("Wrong. Try once more.");
    _incorrectResponses.push_back("Don't give up!");
    _incorrectResponses.push_back("No. Keep trying.");

    srand(static_cast<int>(time(0)));
}
// prints a menu and sets the difficulty level
void CAI::setDifficulty(){
    int choice = 0;

    while(choice == 0){
        std::cout << "Welcome to the quiz.\nPlease select your difficulty level:\n";
        std::cout << "1. Super mega easy.\n"
                  << "2. Normal\n"
                  << "3. Insane\n"
                  << "4. Genius Mode\n"
                  << "> ";

        std::cin >> choice;

        if(choice >= 1  && choice <= 4){
            _currentState = QuizStates::PLAY;
            _difficulty = choice;
        }else{
            choice = 0;
        }
    }
}
// prints a menu and sets the problem type
void CAI::chooseProblemType(){
    int choice = 0;

    while(choice == 0){
        std::cout << "Please select the type of problems to solve:\n";
        std::cout << "1. Addition.\n"
                  << "2. Subtraction.\n"
                  << "3. Multiplication.\n"
                  << "4. Division.\n"
                  << "5. Randomised.\n"
                  << "> ";

        std::cin >> choice;

        if(choice >= 1 && choice <= 5){
            setProblemType(choice);
        }else{
            choice = 0;
        }
    }
}
// set problem type separately from printing as if choice is random needs to be
// done at beginning of each question.
void CAI::setProblemType(int type){
    switch(type){
        case 1:
            _problemType = ProblemTypes::ADDITION;
            break;
        case 2:
            _problemType = ProblemTypes::SUBTRACTION;
            break;
        case 3:
            _problemType = ProblemTypes::MULTIPLICATION;
            break;
        case 4:
            _problemType = ProblemTypes::DIVISION;
            break;
        case 5:
            _randomProblem = 1;
            break;
        default:
            break;
    }
}
// generates and assigns a pair of random numbers for the current question
void CAI::generateQuestion(){
//    srand(static_cast<int>(time(0)));

    int limit;

    switch(_difficulty){
        case 1:
        default:
            limit = 9;
            break;
        case 2:
            limit = 99;
            break;
        case 3:
            limit = 999;
            break;
        case 4:
            limit = 9999;
            break;
    }

    // randomise division from 1 so as to avoid divide by zero
    if(_problemType == ProblemTypes::DIVISION){
        _doubleQuestion.init((1 + rand() % limit), (1 + rand() % limit));
    }else{
        _intQuestion.init((rand() % limit), (rand() % limit));
    }
}
// asks the question
void CAI::askQuestion(){
    int intAnswer;
    int intSolution;

    double doubleAnswer;
    double doubleSolution;

    bool correct;

    std::string questionOperator;

    _questionCount++;

    if(_randomProblem == 1){
        setProblemType(1 + rand() % 4);
    }

    // question needs generating after random problem
    // division requires double type
    generateQuestion();

    switch(_problemType){
        case ProblemTypes::ADDITION:
            questionOperator = " + ";
            intSolution = _intQuestion.add();
            break;
        case ProblemTypes::SUBTRACTION:
            questionOperator = " - " ;
            intSolution = _intQuestion.subtract();
            break;
        case ProblemTypes::MULTIPLICATION:
            questionOperator = " * ";
            intSolution = _intQuestion.multiply();
            break;
        case ProblemTypes::DIVISION:
            questionOperator = " / ";
            doubleSolution = _doubleQuestion.divide();
            break;
        default:
            break;
    }

    std::cout << "\n" <<  _questionCount << "/" << MAX_QUESTIONS << ": ";

    if(_problemType == ProblemTypes::DIVISION){
        std::cout << _doubleQuestion.num1 << questionOperator << _doubleQuestion.num2 << "? ";
        std::cin >> doubleAnswer;

        while(std::cin.fail()){
            std::cout << _doubleQuestion.num1 << questionOperator << _doubleQuestion.num2 << "? ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> doubleAnswer;
        }

        correct = checkAnswer(doubleAnswer, doubleSolution);
    }else{
        std::cout << _intQuestion.num1 << questionOperator << _intQuestion.num2 << "? ";
        std::cin >> intAnswer;

        while(std::cin.fail()){
            std::cout << _intQuestion.num1 << questionOperator << _intQuestion.num2 << "? ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> intAnswer;
        }

        correct = checkAnswer(intAnswer, intSolution);
    }

    printResponse(correct);

    (correct) ? _correct++ : _incorrect++;
}
// prints response based on whether the question was answered correctly
void CAI::printResponse(bool correct){
 //   srand(static_cast<int>(time(0)));

    if(correct){
        std::cout << "\n\t*** "
                  << _correctResponses[rand() % _correctResponses.size()] << " ***" << std::endl;
    }else{
        std::cout << "\n\t*** "
                  << _incorrectResponses[rand() % _incorrectResponses.size()] << " ***" << std::endl;
    }
}
// calculates and prints the players performance report
void CAI::printReport(){
    double percent = (static_cast<double>(_correct)/static_cast<double>(MAX_QUESTIONS)) * 100;

    std::cout << "\nYou scored " << percent << "%" << std::endl;

    if(percent < 75.0f){
        std::cout << "\n*** Please ask your teacher for extra help. ***" << std::endl;
    }else{
        std::cout << "\n*** (/.__.)/\\(.__.\\) Congratulations, you are ready to go on to the next level! ***"
                  << std::endl;
    }
}
void CAI::reset(){
    _questionCount = 0;
    _correct = 0;
    _incorrect = 0;
    _difficulty = 0;
    _randomProblem = 0;

    _currentState = QuizStates::INIT;

    srand(static_cast<int>(time(0)));
}
// main game loop
void CAI::run(){
    char cont;

    while(_currentState != QuizStates::EXIT){
        if(_questionCount == 0){
            setDifficulty();
            chooseProblemType();
        }

        askQuestion();

        if(_questionCount == MAX_QUESTIONS){
            printReport();

            std::cout << "\nPlay again (y/n)? ";
            std::cin >> cont;

            if(cont == 'y')
                reset();
            else
                _currentState = QuizStates::EXIT;
        }
    }
}
