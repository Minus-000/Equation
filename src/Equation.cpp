#include <../include/Equation.h>
#include <math.h>

Equation::Equation()
{
    degree = 1;
}

Equation::Equation(const int &degree)
{
    this->degree = degree;
}

void Equation::setCoeffs(int coeffs[])
{
    for (int i = 0; i <= degree; i++)
    {
        a[i] = coeffs[i];
    }
    if (a[degree] == 0)
    {
        cerr << "a[" + degree << "] must not be zero!" << endl;
        a[degree] = 1;
    }
}

void Equation::setCoeffs()
{
    for (int i = 0; i <= degree; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    if (a[degree] == 0)
    {
        cerr << "a[" << degree << "] must not be zero!" << endl;
        a[degree] = 1;
    }
}

void Equation::show() const
{
    for (int i = degree; i > 0; i--)
    {
        cout << a[i] << "x^" << i << " + ";
    }
    cout << a[0] << " = 0" << endl;
}

Equation::~Equation()
{
    //future use
}

FirstDegreeEquation::FirstDegreeEquation() : Equation(1)
{
}

void FirstDegreeEquation::solve() const
{
    double x = (double)-a[0] / a[1];
    cout << "x = " << x << endl;
}

QuadraticEquation::QuadraticEquation() : Equation(2)
{
}

void QuadraticEquation::solve() const
{
    double delta = (double)a[1] * a[1] - (4 * a[2] * a[0]);
    if (delta == 0)
    {
        cout << "x1 = x2 = " << (double)-a[1] / (2 * a[2]) << endl;
    }
    else if (delta > 0)
    {
        cout << "x1 = " << (double)(-a[1] - (sqrt(delta) / (2 * a[2]))) << endl;
        cout << "x2 = " << (double)(-a[1] + (sqrt(delta) / (2 * a[2]))) << endl;
    }
    else
    {
        cout << "This equation has no root!" << endl;
    }
}
