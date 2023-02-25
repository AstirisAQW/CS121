/*
    (Vower or Consonant?)
    Assume letters A/a, E/e, I/i, O/o, and U/u as the vowels. Write a
    program that prompts the user to enter a letter and check 
    whether the letter is a vowel or consonant.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    const char vowels[5] = {'A', 'E', 'I', 'O', 'U'};
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    cout << letter;

    if (isalpha(letter)) {
        bool check = false;
        for (char vowel : vowels) {
            if (vowel == letter || vowel == letter - 32) {
                check = true;
                break;
            }
        }
        (check) 
            ? cout << " is a vowel"
            : cout << " is a consonant";
    }
    else {
        cout << " is an invalid input";
    }
    cout << endl;
    
    return 0;
}