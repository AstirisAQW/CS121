#include <iostream>
using namespace std;

int main() {
    float dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;


    int integer = 0;
    while(dividend >= divisor) {
        dividend -= divisor;
        integer++;
    }    
    
    cout << integer;


    /* convert dividend remainder 
       to 3 point decimal */

    if (dividend != 0) {
        cout << '.';
        const int precision = 3;

        for (int i = 0; i < precision; i++) {
            if (dividend == 0) break; 

            while (dividend < divisor) {
                dividend *= 10;
            }

            integer = 0;
            while(dividend >= divisor) {
                dividend -= divisor;
                integer++;
            }

            cout << integer;
        }    
    }
    cout << endl;

    return 0;
}