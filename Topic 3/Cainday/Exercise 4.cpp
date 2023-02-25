/*
    (Game: scissor, rock, paper)
    Write a program that plays the popular scissor, rock,
    paper game. (A scissor can cut a paper, a rock can
    knock a scissor, and a paper can wrap a rock.) The 
    program randomly generates a number 0, 1, or 2 
    representing scissor, rock, or paper. The program 
    prompts the user to enter a number 0, 1, or 2 and 
    displays the message indicating whether the user or
    the computer wins, loses, or draws.
*/

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int prompt, computer;
    
    srand(time(0));
    computer = rand() % 3;

    cout << "scissor (0), "
         << "rock (1), "
         << "paper (2): ";
    
    cin >> prompt;

    const string choices[3] = 
        {"scissor", "rock", "paper"};

    cout << "The computer is " << choices[computer]
         << ". You are " << choices[prompt];

    if (prompt == computer) 
        cout << " too. It is a draw";
    else if (
        (prompt == 0 && computer == 2) ||
        (prompt == 1 && computer == 0) ||
        (prompt == 2 && computer == 1)
    ) 
        cout << ". You won";
    else 
        cout << ". You lose";
    
    cout << endl;
    return 0;
}