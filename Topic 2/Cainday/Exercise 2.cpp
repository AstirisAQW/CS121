/*
    (Sum the digits in an integer)
    Write a program that reads an integer between 
    0 and 1000 and adds all the digits in the integer.
    For example, if an integer is 932, the sum of all
    its digits is 14.

    Hint: Use the % operator to extract digits,
    and use the / operator to remove the extracted digit.

    For instance, 932 % 10 = 2 and 932 / 10 = 93
*/

#include <iostream>
using namespace std;

int main() {
    int next, sum;
    cout << "Enter a number between 0 and 1000: ";
    cin >> next;

    sum = 0;
    while (next > 9) {
        sum += next % 10;
        next = static_cast<int>(next / 10);
    }    
    sum += next;

    cout << "The sum of the digits is " << sum << endl;
    return 0;
}