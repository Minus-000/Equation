#pragma once
#include "MenuProgram.h"
#include "Equation.h"

#include <iostream>
#include <iostream>
#include <vector>

#define ADD_FIRST_EQUATION 1
#define ADD_SECOND_EQUATION 2
#define SOLVE_EQUATIONS 3

using namespace std;

class EquationProgram : public MenuProgram
{
private:
    vector<Equation*> equations;
    void printMenu();
    void doTask(const int &choice);

    void addFirstDegreeEquation();
    void addQuadraticEquation();
    void solveEquaion();
    void endProgram();
    void printError();

public:
    ~EquationProgram();
};