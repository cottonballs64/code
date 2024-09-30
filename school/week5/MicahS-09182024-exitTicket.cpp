/*
Write a C++ program that plays a guessing game.

Use a Do-while loop around the game, so that the user plays once before getting asked if they want to play again.

In each game:
Choose a random number between 1 and 100.
Initialize a guessCounter int variable to 0.
Prompt the user to guess the number.

After the user guesses, compare the guess to the correct answer:
If the guess is too high, let the user know, increment the guess counter, and prompt for another guess.
If the guess is too low, let the user know, increment the guess counter, and prompt for another guess.
If the guess is correct, increment the guess counter, let the user know, and end the game.

After each game, prompt the user if they want to play again.  If they do, play again.
*/
#include <iostream>
using namespace std;

int main() {
const int ANSWER_MIN = 1, ANSWER_MAX = 100;
char again = 'N';
do
{
    srand(time(0));
    int answer = rand() % ((ANSWER_MAX - ANSWER_MIN + 1) + ANSWER_MIN), num = 0, count = 0;
    while (num != answer)
    {
        cout << "Please enter a number between 1 and 100\n";
        cin >> num;
        count++;
        if (answer == num)
        {cout << "Winner! ";}
        else if (answer < num)
        {
            cout << "Your guess was too high!\n" << "Guess again - ";
        }
        else if (answer > num)
        {
            cout << "Your guess was too low!\n" << "Guess again - ";
        }
    }
    cout << "It took you " << count << " guesses to win.\n";
    cout << "Would you like to play again?\n" << "Enter Y to play again, N to end the program.\n";
    cin >> again;
    }
while (again == 'Y' || again == 'y');
return 0;
}
