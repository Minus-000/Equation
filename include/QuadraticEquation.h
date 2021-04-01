#include <FirstDegreeEquation.h>

class QuadraticEquation : public FirstDegreeEquation
{
private:
    int a2;
public:
    QuadraticEquation();
    QuadraticEquation(int a2);

    void show() const;

    void solve() const;

    ~QuadraticEquation();
};
