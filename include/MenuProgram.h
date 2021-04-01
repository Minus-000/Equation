#pragma once
#include <iostream>
#include <string>
using namespace std;

#define EXIT 0

class MenuProgram
{
public:
    void run();
protected:
    int getChoice();
    virtual void printMenu() = 0;
    virtual void doTask(const int &choice) = 0;
    virtual void printError() = 0;
};
