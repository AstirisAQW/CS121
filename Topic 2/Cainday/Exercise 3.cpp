/*
    (Health application: BMI) 
    Body Mass Index (BMI) is a measure of health on weight.
    It can be calculated by taking your weight in kilograms
    and dividing by the square of your height in meters.
    Write a program that prompts the user to enter a 
    weight in pounds and height in inches and displays
    the BMI.

    Note that one pound is 0.45359237 kilograms and 
    one inch is 0.0254 meters.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float weight_lbs, weight_kg, height_in, height_m, bmi;

    const float lbs_to_kg = 0.45359237;
    const float in_to_kg = 0.0254;

    cout << "Enter weight in pounds: ";
    cin >> weight_lbs;
    cout << "Enter height in inches: ";
    cin >> height_in;

    weight_kg = lbs_to_kg * weight_lbs;
    height_m = in_to_kg * height_in;
    bmi = weight_kg / pow(height_m, 2);

    cout << "BMI is " << bmi << endl;
    return 0;
}