/*
    (Algebra: solve quadratic equations)
    The two roots of quadratic equation ax^2 + bx + c = 0
    can be obtained using the following formula

    r1 = (-b + sqrt(b^2 - 4ac))/2a
    r2 = (-b - sqrt(b^2 - 4ac))/2a

    b^2 - 4ac is called the discriminant of the quadratic
    equation. If it is positive, the equation has two real
    roots. If it is zero, the equation has one root. If it
    is negative, the equation has no real roots.

    Write a program that prompts the user to enter values 
    for a, b, and c and displays the result based on the
    discriminant. If the discriminant is positive, display
    two roots. If the discriminant is 0, display one root.
    Otherwise, display "The equation has no real roots".
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, r1, r2, discriminant;
    
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    discriminant = pow(b, 2) - 4 * a * c;
    r1 = (-1 * b + sqrt(discriminant)) / 2 * a;
    r2 = (-1 * b - sqrt(discriminant)) / 2 * a;

    if (discriminant > 0) 
        cout << "The roots are "
             << r1 << " and " 
             << r2 << endl;
    
    else if (discriminant == 0) 
        cout << "The root is "
             << r1 << endl;
    
    else 
        cout << "The equation has no real roots" << endl;

    return 0;
}

