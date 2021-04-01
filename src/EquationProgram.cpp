#include <EquationProgram.h>

void EquationProgram::printMenu()
{
    cout << "Equation Program" << endl;
    cout << "1. Add first degree equation" << endl;
    cout << "2. Add quadratic equation" << endl;
    cout << "3. Solve equation" << endl;
    cout << "0. Exit" << endl;
}

void EquationProgram::doTask(const int &choice)
{
    switch (choice)
    {
    case ADD_FIRST_EQUATION:
        addFirstDegreeEquation();
        break;
    case ADD_SECOND_EQUATION:
        addQuadraticEquation();
        break;
    case SOLVE_EQUATIONS:
        solveEquaion();
        break;
    case EXIT:
        endProgram();
        break;
    default:
        printError();
        break;
    }
}

void EquationProgram::addFirstDegreeEquation()
{
    FirstDegreeEquation *eq = new FirstDegreeEquation();
    eq -> setCoeffs();

    equations.push_back(eq);
}

void EquationProgram::addQuadraticEquation()
{
    QuadraticEquation *eq = new QuadraticEquation();
    eq -> setCoeffs();

    equations.push_back(eq);
}

void EquationProgram::solveEquaion() 
{
    for (int i = 0; i < equations.size(); i++) {
        equations[i] -> show();
        equations[i] -> solve();
    }
}

void EquationProgram::endProgram()
{
    cout << "Program ended..." << endl;
}

void EquationProgram::printError() 
{
    cout << "Invalid choice..." << endl;
}

EquationProgram::~EquationProgram() 
{
    for (int  i = 0; i < equations.size(); i++) {
        delete equations[i];
    }
}
