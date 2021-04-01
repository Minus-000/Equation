#pragma once
#include <iostream>
using namespace std;

#define DEGREE_MAX 10

class Equation
{
protected:
    int degree;
    int a[DEGREE_MAX];

public:
    Equation();
    Equation(const int &degree);

    void setCoeffs(int coeffs[]);
    void setCoeffs();

    void show() const;

    virtual void solve() const = 0; // abstract method

    virtual ~Equation();
};

class FirstDegreeEquation : public Equation
{
public:
    FirstDegreeEquation();

    void solve() const;
};

class QuadraticEquation : public Equation
{
public:
    QuadraticEquation();
    void solve() const;
};