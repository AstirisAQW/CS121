/*
    (Order three cites)
    Write a program that prompts the user to enter three cites and
    displays them in ascending order. Here is a sample run:
*/

#include <iostream>
using namespace std;

int main() {
    string cities[3];
    cout << "Enter the first city: ";
    getline(cin, cities[0]);
    cout << "Enter the second city: ";
    getline(cin, cities[1]);
    cout << "Enter the third city: ";
    getline(cin, cities[2]);

    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 2; i++) {
            if (cities[i] > cities[i+1]) {
                string temp = cities[i];
                cities[i] = cities[i+1];
                cities[i+1] = temp;
            }
        }
    }

    for (string city : cities) {
        cout << city << ", ";
    }
    cout << endl;
}