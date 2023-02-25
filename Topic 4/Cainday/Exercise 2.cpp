/*
    (Geometry: area of a hexagon)
    The area of a hexagon can be computed using the following formula
    (s is the length of a side)

    Area = (6 x s^2) / (4 x tan(PI/6))

    Write a program that prompts the user to enter the side of a 
    hexagon and displays its area.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float side, area;
    cout << "Enter the side: ";
    cin >> side;
    
    area = (6 * pow(side, 2)) / (4 * tan(M_PI/6));

    cout << "The area of the hexagon is: "
         << area << endl;

    return 0;
}