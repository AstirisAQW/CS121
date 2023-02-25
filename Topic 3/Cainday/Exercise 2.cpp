/*
    (Check numbers)
    Write a program that prompts the user to enter two 
    integers and checks wheter the first number is 
    divisible by the second
*/

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    (x % y == 0) 
        ? cout << x << " is divisible by " << y
        : cout << x << " is not divisible by " << y;
    cout << endl; 
    return 0;
}