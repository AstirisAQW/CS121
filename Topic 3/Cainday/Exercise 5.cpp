/*
    (Geometry: points in triangle?)
    Suppose a right triangle is placed in a plane as 
    shown below. The right-angle point is placed at
    (0, 0), and the other two points are placed at 
    (200, 0), and (0, 100). Write a program that prompts
    the user to enter a point with x- and y-coordinates
    and determines whethter the point is inside the
    triangle.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int coordinates[3][2] = {
        {0, 0}, {0, 100}, {200, 0}
    };

    float x, y, min_x, min_y, max_x, max_y, slope;
    cout << "Enter a point's x- and y-coordinates: ";
    cin >> x >> y;
    
    max_x = max_y = min_x = min_y = 0;
    for (const auto& point : coordinates) {
        min_x = min((float)point[0], min_x);
        min_y = min((float)point[1], min_y);
        max_x = max((float)point[0], max_x);
        max_y = max((float)point[1], max_y);
    }

    slope = (max_y - min_y) / (max_x - min_x);
    max_y = slope * x;
    
    if (
        x > max_x || x < min_x ||
        y > max_y || y < min_y    
    ) 
        cout << "The point is not in the triangle";
    else
        cout << "The point is in the triangle";
    
    cout << endl;
    return 0;
}