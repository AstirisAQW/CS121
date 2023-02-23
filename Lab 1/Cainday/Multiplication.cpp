#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    float product = 0;
    for(int i = 0; i < y; i++) {
        product += x;
    }

    cout << x 
         << " x " 
         << y 
         << " = "
         << product 
         << endl;

    return 0;
}