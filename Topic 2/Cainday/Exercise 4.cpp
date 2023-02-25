/*
    (Cost of driving)
    Write a program that prompts the user to enter the
    distance to drive, the fuel efficiency of the car
    in miles per gallon, and the price per gallon, and
    displays the cost of the trip.
*/

#include <iostream>
using namespace std;

int main() {
    float driving_distance, 
          miles_per_gallon, 
          price_per_gallon,
          cost_of_driving,
          total_gallons;

    cout << "Enter the driving distance: ";
    cin >> driving_distance;
    cout << "Enter the miles per gallon: ";
    cin >> miles_per_gallon;
    cout << "Enter price per gallon: ";
    cin >> price_per_gallon;
    cout << "The cost of driving is $";
    
    total_gallons = driving_distance / miles_per_gallon;
    cost_of_driving = total_gallons * price_per_gallon;

    cout << cost_of_driving << endl;
    return 0;
}