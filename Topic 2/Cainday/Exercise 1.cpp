/*
    (Compute the volume of a cylinder)
    Write a program that reads in the radius and length
    of a cylinder and computes the area and volume using
    the following formulas:

    area = radius * radius * PI
    volume = area * length
*/

#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159265369;
    float radius, length, area, volume;

    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length;

    area = radius * radius * PI;
    volume = area * length;

    cout << "The area is " << area << endl;
    cout << "The volume is " << volume << endl;
    
    return 0;
}