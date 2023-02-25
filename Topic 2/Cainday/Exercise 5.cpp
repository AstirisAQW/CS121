/*
    (Financial application: future investment value)
    Write a program that reads in investment amount, 
    annual interest rate, and number of years, and 
    displays the future investment value using the
    following forumula:

    futureInvestmentValue =
        investmentAmount * (1 + monthlyInterestRate)
        ^numberOfYears*12

    For example, if you enter amount 1000, annual interest
    rate 3.25%, and number of years 1, the future 
    investment value is 1032.98.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float futureInvestmentValue,
          investmentAmount,
          monthlyInterestRate,
          annualInterestRate,
          numberOfYears;

    cout << "Enter investment amount: ";
    cin >> investmentAmount;
    cout << "Enter annual interest rate in percentage: ";
    cin >> annualInterestRate;
    cout << "Enter number of years: ";
    cin >> numberOfYears;
    cout << "Accumulated value is $";

    futureInvestmentValue =
        investmentAmount * 
        pow(1 + annualInterestRate/100, numberOfYears);

    cout << futureInvestmentValue << endl;
    return 0;
}