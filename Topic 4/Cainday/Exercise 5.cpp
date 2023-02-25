/*
    (Financial application: payroll)
    Write a program that reads the following information and prints
    a payroll statement:

        Employee's name (e.g., Smith)
        Number of hours worked in a week (e.g., 10)
        Hourly pay rate (e.g., 9.75)
        Federal tax witholding rate (e.g., 20%)
        State tax withholding rate (e.g., 9%)
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string employee_name;
    float hours_worked, 
          pay_rate,
          federal_tax_rate,
          state_tax_rate,
          federal_tax,
          state_tax,
          gross_pay,
          total_deduction,
          net_pay;
    
    cout << "Enter employee's name: ";
    cin >> employee_name;
    
    cout << "Enter number of hours worked in a week: ";
    cin >> hours_worked;
    
    cout << "Enter hourly pay rate: ";
    cin >> pay_rate;
    
    cout << "Enter federal tax withholding rate: ";
    cin >> federal_tax_rate;

    cout << "Enter state tax withholding rate: ";
    cin >> state_tax_rate;

    gross_pay       = hours_worked * pay_rate;
    federal_tax     = gross_pay    * federal_tax_rate;
    state_tax       = gross_pay    * state_tax_rate;
    total_deduction = federal_tax  + state_tax;
    net_pay         = gross_pay    - total_deduction;

    cout << showpoint << fixed << endl
         << "Employee Name: " << employee_name << endl
         
         << setprecision(1)
         << "Hours Worked: " << hours_worked  << endl
         
         << setprecision(2)
         << "Pay Rate: $" << pay_rate << endl
         << "Gross Pay: $" << gross_pay << endl
         << "Deductions: " << endl

         << setprecision(1)                             
         << "   Federal Witholding (" << (federal_tax_rate * 100)         
         << setprecision(2) << "%): $"   << federal_tax << endl
         
         << setprecision(1)                             
         << "   State Witholding (" << (state_tax_rate * 100)   
         << setprecision(2) << "%): $"   << state_tax << endl

         << "   Total Deduction: $" << total_deduction << endl
         << "Net Pay: $" << net_pay << endl;

    return 0;
}