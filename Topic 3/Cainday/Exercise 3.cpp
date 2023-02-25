/*
    (Algebra: solve 2 x 2 linear equations)
    You can use Cramer's rule to solve the following
    2 x 2 system of linear equation:

    ax + by = e
    cx + dy = f

    x = ed - bf / ad - bc
    y = af - ec / ad - bc

    Write a program that prompts the user to enter
    a, b, c, d, e, and f, and displays the result.
    If ad - bc is 0, report that 
    "The equation has no solution"
*/

#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    double D, Dx, Dy, x, y;
    cout << "Enter a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;

    D = (a * d) - (b * c);
    Dx = (e * d) - (b * f);
    Dy = (a * f) - (e * c);
    x = Dx / D;
    y = Dy / D;

    (D == 0)
        ? cout << "The equation has no solution"
        : cout << "x is " << x << " and y is " << y;
    cout << endl;
    return 0;
}