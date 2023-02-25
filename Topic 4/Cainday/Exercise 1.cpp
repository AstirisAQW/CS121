/*
    (Geometry: great circle distance)
    The great circle distance is the distance between two
    points on the surface of a sphere. Let (x1, y1) and
    (x2, y2) be the geographical latitude and longitude
    of two points. The great circle distance between the
    two points can be computed using the following 
    formula:

    d = radius * arccos(
        sin(x1) * sin(x2) + cos(x1) 
        * cos(x2) * cos(y1 - y2)
    )

    Write a program that prompts the user to enter the
    latitude and longitude of two points on the earth in
    degrees and displays its great circle distance. The
    average earth radius is 6,378.1 km. The latitude and
    longitude degrees in the formula are for north and 
    west. Use negative to indicate south and east degrees.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const float radius = 6371;
    const float PI = 3.14159265369;
    float y1, x1, y2, x2, distance;

    cout << "Enter point 1 (latitude and longitude) in degrees: " << endl;
    cin >> x1 >> y1;
    cout << "Enter point 2 (latitude and longitude) in degrees: " << endl;
    cin >> x2 >> y2;

    float x1_rad, y1_rad, x2_rad, y2_rad;
    x1_rad = x1 * PI / 180;
    y1_rad = y1 * PI / 180;
    x2_rad = x2 * PI / 180;
    y2_rad = y2 * PI / 180;

    distance = radius * acos(sin(x1_rad) * sin(x2_rad) + cos(x1_rad) * cos(x2_rad) * cos(y1_rad - y2_rad));

    cout << "The distance between the two points is "
         << distance << " km" << endl;

    return 0;
}